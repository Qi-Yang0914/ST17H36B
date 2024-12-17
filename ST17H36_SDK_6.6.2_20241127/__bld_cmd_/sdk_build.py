#! /usr/bin/env python3
import os
import glob
import struct
import sys
import time
import traceback
import yaml
import re
import git
from datetime import datetime

import add_discalimer3
import cdk_api,keil_api,risv_api

global work_path

dict_yml_name = 'sdk_build'
dict_build_list = {}

locallocation = os.path.dirname(os.path.realpath(__file__))
locallocation = os.path.dirname(locallocation)

error_count = 0
warning_count = 0
com_failed_count = 0
exe_path_list =None



def check_dirs(work_path1=None):
    global work_path
    if work_path1:
        work_path = work_path1
    curpath = work_path + "\\_bld_script\\"
    cdkyml = os.path.exists(windows_to_linux(curpath + 'cdk-make.yml'))
    keilyml = os.path.exists(windows_to_linux(curpath + 'sdk_bld_tool.yml'))
    riscvyml = os.path.exists(windows_to_linux(curpath + 'riscv_make.yml'))

    flg = 0
    if cdkyml:
        flg = 1
    elif keilyml:
        flg = 2
    elif riscvyml:
        flg = 3
    else:
        print("Error, Please check dirname!\n")
        pass
    return flg


def checkTimeCost(strIn, lastTick, prtFlg=0, logFile=None):
    tCur = time.perf_counter()
    tCost = (tCur - lastTick) / (1.0 / 1e6)
    if logFile:
        logFile.write('Time Cost------ %20s -------- %9.3f ms\n' % (strIn, tCost / 1000))

    if prtFlg == 1:
        print('Time Cost------ %20s -------- %9.3f ms' % (strIn, tCost / 1000))
    else:
        pass
    return tCur, tCost


class build:
    def __init__(self, path):
        global dict_yml_name
        self.yml_name = dict_yml_name
        self.m_path = windows_to_linux(path)
        ret = check_dirs()
        if ret == 1:
            keil_path = cdk_api.Search_for_cdk()
        elif ret == 2:
            keil_path = keil_api.Search_for_keil()
        elif ret == 3:
            keil_path = Search_for_riscv()
        self.m_keil_path = keil_path
        self.m_logfile = None

        path = self.m_path
        st = 0
        while True:
            st1 = path.find('\\', st + 1)
            if st1 < 0:
                break
            st = st1
        path = path[:st + 1]
        self.m_fold = path

    def log(self, para0, para1=None, para2=None, para3=None):
        if self.m_logfile is None:
            print(para0, para1, para2, para3)
            return
        if para1 is None and para2 is None and para3 is None:
            self.m_logfile.write(str(para0) + '\n')

        if type(para1) is list:
            self.m_logfile.write('    ' + str(para0) + '\n')
            for itm in para1:
                self.m_logfile.write('    ' + str(itm))

        if type(para0) is int:
            self.m_logfile.write('    Error %d, Warning %d\n' % (para0, para1))
            for itm in para2:
                self.m_logfile.write('    ' + str(itm))

    def new_config_line(self, proj_line, build_param):
        new_line = proj_line[:proj_line.find('<Define>') + 8]
        start_space = ''
        proj_cfg = proj_line[proj_line.find('<Define>') + 8:proj_line.find('</Define>')]
        proj_cfg = proj_cfg.split(' ')
        for i in range(len(proj_cfg)):
            proj_cfg[i] = proj_cfg[i].split('=')
            value = proj_cfg[i][0]
            if value in build_param:
                if len(proj_cfg[i]) == 2:
                    proj_cfg[i][1] = build_param[value]
                    print('BLD_CFG : %s --> %s' % (proj_cfg[i][0], proj_cfg[i][1]))
                elif len(proj_cfg[i]) == 1:
                    proj_cfg[i][0] = build_param[value]
                    print("BLD_CFG : %s", proj_cfg[i][0])
        for cfg in proj_cfg:
            if len(cfg) == 1:
                new_line = new_line + start_space + cfg[0]
            else:
                new_line = new_line + start_space + cfg[0] + '=' + cfg[1]
            start_space = ' '
        new_line = new_line + '</Define>\r'
        # print(new_line)
        return new_line

    def config_proj(self, build_param):
        # backup project file
        c_flg = False
        proj_backup = ''
        proj_items = []
        dirs = check_dirs()
        if dirs == 1:
            filename = re.split('[.]', self.m_path)
            if len(filename) == 2:
                file_n = filename[0] + '.cdkproj'
            if len(filename) == 3:
                file_n = '..' + filename[0] + filename[1] + filename[2] + '.cdkproj'
            fsize = os.path.getsize(file_n)
            fprj = open(file_n, 'r')
            project_backup = fprj.read(fsize)
            fprj.seek(0)
            while True:
                proj_line = fprj.readline()
                if proj_line.find('<Compiler>') > 0:
                    # print('<Cads>')
                    c_flg = True

                if c_flg:
                    if proj_line.find('<Define>') >= 0:
                        proj_line = self.new_config_line(proj_line, build_param)
                if len(proj_line) == 0:
                    break
                proj_line = proj_line[:-1]
                proj_items.append(proj_line)
            fprj.close()

            fprj = open(file_n, 'wb')
        elif dirs == 2:
            fsize = os.path.getsize(self.m_path)
            fprj = open(self.m_path, 'r')
            project_backup = fprj.read(fsize)
            fprj.seek(0)
            while True:
                proj_line = fprj.readline()
                if proj_line.find('<Cads>') > 0:
                    c_flg = True
                if proj_line.find('<Aads>') > 0:
                    c_flg = False
                if c_flg:
                    if proj_line.find('<Define>') >= 0:
                        proj_line = self.new_config_line(proj_line, build_param)
                if len(proj_line) == 0:
                    break
                proj_line = proj_line[:-1]
                proj_items.append(proj_line)
            fprj.close()
            fprj = open(self.m_path, 'wb')
        elif dirs == 3:
            return 0
        for proj_line in proj_items:
            fprj.write(proj_line.encode())
            fprj.write(b'\n')
        fprj.close()
        # print('pause')
        # input()
        return project_backup

    def new_hex(self, soufile,i):
        path = windows_to_linux(self.m_path)
        if sys.platform == 'linux':
            sou_path =windows_to_linux( path + '/' + soufile)
            si_path = windows_to_linux(path + i)
            os.system('cp ' + sou_path + ' ' + si_path)
            # os.system('cp ' + path + '/'+ output[0] + ' ' + path + output[1])
        else:
            print(('copy /Y ' + path + soufile + ' ' + path + i))
            os.system('copy /Y ' + path + soufile + ' ' + path + i)

    def new_asm(self, output):
        path = self.m_fold
        os.system('copy /Y ' + path + output[2] + ' ' + path + output[3])

    def gen_asm(self, output):
        if len(output) < 3:
            print("Check Output[3] no asm config!!!")
            return False

        keil_path = keil_api.Search_for_keil()
        path_list = keil_path.split('\\')
        a = path_list[0:-2]
        fromElfPath = ''
        for x in a:
            fromElfPath = fromElfPath + x + '\\'
        fromElfPath = fromElfPath + 'ARM\\ARMCC\\bin\\fromelf.exe'
        # print(fromElfPath)
        if not os.path.exists(fromElfPath):
            print("Can Not Find fromelf.exe : %s \n", fromElfPath)
            return False
        path = self.m_fold
        if len(output) == 4:
            axfPath = path + output[3]
        else:
            axfPath = path + output[0].split(".hex")[0] + '.axf'
        if not os.path.exists(axfPath):
            print("Can Not Find AXF : %s \n", axfPath)
            return False
        asmPath = path + '\\Listings\\' + output[2]
        os.system(fromElfPath + ' -c -a -d -e -v -o ' + asmPath + ' ' + axfPath)
        return True

    def setlogfile(self, logf):
        self.m_logfile = logf

    def find_str(self, fname, str):
        flog = open(fname, "r")
        with flog as f:
            counts = 0
            for line in f.readlines():
                str1 = line.count(str)
                counts += str1
        return counts

    def find_str1(self, fname, str2, sstr, ssstr,sssstr):
        flog = open(fname, "r")
        with flog as f:
            counts = 0
            for line in f.readlines():
                str1 = line.count(str2) + line.count(sstr) + line.count(ssstr) + line.count(sssstr)
                counts += str1
        return counts

    def read_log(self, fname, keyword):
        flog = open(fname, "r")
        with flog as file:
            counts = 0
            for line in file.readlines():
                keywords = line.count(keyword)
                counts += keywords
            return counts

    def build_check_riscv(self,timeout=100):
        for i in range(timeout):
            if os.path.exists(self.m_path + '\_bld.txt'):
                time.sleep(1)
                break
            time.sleep(0.1)
        if i == timeout:
            print('Wait build result timeout')
            self.log('Wait build result timeout', [])
            return False

        log_list = []
        fname = self.m_path + '\_bld.txt'
        fname = windows_to_linux(fname)
        flog = open(fname, 'r', encoding='utf-8',errors='ignore')

        global error_count
        counts = self.find_str1(fname, ': error:', ': fatal error:', 'No rule to make target', 'Nothing to be done for')
        counts_a = counts - error_count
        print("%s:%d" % ('Total Error', counts))
        error_count = counts

        global warning_count
        waring_a = self.find_str(fname, ': warning:')
        counts_b = waring_a - warning_count
        print("%s:%d" % ('Total Warning', waring_a))
        warning_count = waring_a

        global com_failed_count
        if counts_a != 0:
            print("Compile Failed")
            com_failed_count += 1
        else:
            print("Compile Successed")

        errnum = (self.read_log(fname, ': error:') +
                  self.read_log(fname, ': fatal error:') +
                  self.read_log(fname,'No rule to make target') +
                  self.read_log(fname,'Nothing to be done for'))
        # self.read_log(fname, ': warning:')

        compile_flg = False
        while True:
            logstr = flog.readline()
            if len(logstr) == 0:
                break  # read conpleted
            log_list.append(logstr)
            if errnum > 0:
                compile_flg = False
            else:
                return True

        if compile_flg is False:
            return False
        return True

    def build_check_cdk(self, timeout=100):
        i = 0

        for i in range(timeout):
            if os.path.exists(self.m_fold + '\_bld.txt'):
                time.sleep(1)
                break
            time.sleep(0.1)
        if i == timeout:
            print('Wait build result timeout')
            self.log('Wait build result timeout', [])
            return False

        log_list = []
        fname = self.m_fold + '\_bld.txt'
        flog = open(fname, 'r', encoding='utf-8-sig')

        global error_count
        counts = self.find_str1(fname, ': error:', ': fatal error:', 'No rule to make target', 'Nothing to be done for')
        counts_a = counts - error_count
        print("%s:%d" % ('Total Error', counts_a))
        error_count = counts

        global warning_count
        waring_a = self.find_str(fname, ': warning:')
        counts_b = waring_a - warning_count
        print("%s:%d" % ('Total Warning', counts_b))
        warning_count = waring_a

        global com_failed_count
        if counts_a != 0:
            print("Compile Failed")
            com_failed_count += 1
        else:
            print("Compile Successed")

        errnum = (self.read_log(fname, ': error:') + self.read_log(fname, ': fatal error:') + self.read_log(fname,
                                                                                                             'No rule to make target'))
        # self.read_log(fname, ': warning:')

        compile_flg = False
        while True:
            logstr = flog.readline()
            if len(logstr) == 0:
                break  # read conpleted
            log_list.append(logstr)
            if errnum > 0:
                compile_flg = False
            else:
                return True

        if compile_flg is False:
            return False
        return True

    # if():#check warning

    def build_check_keil(self, timeout=100):
        i = 0
        for i in range(timeout):
            if os.path.exists(self.m_fold + '_bld.txt'):
                time.sleep(1)
                break
            time.sleep(0.1)
        if i == timeout:
            print('Wait build result timeout')
            self.log('Wait build result timeout', [])
            return False

        log_list = []
        flog = open(self.m_fold + '_bld.txt', 'r', encoding='utf-8-sig')
        compile_flg = False
        global error_count
        global warning_count
        global com_failed_count
        while True:
            try:
                logstr = flog.readline()
            except UnicodeDecodeError as e:
                logstr = "1 Error(s), 0 Warning(s)"
            finally:
                if len(logstr) == 0:
                    break  # read conpleted
                log_list.append(logstr)
                if logstr.find('Error(s)') > 0 and logstr.find('Warning(s)') > 0:
                    compile_flg = True
                    errnum = int(logstr[logstr.find('-') + 1:logstr.find('Error(s)')])
                    warnum = int(logstr[logstr.find('Error(s)') + 9: logstr.find('Warning(s)')])
                    error_count += errnum
                    warning_count += warnum
                    if errnum + warnum:
                        print('Error %d, Warning %d' % (errnum, warnum))
                        self.log(errnum, warnum, log_list)
                        if errnum:
                            return False

        if compile_flg is False:
            print('Compile Failed')
            com_failed_count += 1
            self.log('Compile Failed', log_list)
            return False
        else:
            print('Compile Successed')
        return True

    def __call__(self, build_param=None, output=None):
        lastTick = time.perf_counter()
        tcLog = self.m_logfile
        tcPrtFlg = 1
        dirs = check_dirs()

        project_backup = ''
        if not os.path.exists(self.m_path):
            print('\n\nProject file is not exist:', self.m_path)
            self.log('\n\nProject file is not exist:', self.m_path)
            return False
        if sys.platform != 'linux':
            if not os.path.exists(windows_to_linux(self.m_keil_path)):
                print('Can\'t find SOFTWARE IDE :', self.m_keil_path)
                return False

        if dirs == 2:
            # pass
            os.system('del /f /q  ' + self.m_fold + '_bld.txt')

        if dirs == 3 :
            print('\nCompiling...\n' + self.m_path)
            self.log('\nCompiling...\n' + self.m_path)
        else:
            print('\nBuilding...\n' + self.m_path)
            self.log('\nBuilding...\n' + self.m_path)

        [lastTick, tCost] = checkTimeCost('T0', lastTick, tcPrtFlg, tcLog)
        if build_param is not None and dirs != 3:
            project_backup = self.config_proj(build_param)

        [lastTick, tCost] = checkTimeCost('Config Proj', lastTick, tcPrtFlg, tcLog)

        if dirs == 1:
            cmd = self.m_keil_path + ' -w ' + self.m_path + ' -d rebuild ' + ' -c BuildSet ' + ' 1>>' + self.m_fold  + '\_bld.txt 2>&1 '
            os.system(cmd)
        elif dirs == 2:
            cmd = self.m_keil_path + ' -r -j0 ' + self.m_path + ' -o _bld.txt'
            os.system(cmd)
        elif dirs == 3:
            # Setup Nuclei SDK Tool Environment
            log_path = self.m_path + '\_bld.txt'
            log_path = windows_to_linux(log_path)
            global exe_path_list
            if not exe_path_list:
                if sys.platform == 'linux':
                    path = windows_to_linux(self.m_keil_path)
                    new_path = path + '\\gcc\\bin' + os.pathsep + path + "\\openocd\\bin" + \
                            os.pathsep + path + "\\build-tools\\bin" + os.pathsep + path + "\qemu\\bin"
                else:
                    new_path = self.m_keil_path + '\\gcc\\bin' + os.pathsep + self.m_keil_path + "\\openocd\\bin" + \
                                       os.pathsep + self.m_keil_path + "\\build-tools\\bin" + os.pathsep + self.m_keil_path + "\qemu\\bin"
            else:
                new_path = ''
                if sys.platform == 'linux':
                    for i in exe_path_list:
                        path = windows_to_linux(i)
                        exe_path = path + '\\gcc\\bin' + os.pathsep + path + "\\openocd\\bin" + \
                                   os.pathsep + path + "\\build-tools\\bin" + os.pathsep + path + "\qemu\\bin"
                        exe_path = windows_to_linux(exe_path)
                        new_path = exe_path + os.pathsep + new_path
                else:
                    for i in exe_path_list:
                        path = windows_to_linux(i)
                        exe_path = path + '\\gcc\\bin' + os.pathsep + path + "\\openocd\\bin" + \
                                   os.pathsep + path + "\\build-tools\\bin" + os.pathsep + path + "\qemu\\bin"
                        new_path = exe_path + os.pathsep + new_path
            if new_path not in os.environ["PATH"]:
                os.environ["PATH"] = new_path + os.pathsep + os.environ["PATH"]
            now_path = os.getcwd()
            os.chdir(windows_to_linux(self.m_path))
            # os.system(f'make clean 1>>{log_path} 2>&1')
            open(log_path, 'w').close()
            if build_param is not None:
                for i in build_param['cmd']:
                    cmd = f"make {i} 1>>{log_path} 2>&1"
                    os.system(cmd)
                fun_list1 = list(build_param.keys())
                fun_list = fun_list1[1:]
                for fun in fun_list:
                    par = build_param[fun]
                    eval(fun)(par)
                    # cmd = f"make {fun} 1>>{log_path} 2>&1"
                    # os.system(cmd)
            else:
                cmd = f"make 1>>{log_path} 2>&1"
                os.system(cmd)
            os.chdir(now_path)

        [lastTick, tCost] = checkTimeCost('CMD Build', lastTick, tcPrtFlg, tcLog)
        # check and save result
        if dirs == 1:
            ret = self.build_check_cdk(200)
        elif dirs == 2:
            ret = self.build_check_keil(200)
        elif dirs == 3:
            ret = self.build_check_riscv(200)

        [lastTick, tCost] = checkTimeCost('Build Check', lastTick, tcPrtFlg, tcLog)
        # restore project
        if build_param is not None and dirs !=3:
            if dirs == 1:
                filename = re.split('[.]', self.m_path)
                if len(filename) == 2:
                    file_n = filename[0] + '.cdkproj'
                else:
                    file_n = '..' + filename[0] + filename[1] + filename[2] + '.cdkproj'
                fprj = open(file_n, 'wb')
            elif dirs == 2:
                fprj = open(self.m_path, 'wb')
            fprj.write(project_backup.encode())
            fprj.close()

        [lastTick, tCost] = checkTimeCost('Restore', lastTick, tcPrtFlg, tcLog)
        if ret is False:
            return False
        if dirs != 3:
            if output is not None:
                if len(output) >= 3:
                    if dirs == 1:
                        # self.gen_asm(output)
                        self.new_asm(output)
                    elif dirs == 2:
                        self.gen_asm(output)
                    [lastTick, tCost] = checkTimeCost('GEN ASM', lastTick, tcPrtFlg, tcLog)
        if output is not None and output != []:
            if dirs == 3:
                for i in output:
                    self.new_hex(i[0],i[1])
            else:
                path = self.m_fold
                os.system('copy /Y ' + path + output[0][0] + ' ' + path + output[0][1])

            [lastTick, tCost] = checkTimeCost('Copy Hex', lastTick, tcPrtFlg, tcLog)
        filename = re.split('[\\\\.]', self.m_path)
        return True

def zbin(par): # par = [bIn,spLen]
    bIn = par[0]
    spLen = par[1]
    f0 = bIn + ''
    f1 = bIn.replace('.bin', '') + '_0.bout'
    f2 = bIn.replace('.bin', '') + '_0.hout'

    if (os.path.exists(f1)):
        os.remove(f1)
    if (os.path.exists(f2)):
        os.remove(f2)

    path0 = os.path.join(os.getcwd(), f0)
    path1 = os.path.join(os.getcwd(), f1)
    path2 = os.path.join(os.getcwd(), f2)
    print('ROM BIN INPUT: %s' % path0)
    splitLen = int(1024 * int(spLen))

    print('ROM BIN SPLIT LEN: %d Byte %d Word(Line)' % (splitLen, splitLen / 4))

    fin = open(path0, 'rb')
    fout1 = open(path1, 'w+')
    fout1H = open(path2, 'w+')
    binSize = 0
    padSize = 0
    for ii in range(int((splitLen + 3) / 4)):
        tmp = (fin.read(4)) + b'\x00\x00\x00\x00'
        tmp = tmp[:4]
        # print(hex(ii),'word', tmp)
        if (len(tmp) == 0):
            data = 0
            padSize += 4
        else:
            data = (struct.unpack("I", tmp)[0])
            binSize += 4

        bb = dec2bin(data)
        bdata = '0' * (32 - len(bb)) + bb
        hh = ('%08x' % data)
        # print("%d %s-->%s"%(ii,hh,bdata))

        fout1.write(bdata + ' \t\t //' + hh + '\n')
        fout1H.write(hh + '\n')

    print('ROM BIN Word(Line) [In Pading] %d %d' % (binSize / 4, padSize / 4))
    fin.close()
    fout1.close()
    fout1H.close()


def dec2bin(num):
    # num = int(string_num)
    mid = []
    base = [str(x) for x in range(10)] + [chr(x) for x in range(ord('A'), ord('A') + 6)]
    while True:
        if num == 0: break
        num, rem = divmod(num, 2)
        mid.append(base[rem])

    return ''.join([str(x) for x in mid[::-1]])
##########################ultility##############################

def make_version_file(path, major, minor, revision, test_build=''):
    list_sdk_version_h = [
        '/**************************************************************************************************',
        '**************************************************************************************************/',
        ' ',
        '/*******************************************************************************',
        '* @file		sdk_version.h',
        '* @brief	',
        '* @author	',
        '* ',
        '*',
        '*******************************************************************************/',
        '#ifndef __SDK_VER_H__',
        '#define __SDK_VER_H__',
        ' ', ]

    if path == '':
        path = '..'
    if path[-1] == '\\':
        path = path[:-1]

    fp = open(path + '\\components\\inc\\version.h', 'w')
    for ln in list_sdk_version_h:
        fp.writelines(ln + '\n')

    fp.writelines('#define __DEF_CHIP_QFN32__  ' + ' ' * 16 + '(0x0001) \n')
    fp.writelines('#define __DEF_CHIP_TSOP16__  ' + ' ' * 16 + '(0x0002) \n')

    fp.writelines('#define SDK_VER_MAJOR      ' + ' ' * 16 + str(major) + '\n')
    fp.writelines('#define SDK_VER_MINOR      ' + ' ' * 16 + str(minor) + '\n')
    fp.writelines('#define SDK_VER_REVISION   ' + ' ' * 16 + str(revision) + '\n')
    fp.writelines(
        '#define SDK_VER_RELEASE_ID ' + ' ' * 16 + '((SDK_VER_MAJOR<<16)|(SDK_VER_MINOR<<8)|(SDK_VER_REVISION))' + '\n')

    if major == 3:
        fp.writelines('#define SDK_VER_CHIP      ' + ' ' * 16 + '__DEF_CHIP_QFN32__' + '\n')
    elif major == 5:
        fp.writelines('#define SDK_VER_CHIP      ' + ' ' * 16 + '__DEF_CHIP_TSOP16__' + '\n')

    if test_build != '':
        fp.writelines('#define SDK_VER_TEST_BUILD \'' + test_build + '\'\n')
    else:
        fp.writelines('//#define SDK_VER_TEST_BUILD "' + test_build + '"\n')

    fp.writelines('#endif\n\n')
    fp.close()


def get_param(param):
    dict_param = {}
    # print(param)
    phase_opt = None
    phase_param = []
    for s in param:

        if s[0] == '-':
            if phase_param != [] and phase_opt is not None:
                dict_param[phase_opt] = phase_param
            phase_param = []
        else:
            phase_param.append(s)
            continue

        if s == '-help' or s == '-h':  # help
            dict_param['help'] = None
            phase_opt = 'help'
            phase_param = []
            continue

        if s == '-lcfg' or s == '-l':  # list config
            dict_param['listconfig'] = None
            phase_opt = 'listconfig'
            phase_param = []
            continue

        if s == '-list':  # list project
            dict_param['list'] = None
            phase_opt = 'list'
            phase_param = []
            continue

        if s == '-path':  # set project path
            dict_param['path'] = None
            phase_opt = 'path'
            phase_param = []
            continue

        if s == '-ver' or s == '-version':  # set version
            dict_param['version'] = None
            phase_opt = 'version'
            phase_param = []
            continue

        if s == '-b':
            dict_param['build'] = None
            phase_opt = 'build'
            phase_param = []
            continue

        if s == '-c' or s == '-clear':
            # if s == '-k' or s == '-clear':
            dict_param['clear'] = None
            phase_opt = 'clear'
            phase_param = []
            continue

        if s == '-check':  # check
            dict_param['check'] = None
            phase_opt = 'check'
            phase_param = []
            continue

    if phase_param != [] and phase_opt is not None:
        dict_param[phase_opt] = phase_param

    return dict_param


def help():
    print('sdk_build.py: Build BLE SDK')
    print('useage:')
    print(
        'sdk_build.py [-help [projectname]] [-path sdk_path] [-check] [-clear] [-ver 1.1.1.b][-list] [[-l ymlfile] [-b'
        '[projectname]|[all]]]')


def files(curr_dir, ext):
    for i in glob.glob(os.path.join(curr_dir, ext)):
        yield i


def remove_files(rootdir, ext, show=False):
    for i in files(rootdir, ext):
        if show:
            print(i)
        os.remove(i)


def clear_log():
    global work_path
    # rootdir = work_path + '/_bld_cmd/'
    rootdir = os.getcwd()
    remove_files(rootdir, 'buildlog_*.txt', True)


def delete_bld():
    remove_files('.', '_bld.txt', False)


def sha_finder():
    new_repo = git.Repo(work_path)
    log_message = new_repo.git.log()
    log_SHA = log_message.split(' ')[1]
    log_SHA = log_SHA.split('\n')[0]

    return log_SHA


def list_config(param):
    global dict_build_list
    global dict_yml_name
    curpath = os.path.dirname(os.path.realpath("..\_bld_script\sdk_build.yml"))
    ymlfile = work_path + '\\_bld_script\\' + param[0] + '.yml'
    result = os.path.exists(ymlfile)
    if result:
        yamlpath = os.path.join(curpath, param[0] + '.yml')  # 3 is people-edited file
        dict_yml_name = param[0]
    else:
        yamlpath = os.path.join(curpath, dict_yml_name + '.yml')  # sdk_build.yml is default file
    yamlpath = windows_to_linux(yamlpath)
    ymlfile = windows_to_linux(ymlfile)
    f = open(ymlfile, 'r', encoding='utf-8')
    c = f.read()
    d = yaml.load(c, Loader=yaml.FullLoader)  # Added Loader=yaml.FullLoader avoid warnings
    dict_build_list = d


def list_prj():
    global dict_build_list
    if len(dict_build_list) == 0:
        print('dict_build_list is blank.-lcfg first')
        return
    print('Project:')
    cnt = 0
    for prjname in dict_build_list:
        ss1 = dict_build_list[prjname][0]
        print('  %03d  %-20s%-40s' % (cnt, prjname, ss1))
        # print(dict_build_list[prjname][1:])
        try:
            for ss2 in dict_build_list[prjname][1:]:
                if type(ss2) is list:
                    print(' ' * 27 + 'cp :%s' % ss2)
                else:
                    print(' ' * 27 + 'exec :%s' % ss2)
            # ss2 = dict_build_list[prjname][1]
            # if type(ss2) is dict:
            #     print(' ' * 27 + ':%s' % ss2)
        except:
            pass
        cnt = cnt + 1


def build_single(path, blditm, logfile=None):
    bld = build(path + '\\' + blditm[0])
    bld.setlogfile(logfile)
    cfg = {}
    output = []
    for i in range(len(blditm)):
        if i == 0:
            continue
        if type(blditm[i]) is dict:
            for ii in blditm[i].keys():
                cfg[ii] = blditm[i][ii]
        elif type(blditm[i]) is list:
            output.append(blditm[i])
    ret = bld(cfg, output)
    return ret


def read_l(keyword):
    with open('_bld.txt', 'r') as file:
        counts = 0
        for line in file.readlines():
            keywords = line.count(keyword)
            counts += keywords
        return counts


def find_srt_in_file(file, srt):
    count = 0
    with open(file, 'r', encoding='utf-8') as f:
        for line in f:
            if srt in line:
                count += 1
    return count


def log_err_check(flog):
    flog.seek(0, 0)
    errnum, warnum, failnum = 0, 0, 0
    dirs = check_dirs()
    while True:
        logstr = flog.readline()
        if len(logstr) == 0:
            break  # read completed
        if dirs == 1:
            errnum = (read_l(': error:') + read_l(': fatal error:'))
            warnum = read_l(': warning:')
        elif dirs == 2:
            if logstr.find('Error(s)') > 0 and logstr.find('Warning(s)') > 0:
                errnum = errnum + int(logstr[logstr.find('-') + 1:logstr.find('Error(s)')])
                warnum = warnum + int(logstr[logstr.find('Error(s)') + 9: logstr.find('Warning(s)')])
        if logstr.find('prj build fail check _bld.txt') > 0:
            failnum = failnum + 1

    return errnum, warnum, failnum


def symmake(argv):
    from symbol_make import ref_from_unref, load_sym_ref, add_to_sym_hfile,close_sym_hfile
    # if len(argv) == 1:
    #     print('py3 symbol_make.py femto_rom.elf')
    #     return
    # if argv[1] == '-ref':
    #     ref_name = 'rom_sym_unref.log'
    #     if len(argv) == 3:
    #         ref_name = argv[2]
    #     ref_from_unref(ref_name)
    #     return
    _exe = argv[0]
    elfname = argv[1]
    if os.path.exists(elfname) != True:
        print('file is not exist')
        return
    ref_name = argv[2]
    if sys.platform == 'linux':
        os.system('rm -rf _sym.txt')
    else:
        os.system('del ' + '_sym.txt 2>1>nul')
    if sys.platform == 'linux':
        cmd = _exe + ' -g ' + elfname + ' >_sym.txt'
    else:
        cmd = _exe+'.exe -g ' + elfname + ' >_sym.txt'
    os.system(cmd)
    if not os.path.exists('_sym.txt'):
        print('file(_sym.txt) is not exist')
        return

    sym_ref_tbl, no_prefix_tbl = load_sym_ref(ref_name)
    # convert to gdb symbol table
    fp = open('_sym.txt', 'r')
    fp_sym = open(elfname + '.riscvsym', 'w')
    fp_sym_h = None
    no_prefix_dic = {}
    while True:
        line = fp.readline()
        if 'NO_PREFIX' in line:
            print(line)
            break
        if len(line) < 3:
            break
        itm = line.split()
        if len(itm) != 3:
            continue

        symname = itm[2]
        # if(symname == 'g_rfPhyTxPower'):
        #	print(symname)
        #	print(symname in sym_ref_tbl)
        #	print(sym_ref_tbl)
        if symname in no_prefix_tbl:
            no_prefix_dic[symname] = '0x' + itm[0]
        if symname in sym_ref_tbl:
            fp_sym_h = add_to_sym_hfile(fp_sym_h, symname)
        symline = '_symrom_' + itm[2] + ' = 0x' + itm[0] + ';\n'
        fp_sym.write(symline)
    for i in no_prefix_tbl:
        value = no_prefix_dic[i]
        symline = i + ' = ' + value + ';\n'
        fp_sym.write(symline)
        # fp_sym_h = add_to_sym_hfile(fp_sym_h, i)
    fp.close()
    fp_sym.close()
    close_sym_hfile(fp_sym_h)
    # os.system('del '+'_sym.txt 2>1>nul')

    if sys.platform == 'linux':
        # print('cp ' + 'rom_sym_def.h' + ' ../../misc/ 2>1>nul')
        # print('cp ' + elfname + '.riscvsym' + ' ../../misc/ 2>1>nul')
        os.system('cp ' + elfname + '.riscvsym' + ' ../../misc/')
        os.system('cp ' + 'rom_sym_def.h' + ' ../../misc/')
    else:
        os.system('copy ' + '/Y ' + elfname + '.riscvsym' + ' ..\\..\\misc\\ 2>1>nul')
        os.system('copy ' + '/Y ' + 'rom_sym_def.h' + ' ..\\..\\misc\\ 2>1>nul')

def clean(argv):
    print("cleaning files ......")
    if len(argv) == 1:
        file_l = argv[0]
        path_l = [locallocation]
    else:
        file_l = argv[0]
        path_l = []
        for i in argv[1]:
            file_name = os.path.join(locallocation, i)
            path_l.append(file_name)
    for path in path_l:
        for root,dirs,files in os.walk(path):
             for file in files:
                 if besure_file_ex(file,file_l):
                    file_name = os.path.join(root,file)
                    os.remove(file_name)

def besure_file_ex(filename,ex_list):
    for i in ex_list:
        i = i.replace('*','')
        if filename.endswith(i):
            return True
    return False


def build_prj(param, path):
    global dict_build_list
    global dict_yml_name
    if len(dict_build_list) == 0:
        print('dict_build_list is blank.-lcfg first')
        return
    lprj = list(dict_build_list)
    if path == '':
        path = '..'
    if path[-1] == '\\':
        path = path[:-1]
    id = -1
    if param is None:
        list_prj()
        print('input id:')
        id = int(input())

        if id < 0 or id >= len(lprj):
            print('input out of range, exiting')
            exit()
    elif param[0] in lprj:
        id = lprj.index(param[0])
    elif param[0] == 'all':
        id = -1
    else:
        print('Error build parameter, exiting')
        exit()

    bldT0 = time.perf_counter()
    if id == -1:  # build all
        # log_files=
        logfile = open('buildlog_' + dict_yml_name + '_' + datetime.strftime(datetime.now(), '%Y%m%d%H%M%S') + '.txt',
                       'w+')
        for prjname in lprj:
            prjitm = dict_build_list[prjname]
            logfile.write('-' * 88 + '\n' + 'ProjName: ' + prjname)
            ret = build_single(path, prjitm, logfile)
            if not ret:
                logfile.write('\n\n*****prj build fail check _bld.txt****\n\n')
        # [e, w, f] = log_err_check(logfile)
        global error_count
        global warning_count
        global com_failed_count
        logfile.write('\n\n' + '-' * 88 + '\n' + 'Total Err %d Warning %d Fail %d\n' % (
            error_count, warning_count, com_failed_count))
        print('\n\n' + '-' * 88 + '\n' + 'Total Err %d Warning %d Fail %d\n' % (
            error_count, warning_count, com_failed_count))

    else:
        logfile = open('buildlog_' + datetime.strftime(datetime.now(), '%Y%m%d%H%M%S') + '.txt', 'w')
        prjname = lprj[id]
        prjitm = dict_build_list[prjname]
        logfile.write('-' * 88 + '\n' + 'ProjName: ' + prjname + '\n')
        # logfile.write('------------------------------------------------\n'+prjname)
        build_single(path, prjitm, logfile)

    checkTimeCost('All Build Finished', bldT0, 1, logfile)

    dirs = check_dirs()
    if dirs == 1:
        # -------Error or Warning---------#
        bldfile = os.path.exists('_bld.txt')
        if (bldfile):
            errnum, warnum = 0, 0
            errnum = (read_l(': error:') + read_l(': fatal error:'))
            warnum = read_l(': warning:')

            logfile.write('-' * 88 + '\n' + '- %d Error(sas), %d Warning(s) .\n' % (errnum, warnum))

            if errnum > 0:
                logfile.write('Compile Failed\n\n')

            logfile.write('\n')
            with open('_bld.txt', 'r') as file1, logfile as file2:
                for line in file1.readlines():
                    line = line.strip()
                    if ': error:' in line:
                        file2.write(line + '\n')
                    elif ': fatal error:' in line:
                        file2.write(line + '\n')
                    elif ': warning:' in line:
                        file2.write(line + '\n')
                file2.close()
    return

def Search_for_riscv():
    m_path = ["C:\\", "D:\\", "E:\\", "F:\\", "G:\\"]
    n_path = ["NucleiStudio\\toolchain", "Proj\\NucleiStudio\\toolchain", "toolchain",
              "software_toolNucleiStudio\\toolchain"]
    file = "\\gcc\\bin\\make.exe"
    curpath = os.path.dirname(os.path.realpath(windows_to_linux("..\_bld_script\sdk_build.yml")))
    result = os.path.exists(windows_to_linux('..\_bld_script\\riscv_make.yml'))
    flg = 0
    if result:
        yamlfile = os.path.join(curpath, 'riscv_make.yml')
        f = open(yamlfile, 'r', encoding='utf-8')
        fr = f.read()
        yamls = yaml.load(fr, Loader=yaml.FullLoader)  # Added Loader=yaml.FullLoader avoid warnings
        if 'make_tool' not in yamls.keys():
            for prj in yamls:
                if prj in ['GitUrl']:
                    break
                yamlpath = yamls[prj][0]
                if os.path.exists(windows_to_linux(yamlpath)):
                    break
        else:
            make_tool = yamls['make_tool']
            global exe_path_list
            exe_path_list = []
            for prj in yamls:
                if prj in ['GitUrl']:
                    break
                yamlpath1 = yamls[prj][0]
                if os.path.exists(windows_to_linux(yamlpath1)):
                    file_list = os.listdir(windows_to_linux(yamlpath1 + '\gcc\\bin'))
                    for element in file_list:
                        if element in make_tool:
                            exe_path_list.append(yamlpath1)
                            yamlpath = yamlpath1

    else:
        for m in m_path:
            if flg:
                break

            for n in n_path:
                yamlpath = m + n + file
                if os.path.exists(yamlpath):
                    flg = 1
                    break
    return yamlpath


def main(argv):
    global work_path
    dict_param = get_param(argv[1:])
    if dict_param == {}:
        help()
        return

    if 'help' in dict_param:
        help(dict_param['help'])
        return

    if 'path' in dict_param:
        if dict_param['path'] is None:
            print('Path need input!')
            exit()
        if not os.path.exists(dict_param['path'][0]):
            print('Path is not exist:', dict_param['path'][0])
            exit()
        work_path = dict_param['path'][0]
    else:
        work_path = os.path.dirname(os.getcwd())
        print(f'No sdk path is entered. The default path is {work_path}')
        if not os.path.exists(os.path.join(work_path, 'example')) and not os.path.exists(
                os.path.join(work_path, 'project')):
            print(f"There are no routines in the current sdk path---{work_path}")
            exit()

    if 'clear' in dict_param:
        clear_log()
        return

    if 'check' in dict_param:
        add_discalimer3.main(work_path)
        return

    if 'listconfig' in dict_param:
        if dict_param['listconfig'] is None:
            dict_param['listconfig'] = ['sdk_build']
        list_config(dict_param['listconfig'])
    # return
    else:
        dict_param['listconfig'] = ['sdk_build']
        list_config(dict_param['listconfig'])

    if 'list' in dict_param:
        list_prj()
        return

    if 'version' in dict_param:
        try:
            list_ver = dict_param['version'][0].split('.')
            major = int(list_ver[0])
            minor = int(list_ver[1])
            revision = int(list_ver[2])
            test_build = ''
            if len(list_ver) == 4:
                test_build = list_ver[3]
            make_version_file(work_path, major, minor, revision, test_build)
        except:
            traceback.print_exc()
            print('-version parameter is not correct, please check:', dict_param['version'])
            return

    dirs = check_dirs()

    if 'build' in dict_param:
        if dirs == 1:
            delete_bld()
            cdk_api.commit_id_cdk(work_path)
            cdk_api.commit_date_cdk(work_path)
            build_prj(dict_param['build'], work_path)
            cdk_api.clear_commit_id_cdk(work_path)
            cdk_api.clear_commit_date_cdk(work_path)
        elif dirs == 2:
            delete_bld()
            keil_api.commit_id_keil(work_path)
            keil_api.commit_date_keil(work_path)
            build_prj(dict_param['build'], work_path)
            keil_api.clear_commit_id_keil(work_path)
            keil_api.clear_commit_date_keil(work_path)

        elif dirs == 3:
            delete_bld()
            risv_api.commit_id_riscv()
            risv_api.commit_date_riscv()
            build_prj(dict_param['build'], work_path)
            risv_api.clear_commit_id_riscv()
            risv_api.clear_commit_date_riscv()

        return

def windows_to_linux(windowsPath):
    if sys.platform == 'linux':
        windowsPathTemp = windowsPath.split('/')# /Code/Shell/test.txt
        windowsPathTemp2 = []
        for i in windowsPathTemp:
            windowsPathTemp2.extend(i.split("\\"))
        words_as_str = [str(word) for word in windowsPathTemp2]
        linuxPath = '/'.join(words_as_str)
        # print(linuxPath)
        return linuxPath
    else:
        return windowsPath


if __name__ == '__main__':
    main(sys.argv)
