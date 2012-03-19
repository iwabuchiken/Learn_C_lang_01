/************************************`
 * sub3_signed_char.c				*
 * Author: Iwabuchi Ken				*
 * Date: 20120201_080413			*
 * Aim:								*
 * 	1.Can a signed char used in sscanf()?
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 66
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

signed char	very_short;
int			temp;
char		line[100];

int main()
{
	/*
	 * Sec: 01
	 */

	printf("Input number: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &very_short);
	show(very_short, d);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
