echo off 
echo ? 
echo ? 
rem	----	Make sure that we've got a parameter and that we're on the 
rem	----	proper drive. 
if "%1" == "" goto Usage 
if not exist installh.bat goto Usage 
rem	----	Wait for a keystroke before starting. 
echo off 
echo Hard disk installation for 
echo Police Quest 
pause 
rem	----	Create or change to the appropriate directory on the hard disk. 
makepath %1\sierra 
if errorlevel 1 goto CantMake 
makepath %1pq 
if errorlevel 1 goto CantMake 
rem	----	Copy the installation file to the hard disk and execute it. 
copy _install.bat %1 
%1_install %1 
goto Exit 
rem	----	Tell user that we couldn't create the proper directory 
rem	----	and bail out. 
:CantMake 
echo off 
echo ? 
echo ? 
echo Unable to create the directory 
echo 	%1\sierra\pq 
echo Installation cancelled. 
goto Exit 
rem	----	No parameter or not on the proper drive -- tell user how 
rem	----	to use installation program. 
:Usage 
echo off 
echo To install Police Quest on 
echo hard disk C:, make the drive 
echo containing the Police Quest 
echo disk your current drive, then type 
echo		installh  C: 
echo	If your hard disk has a drive letter 
echo other than C:, use its letter instead. 
:Exit 
