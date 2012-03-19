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
REM * 	1. trunk
REM * 	2. libfile
REM * 	3. macro
REM * 	4. LINE
REM * <File history>
REM *	1. 
REM ************************************

REM ************************************
REM * Exit if %1 is empty
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
REM * remove files
REM ************************************
if "%1"=="rm" (
    echo del *.tds *.obj *.exe
    del *.tds *.obj *.exe
    goto end
)


REM ************************************
REM * Set variables
REM * trunk   => file name trunk
REM * libfile => lib file name
REM ************************************
for /f "tokens=1,2* delims=." %%i in ("%1") do (
		set trunk=%%i
)

REM ************************************
REM * Set variables
REM * libfile => lib file name
REM ************************************

if not "%2"=="" (
   set libfile=%2
)

REM ************************************
REM * Set variables
REM * macro => macro def
REM ************************************
if not "%3"=="" (
   set macro=%3
)


REM ************************************
REM * Set variables: LINE
REM ************************************
set LINE=bcc32 -e%trunk%_bcc.exe -D%macro% %1 %libfile%

REM ************************************
REM * Compile
REM ************************************
echo %LINE%
%LINE%

REM ************************************
REM * "end" section
REM ************************************
:end

REM ************************************
REM * Free variables
REM ************************************
set	trunk=
set	libfile=
set	macro=
set	LINE=

