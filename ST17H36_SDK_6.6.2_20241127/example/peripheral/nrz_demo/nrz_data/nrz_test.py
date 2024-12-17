import random

nrz_defalt = "B6FFC1C0FFCB14DC3CF0FFF570DB9369FFB414FF9315C78570DAD6BFD8D8A0DDDD82EEEE00FFFF00FFFF008B8B00808055BAD30094D33299CC004B822B8AE27093DB687BEE5A6ACD3D488BE6E6FAF8F8FF0000FF0000CD19197000008B0000806941E19564EDC4B0DE887799807090901EFFF8F0FF8246B4CE87FACE87EBBF00FFD8ADE6E0B0E69E5FA0FFF0FFFFE0FFEEAFEEFF00FFFF00FFCE00D14F2F4F8B008B800080D148CCB220AAE040D0FF7FD4CD66AAFA009AFFF5FAFF007FB33C718B2E57FFF0F0EE9090FB9898BC8F8FCD3232FF00008B2222800000640000FF7F00FC7C00FFAD2F6B552FCD9A328E6B23F5F5DCFAFAD2FFFFF0FFFFE0FFFF00808000B7BD6BFAFFCDE8EEAAE6F08CD7FF00F8FFDCA5DA2086B80BFAFFF0F5FDE6DEF5B3E4FFB5A5FF00EFFFD5EBFFCDDEFFADEBFAD7B4D28CB8DE87E4FFC48CFF00F0FAE685CD3FDAFFB9A4F46069D21E458B13F5FFEE52A02DA0FF7A7FFF5045FF0096E97A63FF47E4FFE180FA72FAFFFA80F0808FBC8F5CCD5C00FF002AA52A22B222008B00008000FFFFFFF5F5F5DCDCDCD3D3D3C0C0C0A9A9A9808080696969000000"
nrz_defult2 = "C1FFB6CBFFC03CDC14F5FFF093DB70B4FF6993FF1485C715D6DA70D8D8BFDDDDA0EEEE82FFFF00FFFF008B8B00808000D3BA55D39400CC9932824B00E28A2BDB9370EE7B68CD6A5A8B483DFAE6E6FFF8F8FF0000CD00007019198B0000800000E14169ED6495DEB0C4997788907080FF1E90FFF0F8B44682FA87CEEB87CEFF00BFE6ADD8E6B0E0A05F9EFFF0FFFFE0FFEEAFEEFF00FFFF00FFD100CE4F2F4F8B008B800080CC48D1AA20B2D040E0D47FFFAA66CD9A00FAFAF5FF7F00FF713CB3572E8BF0F0FF9090EE9898FB8F8FBC3232CD0000FF22228B000080000064007FFF007CFC2FADFF2F556B329ACD236B8EDCF5F5D2FAFAF0FFFFE0FFFF00FFFF0080806BBDB7CDFFFAAAEEE88CF0E600FFD7DCFFF820DAA50BB886F0FFFAE6FDF5B3F5DEB5FFE400FFA5D5FFEFCDFFEBADFFDED7FAEB8CD2B487DEB8C4FFE400FF8CE6FAF03FCD85B9FFDA60F4A41ED269138B45EEFFF52DA0527AFFA050FF7F00FF457AE99647FF63E1FFE472FA80FAFFFA80F0808FBC8F5CCD5C00FF002AA52A22B222008B00008000FFFFFFF5F5F5DCDCDCD3D3D3C0C0C0A9A9A9808080696969000000"

def generate_nrz_dta():
	with open('aa.bin', "ab+") as f:
		f.write(bytes.fromhex(nrz_defalt))
	with open('bb.bin', "ab+") as f:
		f.write(bytes.fromhex(nrz_defult2))

def hex_to_bytes(hex_str, byteorder='big'):
	if byteorder == 'big':
		return bytes.fromhex(hex_str)
	elif byteorder == 'little':
		return bytes.fromhex(hex_str)[::-1]
	else:
		raise ValueError('byteorder must be either \'big\' or \'little\'')

def generate_bytxt(rgbfile = "rgb.txt"):
	with open(rgbfile,"r") as originf:
		origin_lines = originf.readlines()
	grb_2 = ""
	for line in origin_lines[::-1]:
		if line.startswith("#"):
			grb_2= grb_2+line[5:7]+line[1:5]
			# print("====2=====", grb_2)
	# grb_big = hex_to_bytes(grb_1, 'big')
	# grb_little = hex_to_bytes(grb_1, 'little')
	# print("====1=====",grb_big.hex())
	# print("====1=====",grb_little.hex())

	# with open(rgbfile.split(".")[0]+'.bin', "ab+") as f:
	# 	f.write(bytes.fromhex(grb_2[::-1]))
	return bytes.fromhex(grb_2[::-1])

global gfile, bfile, rfile, cfile, yfile, hrfile,grfile,grdfile
gfile = 'green.txt'
bfile = 'blue.txt'
rfile = 'red.txt'
cfile = 'cyan.txt'
yfile = 'yellow.txt'
hrfile = 'hred.txt'
grfile = 'gray.txt'
grdfile = 'grdfile.txt'#r->g->b->c->y->gray

def genrate_rgbtxt():
	with open(gfile, 'a+') as f:
		for j in range(0, 256, 1):
			# for k in range(0, 256, 16):
				# green = '#FF'+"%.2x"%(j)+"%.2x"%(k)+"\n"	# R G B
				green = '#00'+"%.2x"%(j)+"00"+"\n"	# R G B
				f.writelines(green)
	
	with open(rfile, 'a+') as fr:
		for j in range(0, 256, 1):
			# for k in range(0, 256, 16):
				red = '#'+"%.2x"%(j)+'0000\n'
				fr.writelines(red)

	with open(bfile, 'a+') as fb:
		for j in range(0, 256, 1):
			# for k in range(0, 256, 16):
				blue = '#0000'+"%.2x"%(j)+"\n"
				fb.writelines(blue)

	with open(cfile, 'a+') as fc:
		for j in range(0, 256, 1):
				cyan = '#FF'+"%.2x"%(j)+'FF'+"\n"
				fc.writelines(cyan)

	with open(yfile, 'a+') as fy:
		for j in range(0, 256, 1):
				yellow = '#FFFF'+"%.2x"%(j)+"\n"
				fy.writelines(yellow)

	with open(hrfile, 'a+') as fhr:
		for j in range(0, 256, 1):
				hred = '#'+"%.2x"%(j)+'FFFF'+"\n"
				fhr.writelines(hred)

	with open(grfile, 'a+') as fgr:
		for j in range(0, 256, 1):
				gray = '#'+"%.2x"%(j)+"%.2x"%(j)+"%.2x"%(j)+"\n"
				fgr.writelines(gray)

	with open(grdfile, 'a+') as fgrd:
		#red-->blue
		for x in range(0, 51):
			temp = int(255*x/51) #green
			gred = '#'+"%.2x"%(temp)+"%.2x"%(255-temp)+"00\n"
			fgrd.writelines(gred)

		for x in range(0, 51):
			temp = int(255*x/51) #green
			gred = '#'+"%.2x"%(temp)+"00"+"%.2x"%(255-temp)+"\n"
			fgrd.writelines(gred)

		for x in range(0, 51):
			temp = int(255*x/51) #green
			gred = '#00'+"%.2x"%(temp)+"%.2x"%(255-temp)+"\n"
			fgrd.writelines(gred)

		for x in range(0, 51):
			temp = int(255*x/51) #green
			gred = '#'+"%.2x"%(temp)+"00"+"%.2x"%(255-temp)+"\n"
			fgrd.writelines(gred)


		for x in range(0, 51):
			temp = int(255*x/51) #green
			gred = '#00'+"%.2x"%(255-temp)+"00\n"
			fgrd.writelines(gred)
		fgrd.writelines('#000000\n')


		# for x in range(0, 51):
		# 		grd = '#'+"%.2x"%(j)+"%.2x"%(j)+"%.2x"%(j)+"\n"
		# 		fgrd.writelines(grd)


def generate_binfiles():
	generate_bytxt(gfile)
	generate_bytxt(rfile)
	generate_bytxt(bfile)
	generate_bytxt(cfile)
	generate_bytxt(yfile)
	generate_bytxt(hrfile)
	generate_bytxt(grfile)
	generate_bytxt(grdfile)
	# generate_bytxt(bfile)



def read_binf(file_path):
	with open(file_path, 'rb') as f:
			_data = f.read()
		# logger.info('origin data: %s  size: %d' % (_data.hex(), len(_data)))
		# data_info = []

	n = 8 - len(_data) % 8
	if n in range(1, 8):
		print(f"need pack: {n}")
		bs_byte = [0x00] * n
		_data += bytes(bs_byte)
	# print(_data.hex())
	return _data

#complain into buffer

def complain(_size =4):
	# generate_binfiles()
	# green_data = read_binf(gfile.split(".")[0]+'.bin')
	# red_data = read_binf(rfile.split(".")[0]+'.bin')
	# blue_data = read_binf(bfile.split(".")[0]+'.bin')
	# cfile_data = read_binf(cfile.split(".")[0]+'.bin')
	# yfile_data = read_binf(yfile.split(".")[0]+'.bin')
	# hrfile_data = read_binf(hrfile.split(".")[0]+'.bin')
	# grfile_data = read_binf(grfile.split(".")[0]+'.bin')
	# grdfile_data = read_binf(grdfile.split(".")[0]+'.bin')


	green_data = generate_bytxt(gfile)
	red_data = generate_bytxt(rfile)
	blue_data = generate_bytxt(bfile)
	cfile_data = generate_bytxt(cfile)
	yfile_data = generate_bytxt(yfile)
	hrfile_data = generate_bytxt(hrfile)
	grfile_data = generate_bytxt(grfile)
	grdfile_data = generate_bytxt(grdfile)

	all_data = bytes()

	total_cnt = int(len(green_data)/_size)
	tlen = len(green_data)
	j=1
	with open("all_data.bin","ab+") as f:
		for i in range(0, total_cnt):
			print(f"green_data {i}: {green_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)].hex()}")
			f.write(green_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)])
			print(f"red_data {i}: {red_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)].hex()}")
			f.write(red_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)])
			
			print(f"cfile_data {i}: {cfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)].hex()}")
			f.write(cfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)])
			print(f"yfile_data {i}: {yfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)].hex()}")
			f.write(yfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)])
			print(f"hrfile_data {i}: {hrfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)].hex()}")
			f.write(hrfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)])
			print(f"blue_data {i}: {blue_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)].hex()}")
			f.write(blue_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)])
			print(f"grfile_data {i}: {grfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)].hex()}")
			f.write(grfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)])
			print(f"grdfile_data {i}: {grdfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)].hex()}")
			f.write(grdfile_data[tlen-_size*(total_cnt-i):tlen-_size*(total_cnt-i-1)])

			j = j+1


if __name__ == '__main__':
	# nrz_data(8,32)
	genrate_rgbtxt()
	# generate_binfiles()
	complain()