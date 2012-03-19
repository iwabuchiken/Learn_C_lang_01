/************************************`
 * sub3_tri.c						*
 * Author: Iwabuchi Ken				*
 * Date: 20120201_083056			*
 * Aim:								*
 * 	1. Use fgets() and sscanf()
 * Usage:
 *	1. Execute the program.			*
 * <Source>
 * 	1. Oualline:62: ex_5-9
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
			printf(#dt"=%"#typ"\n", dt)
#define show1(dt) \
			printf(#dt"\n")

char	line[100]; /* input line from the console */
int		height;	/* height of a triangle */
int		width;	/* base width of a triangle */
int		area;	/* area of a triangle */

int main()
{
	printf("Enter width height?: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &width, &height);
	area = (width * height) / 2;
	printf("The area is %d\n", area);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
