# -*- coding: utf-8 -*-
import os
import re

import yaml
import sdk_build




def get_dir_path_risv(path, depth=None):
    a = []
    rD = path.count('\\')
    for root, dirs, files in os.walk(path):
        for name in dirs:
            if 'private_peripheral' in name or 'private_central' in name:
                depth = 3
            if depth:
                if root.count('\\') - rD == depth - 1:
                    a.append(os.path.join(root, name))
            else:
                a.append(os.path.join(root, name))
    return a




def rls_config(fname):
    """
    :pra:yml.ProtectFile.rls_example
    :retrun:projtct_dict
    """
    d = []
    curpath = os.path.dirname(os.path.realpath("..\_bld_script\sdk_build.yml"))

    yamlpath = os.path.join(curpath, fname + '.yml')
    if os.path.exists(yamlpath):
        pass
    else:
        print('check file input--> rls_confgi')
        return d
    f = open(yamlpath, 'r', encoding='utf-8')
    c = f.read()
    d = yaml.load(c, Loader=yaml.FullLoader)
    return d

def commit_id_riscv():
    try:
        commit = sdk_build.sha_finder()
        proj_items = []
    except Exception as e:
        pass

def clear_commit_id_riscv():
    pass

def commit_date_riscv():
    pass

def clear_commit_date_riscv():
    print('clear_commit_data_riscv')
    pass
