/************************************`
 * File:	mylib1.h
 * Version:	1.1
 * Author:	Iwabuchi Ken				*
 * Date:	20120217_064331
 * <Aim>
 * 	1.
 * Usage:
 *	1.
 * <Source>
 * 	1.
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

// macros -----------------
#define true	1
#define false	0
#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

// prototypes -----------------------
int input_number( void );
int is_digit(const char* string);
int is_prime_number(int number);
int is_prime_number_with_largest_divider
(int number, int* largest_divider);
int is_digit_strict(const char* string);
