$Proj_root=Split-Path -parent ($pwd).Path
$Proj_exp="\example\peripheral\gpio"
$Proj_rsim="\rsim\"


$Proj_git=Split-Path -parent $Proj_root
$Proj_runcase=$Proj_git+"\runcase"

cd $Proj_root
./setup.ps1
pwd
Write-Output "=====> example proj build"
cd $Proj_root$Proj_exp
make clean
make -j8
Write-Output "=====> example proj gen asm"
make dasm
cp gpio.* $Proj_root$Proj_rsim
cp gpio.hex $Proj_runcase


Write-Output "=====> runcase gen sim txt"
cd $Proj_runcase
pya runcase.py case_bootloader.ftools "'gpio.hex'" 8 6236
pya runcase.py case_bootloader.ftoolb2s "'gpio_phy6236.hexo8KB.bin'"

cp gpio_phy6236.hexo8KB.* $Proj_root$Proj_rsim

cd $Proj_root$Proj_rsim
ls 