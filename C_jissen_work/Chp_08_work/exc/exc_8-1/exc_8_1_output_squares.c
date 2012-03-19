/************************************`
 * <Basics>
 *	1. File: exc_8_1_output_squares.c
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
 * 	1. Oualline: 120
 * <Related>
 * 	1.
 * <Description of the program>
 * 	1. Use two functions
	int out_horizontal( void )
		=> output horizontal walls
		=> out if the index is a multiple
			of 4
	int out_vertical( void )
		=> output vertical walls
		=> out if the index is not
			a multiple of 4
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
void out_horizontal( void );
void out_vertical( void );

// functions ============================
void  out_horizontal( void )
{
	/* output a horizontal wall	*/
	printf("+-----+-----+\n");

}//void out_horizontal( void )

void out_vertical( void )
{
	/* output a vertical wall	*/
	printf("|     |     |\n");

}//void out_vertical( void )

int main(int argc, char* argv[])
{
	/* variables	*/
	int		i; 	/* index for 'for' block	*/

	/* processes
	 * 1. Out the first horizontal wall
	 * 2. Out the rest of the walls
	 * 		using a 'for' loop
	 */

	/* 1. Out the first horizontal wall	*/
	out_horizontal();

	/* 2. Out the rest of the walls
	 * 	=> range of the index 'i'
	 * 		from 1 to 8
	 */
	for (i = 1; i < 9; i++) {
		/* if the index is a multiple
		 * of 4
		 * 	=> out horizontal
		 */
		if ((i % 4) == 0) {
			out_horizontal();
			continue;
		} else {
		/* if not
		 * 	=> out vertical
		 */
			out_vertical();
			continue;
		}//if ((i % 4) == 0)
	}//for (i = 1; i < 9; i++)

	/* report		*/
	printf("Display done.\n");

	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
