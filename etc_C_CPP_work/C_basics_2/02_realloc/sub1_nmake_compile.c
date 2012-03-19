/************************************`
 * <Basics>
 *	1. File: sub1_nmake_compile.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120218_062001
 * <Aim>
 * 	1.
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1.
 * <Related>
 * 	1.
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H /* exit() */
#include <stdlib.h>
#endif

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <string.h>
#endif
#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <time.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

#ifndef INCLUDE_MYLIB_1_H
#define INCLUDE_MYLIB_1_H
#include "mylib1.h"
#endif

// macros ============================
//#define TRUE	1
//#define FALSE	0

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/

	/* processes	*/
	printf("macro: true=%d\n", true);

	/* input number	*/
	input_number();

	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
