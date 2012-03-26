@echo off
REM ************************************
REM * <Basics>
REM * 	1. File: makefile_sub1.bat
REM * 	2. Date: 20120310_214838
REM * 	3. Author: Iwabuchi Ken
REM * 	4. Path: 
REM * <Aim>
REM * 	1.
REM * <Usage>
REM * <Variables>
REM * 	1. 
REM * <File history>
REM *	1. 
REM ************************************

REM ************************************
REM * initialize vars
REM ************************************
set trunk=
set LINE=

REM ************************************
REM * Show usage
REM * Set "str" variable
REM ************************************
if "%1"=="" (
	echo First argument needed
    echo ^<Syntax^>
    echo   ^>makefile_sub1.bat ^<main file^> ^<lib file^> ^<macro^>
	echo ^<Example^>
	echo   1.
	echo  ^>makefile_sub1.bat sub1.c
	echo   2.
	echo  ^>makefile_sub1.bat sub1.c mylib.c
	echo   3.
	echo  ^>makefile_sub1.bat sub1.c mylib.c MYLIB
	goto end
)

REM ************************************
REM * Delete files
REM ************************************

if "%str%"== "rm" (
    echo del *.obj *.tds *.exe
	del *.obj *.tds *.exe
    goto end
)

rem debug
rem echo str=%str%
rem goto end

REM ************************************
REM * Set macro: %1
REM ************************************
for /f "tokens=1,2* delims=." %%i in ("%1") do (
		set trunk=%%i
)

REM ************************************
REM * Compile files into prog.exe
REM ************************************
set LINE=bcc32 -e%trunk%_bcc.exe %1
echo %LINE%
%LINE%

REM ************************************
REM * end module
REM ************************************
:end

set trunk=
set LINE=
