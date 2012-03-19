/************************************`
 * <Basics>
 *	1. File: sub3_p119_switch_continue.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120218_062001
 *	4. Dependencies:
 *		1) Header:	C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-6\mylib1.h	v=1.1
 *		2) File:	C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-6\mylib1.c	v=1.1
 * <Aim>
 * 	1.
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 119
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
int		number;	/* number to  be converted	*/
char	type;	/* type of conversion		*/
char	line[80];	/* input line			*/

// prototypes ============================


// functions ============================

int main(int argc, char* argv[])
{
	/* processes	*/
	while (1) {
		printf("Enter conversion type and "
				"number\n"
				"\t(example: \"o 128\"): ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c", &type);

		/* if 'q' or 'Q', then quit
		 * 	the while loop
		 */
		if ((type == 'q') || (type == 'Q')) {
			printf("Thanks\n");
			break;
		}

		/* switching	*/
		switch (type) {
			case 'o':
			case 'O':
				sscanf(line, "%c %o",
						&type, &number);
				break;
			case 'x':
			case 'X':
				sscanf(line, "%c %x",
						&type, &number);
				break;
			case 'd':
			case 'D':
				sscanf(line, "%c %d",
						&type, &number);
				break;
			case '?':
			case 'h':
				printf("Letter conversion\n");
				printf("  o    Octal\n");
				printf("  x    Hexadecimal\n");
				printf("  d    Decimal\n");
				printf("  q    Quit program\n");

				/* number not shown	*/
				continue;
			default:
				printf("Type ? for help\n");
				/* number not shown	*/
				continue;
		}//switch (type)
		printf("Result is %d\n", number);
	}//while (1)

	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
