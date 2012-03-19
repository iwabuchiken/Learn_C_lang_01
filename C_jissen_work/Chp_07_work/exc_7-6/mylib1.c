/************************************`
 * File:	mylib1.c
 * Version:	1.1
 * Author:	Iwabuchi Ken				*
 * Date:	20120217_064331
 * Path:	C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-6\mylib1.c
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

/************************************
 * 	is_digit()
 *
 * 	<Return>
 *	1 => the string is a digit
 *	0 => the string is not a digit
 ************************************/
int is_digit(const char* string)
{
	/* variables
	 *	span: unsigned int
	 */
	/* span		*/
	unsigned int	span;

	/* processes	*/
	//span = strspn(string, "0123456789");
	span = strspn(string, "0123456789-");

	/* if the span and the length of
	 * the string are equal, i.e.,
	 * the string contains digit chars only,
	 * then return 1
	 */
	if (span == strlen(string)) {
		return 1;
	/* if the two values are not equal,
	 * 	meaning the string contains non-
	 * 	digit chars too, then return 0
	 */
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

int is_digit_strict(const char* string)
{
	/* variables	*/
	unsigned int	span;	/* span		*/

	/* processes	*/
	//span = strspn(string, "0123456789");
	span = strspn(string, "0123456789-");

	/* if the span is equal to
	 * the length of the string
	 */
	if (span == strlen(string)) {
		if (*string == '-') {
			/* variables
			 *	1.
			 *
			 */
			/* pointer for '-' in "string"	*/
			char	*p;
			/* span between the top of
			 * "string" and the place of '-'
			 */
			int		span = 0;

			/* get the place of '-'	*/
			p = strchr(string, '-');

			/* while	*/
			while (p != NULL) {
				/* get the span		*/
				span = p - string;
				/* search for the next '-'	*/
				p = strchr(
					(string + (span + 1)), '-');
			}

			/* If the value of "span"
			 * is other than 0, that means
			 * that the string contains
			 * more than one '-', meaning
			 * the string is not of a regular
			 * minus number
			 * => hence, returns 0
			 */
			if (span != 0)
				return (0);

//			//debug
//			printf("[LINE:%d]", __LINE__);
//			printf("span=%d\n", span);
		}
		return 1;
	/*
	 * If the span is not equal
	 */
	} else {
		return 0;
	}//if (span == strlen(string))
}//int is_digit_strict(const char* string)

#ifdef D
int main(int argc, char* argv[])
{
	/* test func:
	 * 	input_number_strict()
	 */
	/* variables	*/
	int		result;		/* receiver	*/
	char	string[20];	/* number string	*/
	/* number string
	 * => original
	 */
	char	number_string[] = "1234-456";

	/* initialize	*/
	if (argc > 1) {
		strcpy(string, argv[1]);
	} else {
		strcpy(string, number_string);
	}

	printf("[LINE:%d]", __LINE__);
	//result = is_digit_strict("1234-456");
	result = is_digit_strict(string);
	printf("string=%s\n", string);
	printf("result=%d\n", result);
}//int main() {
#endif

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/

