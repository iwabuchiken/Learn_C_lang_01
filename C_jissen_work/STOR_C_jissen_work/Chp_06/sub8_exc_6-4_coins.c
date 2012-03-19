/************************************`
 * sub8_exc_6-4_coins.c
 * Author: Iwabuchi Ken				*
 * Date: 20120213_072945
 * <Aim>
 * 	1. Count the numbers of coins
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 85
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

/**********************************
 * main()
 **********************************/
int main()
{
	// variables
	int		quarter;
	int		nicol;
	int		dime;
	int		penny;
	int		total;	/* total amount	*/
	char	line[10];	/* input amount	*/
	char	*ret;	/* return of fgets()	*/
	int		span_length;	/* for validation	*/
	int		string_length;	/* for validation	*/

	/*************************
	 * 1. input data
	 *************************/
/*	printf("Input the amount: ");
	ret = fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &total);
*/
	// validate the input
	while (1) {
		// input number
		printf("Input the amount \n"
				"(less than 1 dollar/ -1 to quit): ");
		ret = fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &total);

		// prepare data
		line[strlen(line) - 1] = '\0';
		span_length	= strspn(line, "0123456789");
		string_length	= strlen(line);

		// non-number char included in the input?
		if (strlen(line) == 2 && total == -1) {
			printf("Program exits.\n",
						line);
			return (0);
		} else if (span_length != string_length) {
			printf("Irregular input: %s\n",
						line);
		} else if (total > 100) {
			printf("Amount larger than "
					"1 dollar: %s\n", line);
		} else {
			quarter	= total / 25;
			nicol	= (total - quarter*25) / 10;
			dime	=
					(total - nicol*10 - quarter*25) / 5;
			penny	=
					(total - nicol*10 - quarter*25 - dime*5);

			// show
			printf("total=%d\n", total);
			printf("quarter=%d nicol=%d\n", quarter, nicol);
			printf("dime=%d penny=%d\n", dime, penny);
			//break;
		}//if (span_length != string_length)
	}//while (1)

/*	// convert
	quarter	= total / 25;
	nicol	= (total - quarter*25) / 10;
	dime	=
			(total - nicol*10 - quarter*25) / 5;
	penny	=
			(total - nicol*10 - quarter*25 - dime*5);

	// show
	printf("total=%d\n", total);
	printf("quarter=%d nicol=%d\n", quarter, nicol);
	printf("dime=%d penny=%d\n", dime, penny);
*/
	//return (0);
}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
