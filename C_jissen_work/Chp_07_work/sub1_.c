/************************************`
 * sub9_exc_6-5_leap_year.c
 * Author: Iwabuchi Ken				*
 * Date: 20120213_072945
 * <Aim>
 * 	1. Leap year
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
int is_leap_year(int year);
void report_judgment(int year, int leap_year);

// functions ------------------------
int is_leap_year(int year)
{
	/* variables	*/
	int		div100;	/* residue of 100	*/
	int		div400;	/* residue of 400	*/
	int		div4;	/* residue of 4	*/
	int		leap_year = 0;	/* flag for leap year	*/

	/* prepare data	*/
	div100 = year % 100;
	div400 = year % 400;
	div4 = year % 4;

	//debug
/*	printf("[LINE:%d] ", __LINE__);
	printf("year=%d div100=%d div400=%d "
				"div4=%d\n", year, div100,
				div400, div4);
*/
	if (div4 == 0) {
		leap_year = 1;
		if (div100 == 0) {
			leap_year = 0;
		}
		if (div400 == 0) {
			leap_year = 1;
		}
	}//if (div4 == 0)

	return leap_year;
}//int is_leap_year(int year)

void report_judgment(int year, int leap_year)
{
	if (leap_year == 1) {
		printf("Year is: %d", year);
		printf("\t=> Leap year\n");
	} else {
		printf("Year is: %d", year);
		printf("\t=> Not a leap year\n");
	}//if (leap_year == 1)
}//void report_judgment(int leap_year)

/**********************************
 * main()
 **********************************/
int main()
{
	// variables
	int		year;	/* random year	*/
	int		leap_year;	/* flag for leap year	*/
//	int		div100;	/* residue of 100	*/
//	int		div400;	/* residue of 400	*/
//	int		div4;	/* residue of 4	*/
	int		n = 0;	/* counter	*/
	int		i;		/* index	*/
	int		num_of_leap_year = 0; /* number of leap yeas in one session	*/
	int		NUM = 12;	/* number of cycle	*/

	/* srand	*/
	srand((unsigned)time(NULL));

	//while (n < 10) {
	while (n < NUM) {
		// get a random year
		//srand((unsigned)time(NULL));
		year = rand() % 2200;

		// judge if leap year
		// dividable with 100, 4, not with 400
		leap_year = is_leap_year(year);

		/* count leap_year	*/
		if (leap_year == 1)
			num_of_leap_year += 1;
/*		div100 = year % 100;
		div400 = year % 400;
		div4 = year % 4;

		if (div4 == 0
				&& div100 != 0
				&& div400 == 0) {
			leap_year = 1;
		}
*/
		// report
		report_judgment(year, leap_year);
/*		if (leap_year == 1) {
			printf("Year is: %d\n", year);
			printf("\t=> Leap year\n");
		} else {
			printf("Year is: %d\n", year);
			printf("\t=> Not a leap year\n");
*/	/*	} else {
			printf("Year is: %d\n", year);
			printf("\t=> I can't judge\n");
		}//if (leap_year == 1)
*/
		// increment the counter
		n += 1;
	}//while (n < 10)

	/* show ratio of leap yeas	*/
	printf("\nRatio=%f\n",
			//((float)(n - 1) / num_of_leap_year));
			(num_of_leap_year / (float)(n - 1)));

	//test
//	year = 2004;
//	leap_year = is_leap_year(year);
//	report_judgment(year, leap_year);

	return (0);

}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
