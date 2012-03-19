/************************************`
 * sub1_exa_6-1_fibonacci.c
 * Author: Iwabuchi Ken				*
 * Date: 20120212_112519
 * <Aim>
 * 	1. Show fibonacci numbers while
 * 		the number is less than 100
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 79
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

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

// variables
int		old_number;
int		current_number;
int		next_number;
int		sum_number = 1;

int main()
{
	// set values
	old_number = 1;
	current_number = 1;

	// show the first number
	printf("1\n");

	// show the rest
	while(current_number < 1000) {
		printf("%d\n", current_number);
		next_number = current_number + old_number;
		old_number = current_number;
		current_number = next_number;
		sum_number += 1;
		//show(sum_number, d);
	}//while(1) {

	// show the number of numbers
	show(sum_number, d);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
