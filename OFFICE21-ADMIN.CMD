rem kms.srv.crsoo.com kms.digiboy.ir kms.03k.org
rem hq1.chinancce.com kms.shuax.com kms.lotro.cc kms789.com

rem cd /d "%ProgramFiles(x86)%\Microsoft Office\Office16"
c:
cd \
cd "Program Files"
cd "Microsoft Office"
cd Office16
for /f %x in ('dir /b ..\root\Licenses16\ProPlus2021VL_KMS*.xrm-ms') do cscript ospp.vbs /inslic:"..\root\Licenses16\%x"
cscript ospp.vbs /inslic:"..\root\Licenses16\ProPlus2021VL_KMS_Client_AE-ppd.xrm-ms"
cscript ospp.vbs /inslic:"..\root\Licenses16\ProPlus2021VL_KMS_Client_AE-ul-oob.xrm-ms"
cscript ospp.vbs /inslic:"..\root\Licenses16\ProPlus2021VL_KMS_Client_AE-ul.xrm-ms"
cscript ospp.vbs /setprt:1688
cscript ospp.vbs /unpkey:6F7TH >nul 
cscript ospp.vbs /inpkey:FXYTK-NJJ8C-GB6DW-3DYQT-6F7TH
cscript ospp.vbs /sethst:kms.lotro.cc
cscript ospp.vbs /act