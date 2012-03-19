/************************************`
 * sub1_4-10_p48_ExponentialSignifier.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120128_073644			*
 * Aim:								*
 * 	1. Use the expression '1.2e3'
 * Usage:
 *	1. Execute the program.			*
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

int main()
{
	float	f1 = 1.2e3;

	show1("<f1 = 1.2e3>");
	show(f1, f);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
