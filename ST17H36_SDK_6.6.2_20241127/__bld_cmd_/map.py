# -*- coding: utf-8 -*-
import json
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
                    key_word = ['Memory Configuration', 'Linker script', 'START GROUP', 'LOAD linker stubs']
                    if lines[j] == '\n':
                        pass
                    elif is_con_in_list(key_word, lines[j]) is True:
                        break
                    else:
                        y = lines[j].replace('\n', ' ')
                        discared_in_sections.append(y)
        for i in range(len(lines)):
            if 'Memory Configuration' in lines[i]:
                key_word = ['Discarded input sections', 'Linker script', 'START GROUP', 'LOAD linker stubs']
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
                key_word = ['Discarded input sections', 'Memory Configuration', 'START GROUP', 'LOAD linker stubs']
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
                key_word = ['Discarded input sections', 'Memory Configuration', 'Linker script', 'LOAD linker stubs']
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
        if '.debug_' not in Discarded_input_sections_1[i][0] and '.riscv.attributes' not in \
                Discarded_input_sections_1[i][0]:
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
    groups_info_res1 = []
    for i in groups_info:
        my_list = [x for x in i if x != '']
        groups_info_res1.append(my_list)
    # print(groups_info_res1)
    _info = []
    for i in range(len(groups_info_res1)):
        if not i:
            continue
        elif '[!provide]' in groups_info_res1[i] and 'PROVIDE' in groups_info_res1[i]:
            continue
        elif groups_info_res1[i][0] == 'START' or groups_info_res1[i][0] == 'LOAD' or groups_info_res1[i][0] == 'END':
            groups_info_res.append(groups_info_res1[i])
            continue
        elif len(groups_info_res1[i]) == 1:
            if 'OUTPUT' in groups_info_res1[i][0]:
                if _info:
                    groups_info_res.append(_info)
                break
            else:
                if _info:
                    groups_info_res.append(_info)
                _info = []
                _info = _info + groups_info_res1[i]
        elif len(groups_info_res1[i]) == 2:
            if '0x' in groups_info_res1[i][0]:
                _info = _info + groups_info_res1[i]
            # else:
            #     print(groups_info_res1[i])
        elif len(groups_info_res1[i]) >= 3:
            if groups_info_res1[i][0].startswith('.'):
                if _info:
                    groups_info_res.append(_info)
                _info = []
                _info = _info + groups_info_res1[i]
            else:
                _info = _info + groups_info_res1[i]
        if not _info:
            groups_info_res.append(_info)
    _info_2 = []
    data_dic = {}
    # data_json = json.dumps(data_dic)
    for i in groups_info_res:
        if not i:
            continue
        elif '[!provide]' in i and 'PROVIDE' in i:
            continue
        elif i[0] == 'START' or i[0] == 'LOAD' or i[0] == 'END':
            # print(i)
            _info_2.append(i)
            continue
        else:
            if len(i) == 1:
                continue
            else:
                for ii in i:
                    if '.heap' in ii or '.stack' in ii:
                        if ii not in data_dic.keys():
                            data_dic[ii] = [i]
                        else:
                            data_dic[ii].append(i)
                    elif '.c.o' in ii or '.S.o' in ii:
                        if ii not in data_dic.keys():
                            data_dic[ii] = [i]
                        else:
                            data_dic[ii].append(i)
                    elif 'gcc' in ii or 'lib' in ii:
                        if ii not in data_dic.keys():
                            # print(ii)
                            data_dic[ii] = [i]
                        else:
                            data_dic[ii].append(i)
                    else:
                        continue
    data_dic_2 = {}
    for i in data_dic.keys():
        data_dic_2[i] = []
        for ii in data_dic[i]:
            if ii[0] == '.heap' or ii[0] == '.stack':
                type_info = besure_code(ii[0])
                size = int(ii[2], 16)
            else:
                if ii[0].startswith('.'):
                    type_info = besure_code(ii[0])
                else:
                    continue
            # first_addr_info,frist_size_info =None,None
                if ii[1].startswith('0x00') and ii[2].startswith('0x'):
                    first_addr_info = int(ii[1], 16)
                    first_size_info = int(ii[2], 16)
                    size = int(ii[2], 16)
                else:
                    continue
                end_addr_info = first_addr_info + first_size_info
                for iii in range(len(ii[3:])):
                    if ii[iii].startswith('0x0'):
                        in_addr = int(ii[iii], 16)
                        if in_addr < end_addr_info:
                            pass
                        else:
                            if ii[iii + 1].startswith('0x'):
                                in_size = int(ii[iii + 1], 16)
                                size = size + in_size
                                end_addr_info = end_addr_info + size
                            else:
                                pass
            data_one = {'type': type_info, 'size': size}
            data_dic_2[i].append(data_one)
    code,ro,rw,zi = 0,0,0,0
    d = []
    for i in data_dic_2.keys():
        _da = data_dic_2[i]
        o_code, o_ro, o_rw, o_zi = 0, 0, 0, 0
        for ii in _da:
            if ii['type'] == 'Code':
                o_code = o_code + ii['size']
            elif ii['type'] == 'RO_DATA':
                o_ro = o_ro + ii['size']
            elif ii['type'] == 'RW_DATA':
                o_rw = o_rw + ii['size']
            elif ii['type'] == 'ZI_DATA':
                o_zi = o_zi + ii['size']
        code = code + o_code; ro = ro + o_ro; rw = rw + o_rw; zi = zi + o_zi
        _on_list = [o_code, o_ro, o_rw, o_zi,i]
        a = [str(o_code).rjust(10, ' '), str(o_ro).rjust(10, ' '), str(o_rw).rjust(10, ' '),
             str(o_zi).rjust(10, ' '), i.ljust(20, ' ')]
        d.append(a)
    _first_index = ['code'.rjust(10, ' '), 'Ro_data'.rjust(10, ' '), 'Rw_data'.rjust(10, ' '), 'Zi_data'.rjust(10, ' '),
                'object_name'.rjust(10, ' ')]
    d.insert(0,_first_index)
    d.append([str(code).rjust(10, ' '), str(ro).rjust(10, ' '), str(rw).rjust(10, ' '), str(zi).rjust(10, ' '),
              'total'.rjust(10, ' ')])
    _info_3 = []
    for ke in data_dic.keys():
        for ii in data_dic[ke]:
            if ii[0].startswith('.rela') is False:
                value = [ii[1],ii[2],ii[0]] + ii[3:]
                _info_3.append(value)
    sorted_list = sorted(_info_3, key=lambda x: x[0])
    return sorted_list,d


def besure_code(con):
    RO_DATA = ('.vtable', '.srodata', '.rodata')
    RW_DATA = ('.data', '.sdata')
    ZI_DATA = ('.stackbss', '.tbss_space', '.bss', '.sbss', '.stack','.heap')
    Code = ('.text', '.init', '.eh_frame')
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
                    if index_path == '' and '.stack' in stack_index:
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
    res_map.append(['code'.rjust(10, ' '), 'Ro_data'.rjust(10, ' '), 'Rw_data'.rjust(10, ' '), 'Zi_data'.rjust(10, ' '),
                    'object_name'.rjust(10, ' ')])
    code_count, Ro_data_count, Rw_data_count, Zi_data_count = 0, 0, 0, 0
    for i in data.keys():
        if i != '':
            code, Ro_data, Rw_data, Zi_data, other = 0, 0, 0, 0, 0
            i_valu = data[i]
            i_value = []
            [i_value.append(x) for x in i_valu if x not in i_value]
            i_key = i
            for j in i_value:
                if len(j) == 5:
                    if besure_code(j[3]) == 'Code':
                        code = code + int(j[2], 16)
                        # print(i_key,j[2], code)
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
            a = [str(code).rjust(10, ' '), str(Ro_data).rjust(10, ' '), str(Rw_data).rjust(10, ' '),
                 str(Zi_data).rjust(10, ' '), i_key.ljust(20, ' ')]  # [object,code,Ro_data,Rw_data,Zi_data]
            res_map.append(a)
            code_count = code_count + code
            Ro_data_count = Ro_data_count + Ro_data
            Rw_data_count = Rw_data_count + Rw_data
            Zi_data_count = Zi_data_count + Zi_data
    res_map.append(
        [str(code_count).rjust(10, ' '), str(Ro_data_count).rjust(10, ' '), str(Rw_data_count).rjust(10, ' '),
         str(Zi_data_count).rjust(10, ' '), 'total'.rjust(10, ' ')])
    return res_map

def get_fill_data(groups_info):
    code, Ro_data, Rw_data, Zi_data, other = 0, 0, 0, 0, 0
    for i in groups_info:
        if '*fill*' in i and '*' not in i[2]:
            fi_indexs = [j for j in range(len(i)) if  i[j]=='*fill*']
            for fi_index  in fi_indexs:
                if besure_code(i[2]) == 'Code':
                    code = code + int(i[fi_index+2], 16)
                    # print(i_key,j[2], code)
                elif besure_code(i[2]) == 'RO_DATA':
                    Ro_data = Ro_data + int(i[fi_index+2], 16)
                elif besure_code(i[2]) == 'RW_DATA':
                    Rw_data = Rw_data + int(i[fi_index+2], 16)
                elif besure_code(i[2]) == 'ZI_DATA':
                    Zi_data = Zi_data + int(i[fi_index+2], 16)
                else:
                    other = other + int(i[fi_index+2], 16)
    return ['code:  '+str(code).rjust(30, ' '), 'RO:   '+str(Ro_data).rjust(30, ' '),
            'RW:  '+str(Rw_data).rjust(30, ' '), 'ZI:  '+str(Zi_data).rjust(30, ' '),
            'other:  '+str(other).rjust(30, ' '),
            'total:    '+str(code+Ro_data+Rw_data+Zi_data+other).rjust(30,' ')]

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
    groups_info_res,grouos_info_res_map = detail_groups_info(groups_info)

    fill_map =  get_fill_data(groups_info_res)
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
        # grouos_info_res_map = detail_groups_info_map(groups_info_res)
        f.writelines('\n')
        f.writelines("Image component sizes\n")
        for i in grouos_info_res_map:
            for j in i:
                f.writelines(j)
                f.writelines('   ')
            f.writelines('\n')

        f.writelines('\n')
        f.writelines("*FILL* sizes\n")
        for i in fill_map:
            f.writelines(i)
            f.writelines('\n')



if __name__ == "__main__":
    main(sys.argv)
