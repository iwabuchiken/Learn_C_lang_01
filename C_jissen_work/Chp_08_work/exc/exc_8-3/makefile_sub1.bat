@echo off
REM ************************************
REM * <Basics>
REM * 	1. File: makefile_sub1.bat
REM * 	2. Date: 20120309_230347
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

make -f Makefile_bcc -DMACRO=MYLIB mylib.obj
make -f Makefile_bcc -DMACRO=MYLIB sub1_p121_get_average.obj
make -f Makefile_bcc -DMACRO=MYLIB sub1_p121_get_average.exe


REM ************************************
REM * Exit if %1 is empty
REM ************************************
REM if "%1"=="" (
REM 	echo First argument needed for
REM 	echo  the file to be compiled
REM 	echo ^<Example^>
REM 	echo   1.
REM 	echo  ^>makefile_sub1.bat sub1.c
REM 	echo   2.
REM 	echo  ^>makefile_sub1.bat sub1.c N
REM 	echo    =^> "mylib1.obj" is not included
REM 	goto end
REM )

REM ************************************
REM * Set the module option
REM * => If the option 'N' is set,
REM * 	then "mylib1.obj" is not co-built in. 
REM ************************************
REM if not "%2"=="" (
REM 	if "%2"=="N" (
REM 		set MYLIB_INCLUDE=false
REM 	) else (
REM 		set MYLIB_INCLUDE=true
REM 	)
REM ) else (
REM 	set MYLIB_INCLUDE=true
REM )

REM ************************************
REM * Get the trunk from
REM * 	the first argument
REM ************************************
REM for /f "tokens=1,2 delims=." %%a in ("%1") do (
REM 	set trunk=%%a
REM )

REM echo trunk=%trunk%

REM ************************************
REM * Set other variables
REM ************************************
REM set FILE_PATH=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-6
REM set LIB_FILE=mylib1.c
REM for /f "tokens=1,2 delims=." %%a in ("%LIB_FILE%") do (
REM 	set LIB_FILE_TRUNK=%%a
REM )


REM ************************************
REM * Compile "mylib1.c"
REM ************************************
REM echo bcc32 -c %FILE_PATH%\%LIB_FILE%
REM bcc32 -c %FILE_PATH%\%LIB_FILE%

REM ************************************
REM * Compile and link main file
REM * and the object files
REM ************************************
REM if "%MYLIB_INCLUDE%"=="true" (
REM 	echo bcc32 -I%FILE_PATH% -e%trunk%_bcc.exe %trunk%.c %LIB_FILE_TRUNK%.obj
REM 	bcc32 -DMYLIB1 -I%FILE_PATH% -e%trunk%_bcc.exe %trunk%.c %LIB_FILE_TRUNK%.obj
REM ) else (
REM 	echo bcc32 -I%FILE_PATH% -e%trunk%_bcc.exe %trunk%.c
REM 	bcc32 -I%FILE_PATH% -e%trunk%_bcc.exe %trunk%.c
REM )
rem echo nmake all /e trunk=%trunk%
rem nmake all /e trunk=%trunk% COMPILER=cl

REM ************************************
REM * Free variables
REM ************************************
REM set	trunk=
REM set	FILE_PATH=
REM set	LIB_FILE=
REM set LIB_FILE_TRUNK=

REM ************************************
REM * "end" section
REM ************************************
:end
