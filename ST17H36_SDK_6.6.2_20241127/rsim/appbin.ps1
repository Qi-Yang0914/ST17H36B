$Proj_root=Split-Path -parent ($pwd).Path
$Proj_spc="\example\smart_link\private_central\simple_private_central"
$Proj_spp="\example\smart_link\private_peripheral\simple_private_peripheral"
$Proj_rsim="\rsim\"


$Proj_git=Split-Path -parent $Proj_root
$Proj_runcase=$Proj_git+"\runcase"

cd $Proj_root
./setup.ps1
pwd
Write-Output "=====> spp proj build"
cd $Proj_root$Proj_spp
make clean
make -j8
Write-Output "=====> spp proj gen asm"
make dasm
cp spp.* $Proj_root$Proj_rsim
cp spp.hex $Proj_runcase

Write-Output "=====> spc proj build"
cd $Proj_root$Proj_spc
make clean
make -j8
Write-Output "=====> spc proj gen asm"
make dasm

cp spc.* $Proj_root$Proj_rsim
cp spc.hex $Proj_runcase

Write-Output "=====> runcase gen sim txt"
cd $Proj_runcase
pya runcase.py case_bootloader.ftools "'spc.hex'" 8 6236
pya runcase.py case_bootloader.ftools "'spp.hex'" 8 6236
pya runcase.py case_bootloader.ftoolb2s "'spc_phy6236.hexo8KB.bin'"
pya runcase.py case_bootloader.ftoolb2s "'spp_phy6236.hexo8KB.bin'"

cp spc_phy6236.hexo8KB.* $Proj_root$Proj_rsim
cp spp_phy6236.hexo8KB.* $Proj_root$Proj_rsim

cd $Proj_root$Proj_rsim
ls 