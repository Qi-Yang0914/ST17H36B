# -*- coding: utf-8 -*-
import os
import re
from datetime import datetime

import yaml
import sdk_build
from sdk_release import rls_config


def get_bld_path_cdk(bld):
    bldList = []
    list = rls_config(bld)
    file_key = ['proj.ck802', 'ck802_proj']
    for p in list:
        lists = list[p][0]
        f_key = ''
        for i in file_key:
            if i in lists:
                f_key = i
        filename = re.split(f_key, lists)
        bldList.append(filename[0])
    return bldList


def get_dir_path_cdk(path, depth=None):
    a = []
    rD = path.count('\\')
    for root, dirs, files in os.walk(path):
        for name in dirs:
            if 'private_peripheral' in name or 'private_central' in name:
                depth = 4
            if depth:
                if root.count('\\') - rD == depth - 1:
                    a.append(os.path.join(root, name))
            else:
                a.append(os.path.join(root, name))
    return a


def find_del_fold_cdk(bld, cur):
    full_path_list = []
    delPath = []
    for a in cur:
        for b in bld:
            path = a.rsplit('\\', 1)[0] + '\\'
            full_path_list.append(path)
            if path.endswith(b):
                delPath.append(path)
    result_list = []
    for i in full_path_list:
        if i not in delPath:
            result_list.append(i)
    result_list1 = list(set(result_list))
    return result_list1


def Search_for_cdk():
    m_path = ["C:\\", "D:\\", "E:\\", "F:\\", "G:\\"]
    n_path = ["proj\\C-sky\\CDK\\", "C-sky\\CDK\\", "CDK\\", "Software\\CDK\\install\\", "software_tool\\C-Sky\\CDK"]
    file = "cdk-make.exe"
    curpath = os.path.dirname(os.path.realpath("..\_bld_script\sdk_build.yml"))
    result = os.path.exists('..\_bld_script\cdk-make.yml')
    flg = 0
    if result:
        yamlfile = os.path.join(curpath, 'cdk-make.yml')
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
            if flg:
                break
            for n in n_path:
                yamlpath = m + n + file
                if os.path.exists(yamlpath):
                    flg = 1
                    break
    return yamlpath


def commit_id_cdk(work_path):
    try:
        commit = sdk_build.sha_finder()

        proj_items = []
        file_m = [work_path + '\\lib\\generate_lib\\ck802_proj\\rf.cdkproj',
                  work_path + '\\lib\\generate_lib\\proj.ck802\\rf.cdkproj']
        a = 0
        for i in file_m:
            if os.path.exists(i):
                file_n = i
                a = 1
                # return
        if a == 0:
            print(f"File not found:\\lib\\generate_lib\\...\\rf.cdkproj")
            return
        fsize = os.path.getsize(file_n)
        fproj = open(file_n, 'r+', encoding='utf-8')

        fproj.seek(0)
        while True:
            proj_line = fproj.readline()
            if proj_line.find('COMMIT_ID') > 0:
                proj_line = new_commit_line(proj_line, commit)
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

        fprj1 = open(file_n, 'r+', encoding='utf-8')
        fprj1.close()
    except Exception as e:
        pass


def clear_commit_id_cdk(work_path):
    try:
        proj_items = []
        file_m = [work_path + '\\lib\\generate_lib\\ck802_proj\\rf.cdkproj',
                  work_path + '\\lib\\generate_lib\\proj.ck802\\rf.cdkproj']
        a = 0
        for i in file_m:
            if os.path.exists(i):
                file_n = i
                a = 1
                # return
        if a == 0:
            print(f"File not found:\\lib\\generate_lib\\...\\rf.cdkproj")
            return
        fsize = os.path.getsize(file_n)
        fproj = open(file_n, 'r+', encoding='utf-8')

        fproj.seek(0)
        while True:
            proj_line = fproj.readline()
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


def date_finder():
    log_date = datetime.strftime(datetime.now(), '%Y%m%d%H%M%S')
    return log_date


def commit_date_cdk(work_path):
    try:
        date = date_finder()

        proj_items = []
        file_m = [work_path + '\\lib\\generate_lib\\ck802_proj\\rf.cdkproj',
                  work_path + '\\lib\\generate_lib\\proj.ck802\\rf.cdkproj']
        a = 0
        for i in file_m:
            if os.path.exists(i):
                file_n = i
                a = 1
                # return
        if a == 0:
            print(f"File not found:\\lib\\generate_lib\\...\\rf.cdkproj")
            return
        fsize = os.path.getsize(file_n)
        fproj = open(file_n, 'r+', encoding='utf-8')

        fproj.seek(0)
        while True:
            proj_line = fproj.readline()
            if proj_line.find('COMMIT_DATE') > 0:
                proj_line = new_date_line(proj_line, date)
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
    dirs = sdk_build.check_dirs()
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


def clear_commit_date_cdk(work_path):
    proj_items = []
    file_m = [work_path + '\\lib\\generate_lib\\ck802_proj\\rf.cdkproj',
              work_path + '\\lib\\generate_lib\\proj.ck802\\rf.cdkproj']
    a = 0
    for i in file_m:
        if os.path.exists(i):
            file_n = i
            a = 1
            # return
    if a == 0:
        print(f"File not found:\\lib\\generate_lib\\...\\rf.cdkproj")
        return
    fsize = os.path.getsize(file_n)
    fproj = open(file_n, 'r+', encoding='utf-8')

    fproj.seek(0)
    while (True):
        proj_line = fproj.readline()
        if proj_line.find('COMMIT_DATE') > 0:
            proj_line = clear_date_line(work_path, proj_line)
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


def clear_date_line(work_path, proj_line):
    # apply new commit
    new_line = proj_line[:proj_line.find('<Define>') + 8]
    start_space = ''
    dirs = sdk_build.check_dirs(work_path)
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
