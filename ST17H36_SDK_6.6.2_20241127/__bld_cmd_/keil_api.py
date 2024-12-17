# -*- coding: utf-8 -*-
import os
from datetime import datetime

import yaml
import sdk_build


def get_bld_path_keil(bld):
    """
    :param bld:bld_yml.dict
    :return:all_need_build_project_ath_list
    """
    bldList = []
    for p in bld:
        bldList.append(os.path.split(bld[p][0])[0])
    return bldList


def get_dir_path_keil(path, depth=None):
    """
    :param path:path
    :param depth:返回所有文件名，和返回[-1]层文件名
    :return:all file in this path
    """

    a = []
    rD = path.count('\\')
    for root, dirs, files in os.walk(path):
        for name in dirs:
            if (depth):
                if root.count('\\') - rD == depth - 1:
                    a.append(os.path.join(root, name))
            else:
                a.append(os.path.join(root, name))
    return a


def find_del_fold_keil(bld, cur):
    delPath = []
    for a in cur:
        for b in bld:
            if a.endswith(b):
                delPath.append(a)
                break
    result_list = []
    for i in cur:
        if i not in delPath:
            result_list.append(i)

    return result_list


def modify_version(locallocation,version,mode=1):
    # resure version is  correct
    versi = version.split('_')
    SDK_VER_SUFFIX = ''
    if len(versi) <= 2:
        return versi
    if len(versi) == 3:
        ver = versi[2]
        SDK_VER_SUFFIX = '\"\"'
    elif len(versi) == 4:
        ver = versi[2]
        SDK_VER_SUFFIX = versi[3]
    elif len(versi) >4:
        ver = versi[2]
        SDK_VER_SUFFIX = '_'.join(versi[3:])
    l = ver.split('.')
    if mode == 1:
        if len(l) != 3:
            return [l]
        else:
            return [l[0],l[1],l[2],SDK_VER_SUFFIX]

    if mode == 0:
        if len(l) != 3:
            print('version is not correct')
            return False
        else:
            MAJOR = l[0]
            MINOR = l[1]
            REVISION = l[2]
        print(f'MAJOR:{MAJOR}, MINOR:{MINOR}, REVISION:{REVISION}, SDK_VER_SUFFIX:{SDK_VER_SUFFIX}')

        # resure file is exits
        version_path = locallocation + '\\components\\inc\\version.h'
        if not os.path.exists(version_path):
            print('\\components\\inc\\version.h is not exits')
            return False

        with open(version_path, 'r+', encoding='utf-8', errors='ignore') as f:
            content = f.read()
            if '#define SDK_VER_SUFFIX' not in content:
                modified_content = content.replace('#define SDK_VER_RELEASE_ID', '#define SDK_VER_SUFFIX \n#define '
                                                                                 'SDK_VER_RELEASE_ID')
                f.seek(0)
                f.write(modified_content)
                f.truncate()
                f.close()

        data = ''
        with open(version_path, 'r', encoding='utf-8', errors='ignore') as f:
            lines = f.readlines()
            for i in range(len(lines)):
                if '#define SDK_VER_MAJOR' in lines[i]:
                    lines[i] = '#define SDK_VER_MAJOR                      ' + MAJOR + '\n'
                if '#define SDK_VER_MINOR' in lines[i]:
                    lines[i] = '#define SDK_VER_MINOR                      ' + MINOR + '\n'
                if '#define SDK_VER_REVISION' in lines[i]:
                    lines[i] = '#define SDK_VER_REVISION                   ' + REVISION + '\n'
                if '#define SDK_VER_SUFFIX' in lines[i]:
                    lines[i] = '#define SDK_VER_SUFFIX                     ' + SDK_VER_SUFFIX + '\n'
                data += lines[i]
            f.close()

        with open(version_path, "w", encoding='utf-8', errors='ignore') as f:
            f.write(data)
            f.close()
        return True


def date_finder():
    log_date = datetime.strftime(datetime.now(), '%Y%m%d%H%M%S')
    return log_date

def Search_for_keil():
    m_path = ["C:\\", "D:\\", "E:\\", "F:\\", "G:\\"]
    n_path = ["Keil_v5\\UV4\\", "Proj\\Keil_V5\\UV4\\", "UV4\\", "software_tool\\Keil_V5\\UV4\\"]
    file = "UV4.exe"
    curpath = os.path.dirname(os.path.realpath("..\_bld_script\sdk_build.yml"))
    result = os.path.exists('..\_bld_script\sdk_bld_tool.yml')
    flg = 0
    if result:
        yamlfile = os.path.join(curpath, 'sdk_bld_tool.yml')
        f = open(yamlfile, 'r', encoding='utf-8')
        fr = f.read()
        yamls = yaml.load(fr, Loader=yaml.FullLoader)  # Added Loader=yaml.FullLoader avoid warnings
        for prj in yamls:
            if prj in ['GitUrl']:
                break
            yamlpath = yamls[prj][0]
            if os.path.exists(yamlpath):
                break
    else:
        for m in m_path:
            if (flg):
                break

            for n in n_path:
                yamlpath = m + n + file
                if os.path.exists(yamlpath):
                    flg = 1
                    break
    return yamlpath

def commit_id_keil(work_path):
    try:
        commit = sdk_build.sha_finder()

        c_flg = False
        proj_items = []
        file_n = work_path + '\\lib\\generate_lib\\rf.uvprojx'
        if not os.path.exists(file_n):
            print(f"File not found:{file_n}")
            return
        fsize = os.path.getsize(file_n)
        fproj = open(file_n, 'r+', encoding='utf-8')

        fproj.seek(0)
        while True:
            proj_line = fproj.readline()
            if proj_line.find('<Cads>') > 0:
                c_flg = True
            if proj_line.find('<Aads>') > 0:
                c_flg = False
            if c_flg:
                if proj_line.find('COMMIT_ID') > 0:
                    proj_line = new_commit_line(proj_line, commit)
            if len(proj_line) == 0:
                break
            proj_line = proj_line[:-1]
            proj_items.append(proj_line)
        fproj.close()

        # new project file
        fprj = open(file_n, 'wb')
        for proj_line in proj_items:
            fprj.write(proj_line.encode())
            fprj.write(b'\n')
        fprj.close()
    except Exception as e:
        pass

def clear_commit_id_keil(work_path):
    try:
        c_flg = False
        proj_items = []
        file_n = work_path + '\\lib\\generate_lib\\rf.uvprojx'
        if not os.path.exists(file_n):
            print(f"File not found:{file_n}")
            return
        fsize = os.path.getsize(file_n)
        fproj = open(file_n, 'r+', encoding='utf-8')

        fproj.seek(0)
        while True:
            proj_line = fproj.readline()
            if proj_line.find('<Cads>') > 0:
                c_flg = True
            if proj_line.find('<Aads>') > 0:
                c_flg = False
            if c_flg:
                if proj_line.find('COMMIT_ID') > 0:
                    proj_line = clear_commit_line(proj_line)
                # print('proj_line_id:', proj_line)
            if len(proj_line) == 0:
                break
            proj_line = proj_line[:-1]
            proj_items.append(proj_line)
        fproj.close()

        # new project file
        fprj = open(file_n, 'wb')
        for proj_line in proj_items:
            fprj.write(proj_line.encode())
            fprj.write(b'\n')
        fprj.close()
    except Exception as e:
        pass

def commit_date_keil(work_path):
    try:
        date = date_finder()

        c_flg = False
        proj_items = []
        file_n = work_path + '\\lib\\generate_lib\\rf.uvprojx'
        if not os.path.exists(file_n):
            print(f"File not found:{file_n}")
            return
        fsize = os.path.getsize(file_n)
        fproj = open(file_n, 'r+', encoding='utf-8')
        fproj.seek(0)
        while True:
            proj_line = fproj.readline()
            if proj_line.find('<Cads>') > 0:
                c_flg = True
            if proj_line.find('<Aads>') > 0:
                c_flg = False
            if c_flg:
                if proj_line.find('COMMIT_DATE') > 0:
                    proj_line = new_date_line(proj_line, date)
                # print('proj_line_id:', proj_line)
            if len(proj_line) == 0:
                break
            proj_line = proj_line[:-1]
            proj_items.append(proj_line)
        fproj.close()

        # new project file
        fprj = open(file_n, 'wb')
        for proj_line in proj_items:
            fprj.write(proj_line.encode())
            fprj.write(b'\n')
        fprj.close()
    except Exception as e:
        pass

def clear_commit_date_keil(work_path):
    c_flg = False
    proj_items = []
    file_n = work_path + '\\lib\\generate_lib\\rf.uvprojx'
    if not os.path.exists(file_n):
        print(f"File not found:{file_n}")
        return
    fsize = os.path.getsize(file_n)
    fproj = open(file_n, 'r+', encoding='utf-8')
    fproj.seek(0)
    while (True):
        proj_line = fproj.readline()
        if proj_line.find('<Cads>') > 0:
            c_flg = True
        if proj_line.find('<Aads>') > 0:
            c_flg = False
        if (c_flg):
            if proj_line.find('COMMIT_DATE') > 0:
                proj_line = clear_date_line(proj_line)
            # print('proj_line_id:', proj_line)
        if len(proj_line) == 0:
            break
        proj_line = proj_line[:-1]
        proj_items.append(proj_line)
    fproj.close()

    # new project file
    fprj = open(file_n, 'wb')
    for proj_line in proj_items:
        fprj.write(proj_line.encode())
        fprj.write(b'\n')
    fprj.close()

def clear_date_line(proj_line):
    # apply new commit
    new_line = proj_line[:proj_line.find('<Define>') + 8]
    start_space = ''
    dirs = sdk_build.check_dirs()
    proj_cfg = proj_line[proj_line.find('<Define>') + 8:proj_line.find('</Define>')]
    proj_cfg = proj_cfg.split(' ')
    for i in range(len(proj_cfg)):
        proj_cfg[i] = proj_cfg[i].split('=')
        value = proj_cfg[i][0]
        if 'COMMIT_DATE' == value:
            if dirs == 1:
                proj_cfg[i][1] = ('"' + '"')
            elif dirs == 2:
                proj_cfg[i][1] = ('date')

    for cfg in proj_cfg:
        if len(cfg) == 1:
            new_line = new_line + start_space + cfg[0]
        else:
            new_line = new_line + start_space + cfg[0] + '=' + cfg[1]
        start_space = ' '
    new_line = new_line + '</Define>\r'

    return new_line

def new_date_line(proj_line, date):
    # apply new commit
    new_line = proj_line[:proj_line.find('<Define>') + 8]
    # print(new_line)
    start_space = ''
    proj_cfg = proj_line[proj_line.find('<Define>') + 8:proj_line.find('</Define>')]
    # print(proj_cfg)
    proj_cfg = proj_cfg.split(' ')
    for i in range(len(proj_cfg)):
        proj_cfg[i] = proj_cfg[i].split('=')
        value = proj_cfg[i][0]
        # print(value)
        if 'COMMIT_DATE' == value:
            proj_cfg[i][1] = (date)

    for cfg in proj_cfg:
        if len(cfg) == 1:
            new_line = new_line + start_space + cfg[0]
        else:
            new_line = new_line + start_space + cfg[0] + '=' + cfg[1]
        start_space = ' '
    new_line = new_line + '</Define>\r'

    return new_line

def clear_commit_line(proj_line):
    new_line = proj_line[:proj_line.find('<Define>') + 8]
    start_space = ''
    dirs = check_dirs()
    proj_cfg = proj_line[proj_line.find('<Define>') + 8:proj_line.find('</Define>')]
    proj_cfg = proj_cfg.split(' ')
    for i in range(len(proj_cfg)):
        proj_cfg[i] = proj_cfg[i].split('=')
        value = proj_cfg[i][0]
        if 'COMMIT_ID' == value:
            if dirs == 1:
                proj_cfg[i][1] = ('"' + '"')
            elif dirs == 2:
                proj_cfg[i][1] = ('id')

    for cfg in proj_cfg:
        if len(cfg) == 1:
            new_line = new_line + start_space + cfg[0]
        else:
            new_line = new_line + start_space + cfg[0] + '=' + cfg[1]
        start_space = ' '
    new_line = new_line + '</Define>\r'

    return new_line

def new_commit_line(proj_line, commit):
    new_line = proj_line[:proj_line.find('<Define>') + 8]
    start_space = ''
    proj_cfg = proj_line[proj_line.find('<Define>') + 8:proj_line.find('</Define>')]
    proj_cfg = proj_cfg.split(' ')
    for i in range(len(proj_cfg)):
        proj_cfg[i] = proj_cfg[i].split('=')
        value = proj_cfg[i][0]
        if 'COMMIT_ID' == value:
            proj_cfg[i][1] = commit

    for cfg in proj_cfg:
        if len(cfg) == 1:
            new_line = new_line + start_space + cfg[0]
        else:
            new_line = new_line + start_space + cfg[0] + '=' + cfg[1]
        start_space = ' '
    new_line = new_line + '</Define>\r'

    return new_line