/************************************`
 * prime_number.c
 * Author: Iwabuchi Ken				*
 * Date: 20120217_064331
 * <Aim>
 * 	1.
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 105
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

#ifndef INCLUDE_CTYPE_H
#define INCLUDE_CTYPE_H
#include <ctype.h>
#endif

#ifndef INCLUDE_MATH_H
#define INCLUDE_MATH_H
#include <math.h>
#endif

#ifndef INCLUDE_TIME_H
#define INCLUDE_TIME_H
#include <time.h>
#endif

#ifndef INCLUDE_PRIME_NUMBER_H
#define INCLUDE_PRIME_NUMBER_H
//#include "prime_number.h"
#include "mylib1.h"
//#include "C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-5\mylib1.h"
#endif
/*
#ifndef INCLUDE_MYLIB1_H
#define INCLUDE_MYLIB1_H
#include "mylib1.c"
#endif
*/
/*
#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")
*/
// prototypes =======================
/*
int is_prime_number(number);
*/
// functions =======================

/**********************************
 * main()
 **********************************/
int main()
{
	/* variables		*/
	char	line[10];	/* input line	*/
	int		number;		/* number input	*/
	int		prime;		/* flag for prime number	*/
	/* the largest divider	*/
	int		largest_divider;


	/* initialize		*/
	prime = false;
	largest_divider = 0;

	/* processes

	 */
	/* 1. input a number	*/
	number = input_number();

	/* 2. if prime number	*/
	//prime = is_prime_number(number);
	prime = is_prime_number_with_largest_divider(
				number, &largest_divider);

#ifdef D
	printf("[LINE:%d]", __LINE__);
	printf("number=%d\n", number);
	printf("prime=%d\n", prime);
	printf("largest_divider=%d\n", largest_divider);
#endif
	return (0);

}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/

