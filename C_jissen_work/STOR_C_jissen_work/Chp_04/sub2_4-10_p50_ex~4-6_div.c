/************************************`
 * sub2_4-10_p50_ex~4-6_div.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120128_073644			*
 * Aim:								*
 * 	1. How to fix the program
 * Usage:
 *	1. Execute the program			*
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
			printf(#dt"=%"#typ"\n", dt)
#define show1(dt) \
			printf(#dt"\n")

float result;

int main()
{
	result = 7.0 / 22.0;
	printf("The result is %d\n", result);
	printf("The result is %d\n", (int)result);
	printf("The result is %f\n", result);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
