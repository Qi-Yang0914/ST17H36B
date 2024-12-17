import os
import sys
import time
from pickle import FALSE


def ref_from_unref(ref_name):
    fp_unref = open(ref_name)
    fp_ref = open('femto_appsym_ref.txt', 'a+')
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

def symbol_risv(map_file):
    fp_map = open(map_file + '.map', 'r')
    # risv_file = []
    file_str = map_file + 'elf.riscvsym'
    while True:
        line = fp_map.readline()
        refsym_str = line
        if len(line) <= 0:
            break
        refsym_str = refsym_str.split()

    if file_str in refsym_str:
        return True
    else:
        return False


def load_sym_ref():
    fp_ref = open('femto_appsym_ref.txt')
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
        print('femto_appsym_ref.txt did not found!')

    return ref_tbl,no_prefix


# def add_to_sym_hfile(fp_sym_h, symname):
#     # print(symname,'|add_to_sym_hfile')
#     if fp_sym_h is None:
#         fp_sym_h = open('app_sym_def.h', 'w')
#         fp_sym_h.write('\n\n#ifndef __APP_SYM_H__\n#define __APP_SYM_H__\n#ifdef USE_ROMSYM_ALIAS\n\n\n')

#     fp_sym_h.write('#define ' + symname + ' _symrom_' + symname + '\n')
#     return fp_sym_h


def close_sym_hfile(fp_sym_h):
    if fp_sym_h is not None:
        fp_sym_h.write('\n\n#endif\n#endif\n\n')
        fp_sym_h.close()


def main(argv):
    if len(argv) == 1:
        # print('py3 symbol_make.py gpio.elf')
        # print('py3 symbol_make.py',argv[1],'.elf')
        return
    if argv[1] == '-ref':
        ref_name = 'rom_sym_unref.log'
        if len(argv) == 3:
            ref_name = argv[2]
        ref_from_unref(ref_name)
        return

    elfname = argv[1]
    if sys.platform == 'linux':
        os.system('rm -rf _sym.txt')
    else:
        os.system('del ' + '_sym.txt 2>1>nul')
    if sys.platform == 'linux':
        cmd =  'riscv64-unknown-elf-nm -g ' + elfname + ' >_sym.txt'
    else:
        cmd = 'riscv64-unknown-elf-nm.exe -g ' + elfname + ' >_sym.txt'
    os.system(cmd)
    if os.path.exists('_sym.txt') != True:
        print('\n\nfile is not exist:', self.m_path)
        return

    sym_ref_tbl,no_prefix_tbl = load_sym_ref()
    # convert to gdb symbol table
    fp = open('_sym.txt', 'r')
    if os.path.exists(elfname + '.riscvsym') != True:
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
                no_prefix_dic[symname] = '0x'+itm[0]
                
            if symname in sym_ref_tbl:
                # fp_sym_h = add_to_sym_hfile(fp_sym_h, symname)
                # symline = '_symrom_' + itm[2] + ' = 0x' + itm[0] + ';\n'
                symline = itm[2] + ' = 0x' + itm[0] + ';\n'
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
    
#   if sys.platform == 'linux':
#       # print('cp ' + 'rom_sym_def.h' + ' ../../misc/ 2>1>nul')
#       # print('cp ' + elfname + '.riscvsym' + ' ../../misc/ 2>1>nul')
#       os.system('cp ' + elfname + '.riscvsym' + ' ../../misc/')
#       os.system('cp ' + 'rom_sym_def.h' + ' ../../misc/')
#   else:
        os.system('copy ' + '/Y ' + elfname + '.riscvsym' + ' ..\\..\\..\\misc\\ 2>1>nul')
    # os.system('copy ' + '/Y ' + 'app_sym_def.h' + ' ..\\..\\..\\misc\\ 2>1>nul')


if __name__ == '__main__':
    main(sys.argv)
