@echo off

:: ��ȡ��ǰĿ¼
set denconPath=%~dp0

::��ȡ����ϵͳ�汾��ϵͳ����

set OsVersion=0
set OsProcessor=0
set driverRootPath=0
set driverSubPath=0

:: �жϲ���ϵͳ�汾:

:: ver|findstr /r /i " [�汾 5.1.*]" > NUL && goto WindowsXP
ver|findstr /r /i " [�汾 6.1.*]" > NUL && goto Windows7
ver|findstr /r /i " [�汾 6.3.*]" > NUL && goto Windows8
ver|findstr /r /i " [�汾 10.*]" > NUL && goto Windows10 
goto UnknownVersion

:WindowsXP
set OsVersion="WindowsXP"
goto GetProcessor

:Windows7
set OsVersion="Windows7"
set driverPath=win7
goto GetProcessor


:Windows8
set OsVersion="Windows8.1"
set driverPath=win81
goto GetProcessor

:Windows10 
set OsVersion="Windows10"
set driverPath=win81
goto GetProcessor

:UnknownVersion
set OsVersion="UnknownVersion"
set driverPath=0
goto GetProcessor

:: �ж�ϵͳ����:

:GetProcessor
if /i "%processor_architecture%" equ "x86" (
set OsProcessor="X86"
set driverSubPath=x86
) else (
if /i "%processor_architecture%" equ "amd64" (
set OsProcessor="X64"
set driverSubPath=x64
) else (
set OsProcessor="UnknownProcessor"
)
)

echo %OsVersion% %OsProcessor%

:: ƴ�������ַ���:

set denconfullPath=%denconPath%%driverSubPath%\devcon.exe
set driverfullPath=%denconPath%%driverPath%\%driverSubPath%\cyusb3.inf

echo %denconPath%
echo %denconfullPath%
echo %driverfullPath%

:: ��鵱ǰ�û�Ȩ��
>nul 2>&1 "%SYSTEMROOT%\system32\cacls.exe" "%SYSTEMROOT%\system32\config\system"  

echo "return" %errorlevel%


echo "%denconfullPath%" /r install "%driverfullPath%" "USB\VID_04B4&PID_00F3"
echo "%denconfullPath%" remove "USB\VID_04B4&PID_00F3"
echo "%denconfullPath%" rescan


:: ִ��usb��װ���� ���е�ִ���ַ�����Ҫ��"",��ֹ·�����пո��������������ȷʶ����ַ�����

"%denconfullPath%" /r install "%driverfullPath%" "USB\VID_04B4&PID_00F3"
"%denconfullPath%" remove "USB\VID_04B4&PID_00F3"
"%denconfullPath%" rescan

exit