/************************************`
 * sub6_ex_5-6_minutes_and_hours.c
 * Author: Iwabuchi Ken				*
 * Date: 20120212_112519
 * <Aim>
 * 	1.
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 74
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

int main()
{
	/*
	 * Sec: 01
	 */
	// variables
	int		total; // total time in minutes
	int		minutes; // minutes
	int		hours;	// hours
	char	input[20]; // input number

	// session
	while(1) {
		// input number
		while (1) {
			printf("Input number(integer, >0: ");
			fgets(input, sizeof(input), stdin);
			input[strlen(input) - 1] = '\0';

			if (strlen(input) ==
					strspn(input, "0123456789")) {
				break;
			} else {
				printf("The input is not "
						"a number: %s\n", input);
			}//if (strlen(input) ==
			//printf("strspn=%d",
					//strspn(input, "0123456789"));
					//strspn("0123456789", input));
			//show(strspn("0123456789", input), dt);
			//show(strlen(input), d);
			// validate if it's a number
			/*
			if (isdigit(atoi(input)))
				break;
			else
				printf("The input is not "
						"a number: %s\n", input);
						*/
		}//while

		// calculate
		total	= atoi(input);
		hours	= total / 60;
		minutes	= total % 60;

		show(total, d);
		show(hours, d);
		printf("Total=%d => %d hour(s) "
				"and %d minute(s)\n",
				total, hours, minutes);

		// if-continue dialogue
		printf("Continue the session?(y/n): ");
		fgets(input, sizeof(input), stdin);
		//input[strlen(input) - 1] = '\0';
		if (input[0] == 'y' || input[0] == 'Y') {
			continue;
		} else {
			printf("The input is: '%s'"
					" The session ends.\n",
					input);
			exit(0);
		}//if (input[0] == 'y' || input[0] == 'Y') {
	}//while(1) {
	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
