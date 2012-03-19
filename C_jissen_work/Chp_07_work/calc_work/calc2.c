/************************************`
 * calc2.c
 * Author: Iwabuchi Ken				*
 * Date: 20120213_072945
 * <Aim>
 * 	1. Leap year
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 98
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

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

// prototypes -----------------------
// functions -------------------------

// global variables -----------------
char	line[100];	/* input line data	*/

int		result;		/* result of calc	*/
char	operator;	/* operator designated by the user	*/
int		value;		/* value input after the operator	*/
// prototypes ------------------------
int execute_calc
(char operator, int value, int calc_result);

// functions ------------------------
int execute_calc
(char operator, int value, int calc_result)
{
//	int		calc_result = 0; /* result of calc	*/

	if (operator == '+') {
		calc_result += value;
	} else if (operator == '-') {
		calc_result -= value;
	} else if (operator == '*') {
		calc_result *= value;
	} else if (operator == '/') {
		if (value == 0) {
			printf("Error: Zero division: %c\n", value);
			printf("   operation ignored\n");
		} else {
		calc_result /= value;
		}//if (value == 0)
	} else {
		printf("Unknown operator %c\n",
					operator);
	}//if (operator == '+')

	return calc_result;
}//int execute_calc(char operator, int value)

/**********************************
 * main()
 **********************************/
int main()
{
	result = 0;	/* initiate result	*/

	/* endless loop	*/
	while (1) {
		printf("Result: %d\n", result);

		printf("Enter operator and number: ");
		fgets(line, sizeof(line), stdin);
		sscanf(
			line, "%c %d", &operator, &value);

		if ((operator == 'q') ||
				(operator == 'Q')) {
			break;
		}//if

		//result += execute_calc(
		result = execute_calc(
				operator, value, result);
//		//if (operator == '+') {
//		if (operator == '+') {
//			result += value;
//		} else if (operator == '-') {
//			result -= value;
//		} else if (operator == '*') {
//			result *= value;
//		} else if (operator == '/') {
//			if (value == 0) {
//				printf("Error: Zero division: %c\n", value);
//				printf("   operation ignored\n");
//			} else {
//			result /= value;
//			}//if (value == 0)
//		} else {
//			printf("Unknown operator %c\n",
//						operator);
//		}//if (operator == '+')

	}//while (1)

	return (0);
}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
