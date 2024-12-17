#!/usr/bin/python3
# -*- coding: utf-8 -*
import os
import subprocess
import sys
import re

regStr = '.*\*+\/'
claimer = "* " \
          "* All rights reserved.".encode()
# claimer2 = """/**************************************************************************************************
#
#
# **************************************************************************************************/""".encode()
claimer2 = ""
sufList = ['.c', '.h', '.cpp']
phyWord = b' '
phyWord2 = b'All rights reserved.'
# claimerPath = os.path.join(os.getcwd(), 'Disclaimer.txt')
# claimerPath = os.path.join(os.getcwd(), 'empty_discalimer.txt')
# claimerPath2 = os.path.join(os.getcwd(), 'empty_discalimer_return.txt')

flist = []
flist2 = []
flist3 = []


def findFile():
    for dirpath, dirnames, filenames in os.walk(os.getcwd()):
        for file in filenames:
            # print(os.path.splitext(file)[1],os.path.splitext(file))
            if os.path.splitext(file)[1] in sufList:
                fullpath = os.path.join(dirpath, file)
                # print(fullpath)
                addClaim(fullpath)


def findFile_yubin(sdk_path):
    for dirpath, dirnames, filenames in os.walk(sdk_path):
        for file in filenames:
            if os.path.splitext(file)[1] in sufList:
                fullpath = os.path.join(dirpath, file)
                addClaim_yubin(fullpath)


def addClaim(fullpath):
    content = ''
    pos1 = -1
    pos2 = -1
    with open(fullpath, "rb") as f:
        content = f.read()

    # if phyWord in content :
    # 	flist.append(fullpath)
    # print(fullpath)
    lenNR = 0
    # print("aaaaaaaaaaaaaaaaaaaa",claimer)
    # print("aaaaaaaaaabbbbbbbbbbb", claimer2)
    if claimer in content:
        flist.append(fullpath)
        pos1 = content.find(claimer)
        # remove claimer
        lenClaimer = len(claimer)
        # print(flist)
        if (pos1 > -1):
            while (1):
                if content[pos1 + 1 + lenClaimer + lenNR] == 10 or content[pos1 + 1 + lenClaimer + lenNR] == 13:
                    lenNR = lenNR + 1
                else:
                    break
            content = content[0:pos1] + content[pos1 + lenNR + lenClaimer:len(content)]
    if claimer2 in content:
        # print(flist2)
        flist2.append(fullpath)
        if (pos1 > -1):
            with open(fullpath, "wb") as f:
                f.write(content)
    else:
        if (pos1 > -1):
            # print(flist3)
            flist3.append(fullpath)
            content = claimer2 + '\n'.encode() + content
            with open(fullpath, "wb") as f:
                f.write(content)
    if lenNR:
        print('remove return %d: %s' % (lenNR, fullpath))
        with open(fullpath, "wb") as f:
            f.write(content)
    return flist, flist2, flist3


def addClaim_yubin(fullpath):
    with open(fullpath, "rb") as f:
        content1 = f.read()
        # content = f.readlines()
    a = b''
    lenNR = 0
    result = re.split(b'\*\*\*\*/', content1, flags=re.S)
    if len(result) == 0:
        return
    for i in range(len(result)):
        if result[i].startswith(b'/*******') and result[i].endwith(b'******/'):
            if phyWord in result[i] and phyWord2 in result[i]:
                flist.append(fullpath)
                lenNR = lenNR + 1
                result[i] = claimer2
        else:
            re = re.split(b'/*******', result[i], flags=re.S)
            if len(re) == 0:
                pass
            else:
                pass

    con = b''
    for i in result:
        con = con + i

    if (lenNR):
        print('remove return %d: %s' % (lenNR, fullpath))
        with open(fullpath, "wb") as f:
            f.write(con)


def work1(work_path, type=0):
    global claimer
    global claimer2

    # fname1 = (work_path + '/copyright.txt')
    # claimerPath = os.path.join(os.getcwd(), fname1)
    # print("claimerPath", claimerPath)
    # if type == 0:
        # fname2 = (work_path + '/Disclaimer.txt')
        # claimerPath2 = os.path.join(os.getcwd(), fname2)
        # print("claimerPath2", claimerPath2)
    # else:
    #     fname2 = 'empty_header.txt'

    findFile_yubin(work_path)

    # print(flist,flist2,flist3)
    # print('File: %s' % claimerPath)
    for file in flist:
        print('->: %s' % file)
    print('Find Total %d ' % (len(flist)))
    #
    # print('File: %s' % claimerPath2)
    # for file in flist2:
    #     print('->: %s' % file)
    # print('Find Total %d ' % (len(flist2)))
    #
    # for file in flist3:
    #     print('<->: %s' % file)
    # print('Replace Total %d ' % (len(flist3)))


def work2(work_path, Astyle):
    os.chdir(work_path)
    subprocess.run(f'{Astyle} --style=allman -s4 -xL -M80 -xp -c -W1 -k1 -xe -f -xw -xt -w -xW -n -R ../*.c,*.h',
                   shell=True)
    # os.system(f'{Astyle} --style=allman -s4 -xL -M80 -xp -c -W1 -k1 -xe -f -xw -xt -w -xW -n -R ../*.c,*.h')


def main(argv):
    print(
        'sdk_build.py [-work_path sdk_path] [[-replace_file]')
    print('{0}开始检查权限{0}'.format('*' * 10))

    if len(argv) < 2:
        print('sdk_build.py [-work_path sdk_path] [[-replace_file]')
        print('check sdk_path and replace_file')
        return

    replace_after_file = sys.argv[1]
    replace_after_file = os.path.join(os.getcwd(), replace_after_file)

    global claimer2
    claimer2 = open(replace_after_file, 'rb').read()
    work_path = os.getcwd()
    if not os.path.exists(os.path.join(work_path, 'example')):
        print(f"There are no routines in the current sdk path---{work_path}")
        exit()

    Astyle = work_path + '/__bld_cmd/Astyle.exe'
    work1(work_path)
    work2(work_path, Astyle)
    print('{0}检查权限完成{0}'.format('*' * 10))


if __name__ == '__main__':
    main(sys.argv)
