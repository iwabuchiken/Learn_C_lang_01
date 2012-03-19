/************************************`
 * <Basics>
 *	1. File: sub2_p118_continue.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120218_062001
 *	4. Dependencies:
 *		1) Header:	C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-6\mylib1.h	v=1.1
 *		2) File:	C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-6\mylib1.c	v=1.1
 * <Aim>
 * 	1. If "continue" done, the increment
 * 		for the loop executed?
 * 		=> Yes
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 112
 * <Related>
 * 	1.
 * <Others>
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H /* exit() */
#include <stdlib.h>
#endif

#ifndef INCLUDE_STRING_H
#define INCLUDE_STRING_H
#include <string.h>
#endif
#ifndef INCLUDE_TIME_H
#define INCLUDE_TIME_H
#include <time.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

#ifdef MYLIB1
#ifndef INCLUDE_MYLIB_1_H
#define INCLUDE_MYLIB_1_H
#include "mylib1.h"
#endif
#endif

// macros ============================

// global vars ============================

// prototypes ============================


// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
	int		number;	/* increment	*/
	int		i;		/* index for 'for' loop	*/

	/* initialize	*/
	number = 0;

	/* processes	*/
	for (i = 0; i < 10; i++) {
		printf("i=%d number=%d\n", i, number);

		if (i % 2 == 0)
			continue;

		++number;
		printf("\tnumber incremented\n");
	}

	/* show each value	*/
	printf("\nAfter the loop\n");
	printf("\ti=%d number=%d\n", i, number);

	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
