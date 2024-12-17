# -*- coding: utf-8 -*-
import os
import subprocess
import sys


def read_elf_file(file_name):
    try:
        output = subprocess.check_output(f'objdump -x {file_name}>_x.txt', shell=True, text=True)
        print(output)
    except subprocess.CalledProcessError as e:
        print("命令执行错误：", e.output)


def besure_code(con):
    RO_DATA = ('.vtable', '.srodata', '.rodata')
    RW_DATA = ('.data', '.sdata')
    ZI_DATA = ('.stackbss', '.tbss_space', '.bss', '.sbss', '.stack', '.heap')
    Code = ('.text', '.init', '.eh_frame')
    ig = ('.riscv.attributes', '.comment', '.debug')
    if con.startswith(Code):
        return 'Code'
    elif con.startswith(RO_DATA):
        return 'RO_DATA'
    elif con.startswith(RW_DATA):
        return 'RW_DATA'
    elif con.startswith(ZI_DATA):
        return 'ZI_DATA'
    elif con.startswith(ig):
        return 'ig'
    else:
        return 'other'


def Sections(data):
    res_map = []
    res_map.append(['code'.rjust(10, ' '), 'Ro_data'.rjust(10, ' '), 'Rw_data'.rjust(10, ' '), 'Zi_data'.rjust(10, ' '),
                    'object_name'.rjust(10, ' ')])
    code_count, Ro_data_count, Rw_data_count, Zi_data_count, other = 0, 0, 0, 0, 0
    for i in data:
        if len(i) != 7:
            pass
        else:
            if besure_code(i[1]) == 'ig':
                continue
            elif besure_code(i[1]) == 'Code':
                code_count = code_count + int(i[2], 16)
                res_map.append([str(int(i[2], 16)).rjust(10, ' '), str(0).rjust(10, ' '),
                                str(0).rjust(10, ' '), str(0).rjust(10, ' '), i[1]])
            elif besure_code(i[1]) == 'RO_DATA':
                Ro_data_count = Ro_data_count + int(i[2], 16)
                res_map.append([str(0).rjust(10, ' '), str(int(i[2], 16)).rjust(10, ' '),
                                str(0).rjust(10, ' '), str(0).rjust(10, ' '), i[1]])
            elif besure_code(i[1]) == 'RW_DATA':
                Rw_data_count = Rw_data_count + int(i[2], 16)
                res_map.append([str(0).rjust(10, ' '), str(0).rjust(10, ' '),
                                str(int(i[2], 16)).rjust(10, ' '), str(0).rjust(10, ' '), i[1]])
            elif besure_code(i[1]) == 'ZI_DATA':
                Zi_data_count = Zi_data_count + int(i[2], 16)
                res_map.append([str(0).rjust(10, ' '), str(0).rjust(10, ' '),
                                str(0).rjust(10, ' '), str(int(i[2], 16)).rjust(10, ' '), i[1]])
            else:
                other = other + int(i[2], 16)
    res_map.append(
        [str(code_count).rjust(10, ' '), str(Ro_data_count).rjust(10, ' '), str(Rw_data_count).rjust(10, ' '),
         str(Zi_data_count).rjust(10, ' '), 'total'])
    res_map.insert(0, ['Sections:'])
    return res_map


def SYMBOL_TABLE(data):
    sy_map = []
    for i in data:
        if len(i) < 4:
            continue
        elif '*ABS*' in i[-2]:
            continue
        elif '$' in i[-1]:
            continue
        else:
            if len(i) == 4:
                i.insert(2, ' ')
            sy_map.append(i)
    sort_d = [value for index, value in sorted(enumerate(sy_map), key=lambda d: d[1])]
    sort_d.insert(0, ['SYMBOL TABLE:'])
    return sort_d


def Sections2(data):
    sy_map = []
    for i in data:
        if not i or len(i) == 2:
            continue
        elif i[2] == 'd' or i[2] == 'g':
            continue
        else:
            sy_map.append(i)
    data_dic = {}
    for i in data:
        if not i or len(i) == 2:
            continue
        else:
            key = i[0]
            if key not in data_dic:
                data_dic[key] = []
            value = int(i[-2],16)
            data_dic[key].append(value)
    for i in data_dic:
        x = list(set(data_dic[i]))
        for zero in x:
            if zero == 0:
                x.remove(zero)
            if len(x) == 0:
                value = 0
            else:
                value = x[0]
        data_dic[i] = value
    file_list = []
    cut = []
    end = 0
    for i in range(len(sy_map)):
        if sy_map[i][2] == 'df':
            cut.append(i)
        if sy_map[i][2] == 'g':
            end = i
    for i in range(len(cut)-1):
        file_list.append(sy_map[cut[i]:cut[i+1]])
    file_list.append(sy_map[cut[-1]:end])
    res_map = [['code'.rjust(10, ' '), 'Ro_data'.rjust(10, ' '), 'Rw_data'.rjust(10, ' '), 'Zi_data'.rjust(10, ' '),
                'object_name'.rjust(10, ' ')]]
    code_all, ro_all, rw_all, zi_all = 0, 0, 0, 0
    for fi in file_list:
        # print(1,fi[0])
        if not fi:
            continue
        filename = fi[0][-1]
        code,ro,rw,zi = 0,0,0,0
        for i in fi[1:]:
            type_fi = i[-3]
            if int(i[-2], 16) != 0:
                value = int(i[-2], 16)
            else:
                addr = i[0]
                value = data_dic[addr]
            if besure_code(type_fi) == 'Code':
                code += value
            elif besure_code(type_fi) == 'RO_DATA':
                ro += value
            elif besure_code(type_fi) == 'RW_DATA':
                rw += value
            elif besure_code(type_fi) == 'ZI_DATA':
                zi += value
            else:
                pass
        code_all += code;ro_all += ro;rw_all += rw;zi_all += zi
        res_map.append([str(code).rjust(10, ' '), str(ro).rjust(10, ' '), str(rw).rjust(10, ' '), str(zi).rjust(10, ' '), filename])
    res_map.append([str(code_all).rjust(10, ' '), str(ro_all).rjust(10, ' '), str(rw_all).rjust(10, ' '), str(zi_all).rjust(10, ' '), 'total'])
    res_map.insert(0, ['Sections2:'])
    return res_map

def anay_x_text():
    with open('_x.txt', 'r') as f:
        lines = f.readlines()
    lines_list = []
    for i in lines:
        new_list = list(filter(bool, i.replace('\n', '').replace('\t', ' ').split(' ')))
        lines_list.append(new_list)
    section_index, SYMBOL_TABLE_index = 0, 0
    for i in range(len(lines_list)):
        if 'Sections:' in lines_list[i]:
            section_index = lines_list.index(lines_list[i])
        if 'SYMBOL' in lines_list[i] and 'TABLE:' in lines_list[i]:
            SYMBOL_TABLE_index = lines_list.index(lines_list[i])
    section_list = lines_list[section_index:SYMBOL_TABLE_index]
    symbol_list = lines_list[SYMBOL_TABLE_index:]
    other_info = lines_list[:section_index]

    res_map = Sections(section_list)
    symbol_map = SYMBOL_TABLE(symbol_list)
    sec = Sections2(symbol_list)
    return [other_info, symbol_map, res_map,sec]


def create_map_file(data, file_name='optimize_build.map'):
    with open(file_name, 'w') as f:
        for i in data:
            for j in i:
                if not j:
                    f.write('\n')
                else:
                    for x in j:
                        f.write(x)
                        f.write('    ')
                    f.write('\n')
            f.write('\n')
        f.close()


def main(avgs):
    if len(avgs) < 2:
        print('please input the file path')
        return
    file = avgs[1]
    if not os.path.isfile(file):
        print(fr'{file} not is file')
        return
    if not os.path.exists(file):
        print(fr'{file} not exists')
        return
    print("============Optimizing map file============")
    new_path = '.\optimize_build.map'
    read_elf_file(file)
    data = anay_x_text()
    print(f"The optimized file is {new_path}")
    create_map_file(data, new_path)
    print("Optimization completed!!")
    os.remove('_x.txt')


if __name__ == '__main__':
    main(sys.argv)
