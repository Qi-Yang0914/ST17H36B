import os
import sys
import time


def ref_from_unref(ref_name):
    fp_unref = open(ref_name)
    fp_ref = open('femto_romsym_ref.txt', 'a+')
    # load ref
    fp_ref.seek(0, 0)
    ref_tbl = []
    while (True):
        line = fp_ref.readline()
        print('~~~~~~~~~~~~~', line)
        refsym_str = line
        if len(line) <= 0:
            break
        if len(line) <= 3:
            continue
        if line[0] == '#':
            continue
        if line[:2] == '0x':
            refsym_str = line.split()[2]
            print('===================', refsym_str)
        refsym_str = refsym_str.split()[0]
        ref_tbl.append(refsym_str)

    # seekend
    fp_ref.seek(0, 2)

    cmp_str = 'undefined reference to `'
    while True:
        line = fp_unref.readline()
        if len(line) <= 0:
            fp_unref.close()
            return
        if cmp_str in line:
            # get symbol
            line = line[line.find(cmp_str) + len(cmp_str):]
            sym_str = line.split('\'')[0]
            # append sym_str
            if sym_str not in ref_tbl:
                ref_tbl.append(sym_str)
                fp_ref.write(sym_str + '\n')
    fp_ref.close()
    fp_unref.close()


def load_sym_ref(ref_name):
    fp_ref = open(ref_name)
    # load ref
    ref_tbl = []
    no_prefix = []
    no_prefix_tag = 1
    while True:
        line = fp_ref.readline()
        refsym_str = line
        if 'NO_PREFIX' in line:
            no_prefix_tag = 0
            continue
        if len(line) <= 0:
            break
        if len(line) <= 3:
            continue
        if no_prefix_tag == 0:
            refsym_str = refsym_str.split()[0]
            no_prefix.append(refsym_str)
        else:
            if line[0] == '#':
                continue
            if line[:2] == '0x':
                refsym_str = line.split()[2]
            refsym_str = refsym_str.split()[0]
            ref_tbl.append(refsym_str)
    fp_ref.close()
    if len(ref_tbl) == 0:
        print('femto_romsym_ref.txt did not found!')

    return ref_tbl,no_prefix


def add_to_sym_hfile(fp_sym_h, symname):
    # print(symname,'|add_to_sym_hfile')
    if fp_sym_h is None:
        fp_sym_h = open('rom_sym_def.h', 'w')
        fp_sym_h.write('\n\n#ifndef __ROM_SYM_H__\n#define __ROM_SYM_H__\n#ifdef USE_ROMSYM_ALIAS\n\n\n')

    fp_sym_h.write('#define ' + symname + ' _symrom_' + symname + '\n')
    return fp_sym_h


def close_sym_hfile(fp_sym_h):
    if fp_sym_h is not None:
        fp_sym_h.write('\n\n#endif\n#endif\n\n')
        fp_sym_h.close()


#
# if __name__ == '__main__':
#     main(sys.argv)
