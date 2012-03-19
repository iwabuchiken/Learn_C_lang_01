/************************************`
 * mylib1.c
 * Author: Iwabuchi Ken				*
 * Date: 20120217_064331
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

#ifndef INCLUDE_PRIME_NUMBER_H
#define INCLUDE_PRIME_NUMBER_H
//#include "prime_number.h"
#include "mylib1.h"
#endif

/*
#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")
*/
// macros -----------------
//#define true	1
//#define false	0

// global variables -----------------

// prototypes ========================
/*
int input_number( void );
int is_digit(const char* string);
int is_prime_number(number);
*/

// functions =========================
int is_prime_number(number)
{
	/* variables	*/
	int		target;		/* working number	*/
	int		divider;	/* divider number	*/

	/* initialize	*/
	target = number;
	divider = number / 2;

	/* if the target is
	 * 2, 3
	 * => return 1 (prime number)
	 */
	if (target == 2) {
		return 1;
	} else if (target == 3) {
		return 1;
	}

	/* while loop
	 * => divider is from the half to 2
	 * => if dividable by any of these
	 *		numbers, then the target is not
	 *		a prime number
	 */
	while (divider > 1) {
		/* if residue is 0 => not a prime number	*/
		if ((target % divider) == 0) {
			return 0;
		} else {
			divider -= 1;
		}
	}

	/* the target is not dividable
	 * by the numbers from the half to 2
	 * => hence, the target is a prime number
	 */
	return 1;
}//int is_prime_number(number)

int input_number( void )
{
	/* variables	*/
	char	line[10];	/* input line	*/
	int		number;		/* number input	*/

	/* processes	*/
	while (1) {
		printf("Input a number: ");
		fgets(line, sizeof(line), stdin);
		line[strlen(line) - 1] = '\0';
		if (is_digit(line)) {
			sscanf(line, "%d", &number);
			break;
		//sscanf(line, "%d", &number);
		//if (!isdigit(number)) {
		//if (is_digit()) {
			//break;
		} else {
			//printf("Non-number input: %d\n",
				//	number);
			printf("Non-number input: %s\n",
							line);
		}
	}//while (1)

	return number;
}//int input_number( void )

int is_digit(const char* string)
{
	/* variables	*/
	unsigned int	span;	/* span		*/

	/* processes	*/
	span = strspn(string, "0123456789");

	if (span == strlen(string)) {
		return 1;
	} else {
		return 0;
	}//if (span == strlen(string))
}//int is_digit(const char* string)

int is_prime_number_with_largest_divider
(int number, int* largest_divider)
{
	/* variables	*/
	int		target;		/* working number	*/
	int		divider;	/* divider number	*/

	/* initialize	*/
	target = number;
	divider = number / 2;

	/* if the target is
	 * 2, 3
	 * => return 1 (prime number)
	 */
	if (target == 2) {
		return 1;
	} else if (target == 3) {
		return 1;
	}

	/* while loop
	 * => divider is from the half to 2
	 * => if dividable by any of these
	 *		numbers, then the target is not
	 *		a prime number
	 */
	while (divider > 1) {
		/* if residue is 0 => not a prime number	*/
		if ((target % divider) == 0) {
			/* get the largest divider	*/
			*largest_divider = divider;

			return 0;
		} else {
			divider -= 1;
		}
	}

	/* the target is not dividable
	 * by the numbers from the half to 2
	 * => hence, the target is a prime number
	 */
	return 1;
}//int is_prime_number_with_largest_divider

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/

