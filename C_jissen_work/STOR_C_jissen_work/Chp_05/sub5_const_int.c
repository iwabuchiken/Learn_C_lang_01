/************************************`
 * sub5_const_int.c					*
 * Author: Iwabuchi Ken				*
 * Date: 20120201_080413			*
 * Aim:								*
 * 	1.A const int var not initialized
 * 		when declared => What value will it
 * 		have?
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 68
 * <Related>
 * 	1.
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDLIB_H
#define INCLUDE_STDLIB_H /* exit() */
#include <stdlib.h>
#endif

#ifndef INCLUDE_STRING_H
#define INCLUDE_STRING_H
#include <string.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

int main()
{
	/*
	 * Sec: 01
	 */

	const int	n;
	const char	ch;

	show(n, d);
	show(ch, d);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
