/************************************`
 * sub2_double.c					*
 * Author: Iwabuchi Ken				*
 * Date: 20120201_083056			*
 * Aim:								*
 * 	1. Use fgets() and sscanf()
 * 	2. See if the output is correct
 * Usage:
 *	1. Execute the program.			*
 * <Source>
 * 	1. Oualline:62
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
int		value; /* value */

int main()
{
	printf("Enter a value: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &value);
	printf("Twice %d is %d\n", value, value * 2);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
