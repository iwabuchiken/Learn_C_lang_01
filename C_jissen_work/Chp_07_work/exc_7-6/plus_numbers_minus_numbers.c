/************************************`
 * plus_numbers_minus_numbers.c
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
// macros =======================
/* mylib1.h
#define true	1
#define false	0
#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")
*/

// prototypes =======================
/* mylib1.h
int is_digit(const char* string);
*/
int input_number_with_message( void );
void report_plus_minus(int plus, int minus);

// functions =======================
/*************************************
 * input_number_with_message()
 *
 * <Return value>
 * 	-1	=> exit chosen: 'e'
 * 	0	=> normal exit: 'q'
 *
 *************************************/
int input_number_with_message( void )
{
	/* variables	*/
	char	line[10];	/* input line	*/
	int		number;		/* number input	*/
	int		plus;		/* number of plus numbers	*/
	int		minus;		/* number of minus numbers	*/

	/* initialize	*/
	plus = minus = 0;

	/* processes	*/
	while (1) {
		printf("Enter a number\n");
		printf("\t(q: quit / e: report) => ");
		fgets(line, sizeof(line), stdin);
		line[strlen(line) - 1] = '\0';

		/* if the input is "e"	*/
		if (!strcmp(line, "e")) {
			report_plus_minus(plus, minus);
			continue;
//			/* UNDER CONSTRUCTION	*/
//			printf("* UNDER CONSTRUCTION *\n");
//			continue;
		}

		/* if the input is "q"
		 * => return -1
		 */
		if (!strcmp(line, "q")) {
			return -1;
		}

		/* if the input is a number
		 * =>
		 */
		if (is_digit(line)) {	/* is_digit()::mylib1.h	*/
			sscanf(line, "%d", &number);
			/* plus minus	*/
			if (number >= 0) {
				plus ++;
			} else {
				minus ++;
			}
			/* report		*/
			printf("The number processed: "
					"%d\n", number);
			//break;
		//sscanf(line, "%d", &number);
		//if (!isdigit(number)) {
		//if (is_digit()) {
			//break;

		/* if the input is not a number
		 * 	nor any of the command chars
		 * 	=> continue
		 */
		} else {
			//printf("Non-number input: %d\n",
				//	number);
			printf("Non-number input: %s\n",
							line);
			continue;
		}
	}//while (1)

	return (0);
}//int input_number_with_message( void )

void report_plus_minus(int plus, int minus)
{
	/* report	*/
	printf("plus=%d minus=%d\n",
					plus, minus);

}//void report_plus_minus(int plus, int minus)

/**********************************
 * main()
 **********************************/
int main()
{
	/* variables		*/

	/* initialize		*/

	/* processes		*/
	input_number_with_message();

#ifdef D
	printf("[LINE:%d]", __LINE__);
#endif
	return (0);

}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/

