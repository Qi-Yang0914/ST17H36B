# -*- coding: utf-8 -*-
import os
import re
import sys
from collections import defaultdict


def simplifyPath(filename):
    # filename = str(filename).replace('\n','')
    if '/' not in filename:
        return filename
    words = filename.split('/')
    if len(words) < 3:
        return filename

    result = words[-3] + "/" + words[-2] + "/" + words[-1]
    return result


def simplifyList(ls):
    re = []
    for i in ls:
        if i == '':
            pass
        else:
            a = simplifyPath(i)
            re.append(a)
    return re


def is_con_in_list(key_list, con):
    for i in key_list:
        if i in con:
            return True
    return False


def get_data_from_file(filename):
    # Archive member included to satisfy reference by file (symbol)
    archive_symbol = []
    # Discarded input sections
    discared_in_sections = []
    # Discarded  input  sections
    discared_output_sections = []
    # Memory Configuration
    memory_configuration = []
    # Linker script and memory map
    linker_map = []
    # START GROUP ----> END GROUP +
    groups_info = []
    # LOAD linker stubs
    load_linker_stubs = []



    with open(filename, "r") as f:
        lines = f.readlines()
        for i in range(len(lines)):
            if 'Archive member included to satisfy reference by file (symbol)' in lines[i]:
                for j in range(i, len(lines)):
                    key_word = ['Discarded input sections', 'Memory Configuration', 'Linker script', 'START GROUP',
                                'LOAD linker stubs']
                    if lines[j] == '\n':
                        pass
                    elif is_con_in_list(key_word, lines[j]) is True:
                        break
                    else:
                        y = lines[j].replace('\n', ' ')
                        archive_symbol.append(y)

        for i in range(len(lines)):
            if 'Discarded input sections' in lines[i]:
                for j in range(i, len(lines)):
                    key_word = ['Memory Configuration', 'Linker script' ,'START GROUP','LOAD linker stubs']
                    if lines[j] == '\n':
                        pass
                    elif is_con_in_list(key_word, lines[j]) is True:
                        break
                    else:
                        y = lines[j].replace('\n', ' ')
                        discared_in_sections.append(y)
        for i in range(len(lines)):
            if 'Memory Configuration' in lines[i]:
                key_word = ['Discarded input sections', 'Linker script', 'START GROUP','LOAD linker stubs']
                for j in range(i, len(lines)):
                    if lines[j] == '\n':
                        pass
                    elif is_con_in_list(key_word, lines[j]) is True:
                        break
                    else:
                        y = lines[j].replace('\n', ' ')
                        memory_configuration.append(y)
        for i in range(len(lines)):
            if 'Linker script and memory map' in lines[i]:
                key_word = ['Discarded input sections', 'Memory Configuration','START GROUP','LOAD linker stubs']
                for j in range(i, len(lines)):
                    if lines[j] == '\n':
                        pass
                    elif is_con_in_list(key_word, lines[j]) is True:
                        break
                    else:
                        y = lines[j].replace('\n', ' ')
                        linker_map.append(y)
        a = 0
        for i in range(len(lines)):
            if a == 1:
                break
            if 'START GROUP' in lines[i]:
                key_word = ['Discarded input sections', 'Memory Configuration', 'Linker script','LOAD linker stubs']
                for j in range(i, len(lines)):
                    if lines[j] == '\n':
                        pass
                    elif is_con_in_list(key_word, lines[j]) is True:
                        a = 1
                        break
                    else:
                        y = lines[j].replace('\n', ' ')
                        x = re.split(r" (?![^(]*\))", y)
                        groups_info.append(x)
                    i += 1
                    a = 1
        for i in range(len(lines)):
            if 'LOAD linker stubs' in lines[i]:
                for j in range(i, len(lines)):
                    if lines[j] == '\n':
                        pass
                    else:
                        y = lines[j].replace('\n', ' ')
                        load_linker_stubs.append(y)
    return archive_symbol, discared_in_sections, memory_configuration, linker_map, groups_info, load_linker_stubs


def detail_refer_symbol(refer_symbol):
    if len(refer_symbol) / 2 == 0:
        print("detail_refer_symbol failed")
        return False
    a = []
    b = []
    for i in range(1, len(refer_symbol)):
        if i % 2 == 1:
            a.append(simplifyPath(refer_symbol[i]))
        if i % 2 == 0:
            b.append(simplifyPath(refer_symbol[i]))
    c = []
    c.append(refer_symbol[0])
    for i in range(len(a)):
        c.append(a[i] + ' refers to ' + b[i].strip())

    d = []
    for i in range(len(c)):
        if c[i] not in d:
            d.append(c[i])
    return d


def detail_discarded_input_sections(Discarded_input_sections):
    re = []
    for i in Discarded_input_sections:
        word = i.split(' ')
        for x in word:
            if x == '':
                pass
            else:
                x = simplifyPath(x)
                re.append(x)
    Discarded_input_sections_1 = []
    for i in range(0, len(re), 4):
        Discarded_input_sections_1.append(re[i:i + 4])

    Discarded_input_sections2 = []
    for i in range(len(Discarded_input_sections_1)):
        if '.debug_' not in Discarded_input_sections_1[i][0] and '.riscv.attributes' not in Discarded_input_sections_1[i][0]:
            Discarded_input_sections2.append(Discarded_input_sections_1[i])
    DisCarded_finnal = []
    for i in range(len(Discarded_input_sections2)):
        if Discarded_input_sections2[i] not in DisCarded_finnal:
            DisCarded_finnal.append(Discarded_input_sections2[i])
        else:
            pass
    return DisCarded_finnal


def detail_linker_map(linker_map):
    linker_map_res = []
    for i in linker_map:
        if 'LOAD' in i:
            linker_map_res.append(i)
        else:
            word = i.split(' ')
            word2 = []
            for i in word:
                if i == '':
                    pass
                else:
                    word2.append(i)
            a = [word2[0], word2[0], '0x0', 'ABSOLUTE', word2[1]]
            linker_map_res.append(a)
    for i in range(len(linker_map_res)):
        # print(linker_map_res[i])
        if 'LOAD' in linker_map_res[i]:
            if 'LOAD' not in linker_map_res[i]:
                linker_map_res.insert(i, ['exe_addr', 'load_addr', 'size', 'Section', 'Object_name'])
    linker_map_res1 = []
    for i in range(len(linker_map_res)):
        if linker_map_res[i] not in linker_map_res1:
            linker_map_res1.append(linker_map_res[i])

    return linker_map_res1


def detail_groups_info(groups_info):
    groups_info_res = []
    ls1 = []
    for i in range(len(groups_info)):
        if '*' in groups_info[i]:
            pass
        else:
            word = groups_info[i]
            if word[0] == 'START' or word[0] == 'LOAD' or word[0] == 'END':
                word.remove('')
                groups_info_res.append(word)
            else:
                word.remove('')
                groups_info_res.append(word)
    groups_info_res1 = []
    b = []
    c = []
    fun = ''
    exec_addr = ''
    load_addr = ''
    for i in groups_info_res:
        size = '0x0'
        other = ''
        if not i:
            pass
        elif i[0] == 'START' or i[0] == 'LOAD' or i[0] == 'END':
            groups_info_res1.append(i)
        else:
            x = simplifyList(i)
            b.append(len(x))
            if len(x) == 1:
                if '*(' in x[0]:
                    groups_info_res1.append(x)
                else:
                    fun = x[0]
            else:
                if len(x) == 2:
                    if '0x00000' in x[0]:
                        exec_addr = x[0]
                    if '0x' in x[0] and '0x000' not in x[0]:
                        size = x[0]
                    other = x[1]
                    load_addr = exec_addr
                if len(x) == 3:
                    # print(x)
                    if '0x00000' in x[0]:
                        exec_addr = x[0]
                        if '0x' in x[1] and '0x000' not in x[1]:
                            size = x[1]
                        other = x[2]
                        load_addr = exec_addr
                    if '.' in x[0] or '*' in x[0]:
                        fun = x[0]
                        if '0x00000' in x[1]:
                            exec_addr = x[1]
                        if '0x' in x[2] and '0x000' not in x[2]:
                            size = x[2]
                        load_addr = exec_addr
                if len(x) == 4:
                    if '.' in x[0] or '*' in x[0]:
                        fun = x[0]
                        if '0x00000' in x[1]:
                            exec_addr = x[1]
                        if '0x' in x[2] and '0x000' not in x[2]:
                            size = x[2]
                        other = x[3]
                        load_addr = exec_addr
                    if '0x0000' in x[0]:
                        exec_addr = x[0]
                        if '0x' in x[1] and '0x000' not in x[1]:
                            size = x[1]
                        other = ' '.join(x[2:])
                        load_addr = exec_addr
                if len(x) == 5:
                    if '0x00000' in x[0]:
                        exec_addr = x[0]
                        other = ' '.join(x[1:])
                        load_addr = exec_addr
                    else:
                        fun = x[0]
                        exec_addr = x[1]
                        size = x[2]
                        other = ' '.join(x[3:])
                        load_addr = exec_addr
                if len(x) == 6:
                    fun = x[0]
                    exec_addr = x[1]
                    size = x[2]
                    load_addr = x[5]
                if len(x) > 6:
                    exec_addr = x[0]
                    load_addr = x[1]
                    size = x[2]
                    other = ' '.join(x[3:])
                data = [exec_addr.replace('00000000', ''), load_addr.replace('00000000', ''), size, fun, other]
                groups_info_res1.append(data)

    for i in groups_info_res1:
        if len(i) <= 3:
            c.append(i)
        else:
            if '.debug_' in i[3]:
                pass
            elif '.comment' in i[3]:
                pass
            elif '.ARM.attributes' in i[3]:
                pass
            elif '.riscv.attributes' in i[3]:
                pass
            elif i[2] == '0x0':
                pass
            else:
                c.append(i)
    d = []
    for i in range(0,len(c)):
        if c[i] not in d:
            d.append(c[i])
    return d

def besure_code(con):
    RO_DATA = ('.vtable','.srodata', '.rodata')
    RW_DATA = ('.data', '.sdata')
    ZI_DATA = ('.stackbss', '.tbss_space', '.bss', '.sbss', '.stack')
    Code = ('.text', '.init','.eh_frame')
    if con.startswith(Code):
        return 'Code'
    elif con.startswith(RO_DATA):
        return 'RO_DATA'
    elif con.startswith(RW_DATA):
        return 'RW_DATA'
    elif con.startswith(ZI_DATA):
        return 'ZI_DATA'
    else:
        return 'other'

def detail_groups_info_map(groups_info):
    data = defaultdict(list)
    for i in range(len(groups_info)):
        if len(groups_info[i]) == 5:
            if '(' in groups_info[i][2] or '=' in groups_info[i][2]:
                pass
            else:
                if '*fill*' not in groups_info[i] and '(size before relaxing)' not in groups_info[i]:
                    index_path = groups_info[i][4]
                    stack_index = groups_info[i][3]
                    if index_path == '' and stack_index == '.stack':
                        index_path = stack_index

                    if index_path not in data.keys():
                        data[index_path].append(groups_info[i])
                    else:
                        data[index_path].append(groups_info[i])
                else:
                    data[index_path][-1].append(groups_info[i])
    # print(data['Source/GCC/startup_femto_iot.S.o'])
    res_map = []
    # '12345'.rjust(10, '0')
    res_map.append(['code'.rjust(10,' '), 'Ro_data'.rjust(10,' '), 'Rw_data'.rjust(10,' '), 'Zi_data'.rjust(10,' '),
                    'object_name'.rjust(10,' ')])
    code_count, Ro_data_count, Rw_data_count, Zi_data_count = 0, 0, 0, 0

    for i in data.keys():
        code, Ro_data, Rw_data, Zi_data, other = 0, 0, 0, 0, 0
        # i_valu = data[i]
        # i_value = []
        # [i_value.append(x) for x in i_valu if x not in i_value]
        # if i == '':
        #     for j in data[i]:
        #         if j[3] == '.stack':
        #             # print(j)
        #             if '.stack' not in i_value:
        #                 i_value.append('.stack')
        #             i_value = [j]
        #             i_key = '.stack'

        if i != '':
            i_valu = data[i]
            i_value = []
            [i_value.append(x) for x in i_valu if x not in i_value]
            i_key = i

            for j in i_value:
                # print(j)
                if len(j) == 5:
                    if besure_code(j[3]) == 'Code':
                        code = code + int(j[2], 16)
                    elif besure_code(j[3]) == 'RO_DATA':
                        Ro_data = Ro_data + int(j[2], 16)
                    elif besure_code(j[3]) == 'RW_DATA':
                        Rw_data = Rw_data + int(j[2], 16)
                    elif besure_code(j[3]) == 'ZI_DATA':
                        Zi_data = Zi_data + int(j[2], 16)
                    else:
                        other = other + int(j[2], 16)
                elif len(j) == 6:
                    if type(j[-1]) is list:
                        if besure_code(j[3]) == 'Code':
                            code = code + int(j[-1][2], 16) + int(j[2], 16)
                        elif besure_code(j[3]) == 'RO_DATA':
                            Ro_data = Ro_data + int(j[-1][2], 16) + int(j[2], 16)
                        elif besure_code(j[3]) == 'RW_DATA':
                            Rw_data = Rw_data + int(j[-1][2], 16) + int(j[2], 16)
                        elif besure_code(j[3]) == 'ZI_DATA':
                            Zi_data = Zi_data + int(j[-1][2], 16) + int(j[2], 16)
                        else:
                            other = other + int(j[-1][2], 16) + int(j[2], 16)
            code_count = code_count + code
            Ro_data_count = Ro_data_count + Ro_data
            Rw_data_count = Rw_data_count + Rw_data
            Zi_data_count = Zi_data_count + Zi_data
            a = [str(code).rjust(10,' '), str(Ro_data).rjust(10,' '), str(Rw_data).rjust(10,' '),
                 str(Zi_data).rjust(10,' '), i_key.ljust(20,' ')]  # [object,code,Ro_data,Rw_data,Zi_data]
            res_map.append(a)
    res_map.append([str(code_count).rjust(10, ' '),str(Ro_data_count).rjust(10, ' '),str(Rw_data_count).rjust(10, ' '),
                    str(Zi_data_count).rjust(10, ' '),'total'.rjust(10, ' ')])
    return res_map

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

    archive_symbol, discared_sections, memory_configuration, linker_map, groups_info, load_linker_stubs \
        = get_data_from_file(file)
    archive_symbol_flag = 1
    if not archive_symbol:
        # print('archive_symbol is empty')
        archive_symbol_flag = 0
    else:
        archive_symbol_res = detail_refer_symbol(archive_symbol)
    discared_sections_res = detail_discarded_input_sections(discared_sections)
    linker_map_res = detail_linker_map(linker_map)
    groups_info_res = detail_groups_info(groups_info)

    print("Optimization completed!!")
    dir, file = os.path.split(file)
    # new_path = dir + '\optimize_build.map'
    new_path = '.\optimize_build.map'
    print(f"The optimized file is {new_path}")
    with open(new_path, 'w') as f:
        if archive_symbol_flag != 0:
            for i in archive_symbol_res:
                f.writelines(i)
                f.writelines('\n\n')
            f.writelines('\n\n')

        f.writelines('Discarded input sections')
        f.writelines('\n')
        for i in discared_sections_res:
            for j in i:
                f.writelines(j)
                f.writelines('      ')
            f.writelines('\n')

        f.writelines('\n')
        for i in memory_configuration:
            f.writelines(i)
            f.writelines('\n')
        f.writelines('\n')

        f.writelines('Linker script and memory map\n')
        f.writelines('\n')
        for i in linker_map_res:
            if 'LOAD' in i:
                f.writelines(i)
            else:
                for j in i:
                    f.writelines(j)
                    f.writelines('          ')
            f.writelines('\n')

        f.writelines('\n')
        f.writelines("Group info\n")
        for i in groups_info_res:
            for j in i:
                f.writelines(j)
                f.writelines('   ')
            f.writelines('\n')

        grouos_info_res_map = detail_groups_info_map(groups_info_res)
        f.writelines('\n')
        f.writelines("Image component sizes\n")
        for i in grouos_info_res_map:
            for j in i:
                f.writelines(j)
                f.writelines('   ')
            f.writelines('\n')

if __name__ == "__main__":
    main(sys.argv)
