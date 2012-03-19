/************************************`
 * sub10_exc_6-6_wage.c
 * Author: Iwabuchi Ken				*
 * Date: 20120213_072945
 * <Aim>
 * 	1. Calculate wages
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

// macros -----------------------
//#define WORK_DAYS 3
#define WORK_DAYS 5
// prototypes -----------------------
// functions -------------------------

// functions ------------------------
/**********************************
 * main()
 **********************************/
int main()
{
	/* variables	*/
	int		work_days = WORK_DAYS;	/* number of work days in a week	*/
	int		total_wage;			/* total wage		*/
	int		regular_wage;		/* regular wage		*/
	int		over_hour_wage;		/* over-hour wage	*/
	int		wage_per_hour = 800;	/* wage per hour	*/
	int		total_hours = 0;	/* total hours		*/
	int		regular_hours = 40;	/* regular hours in a day	*/
	float	increase = 1.5;		/* rate of after-hours	*/
	int		hours[WORK_DAYS];	/* work hours for each day	*/
	int		i;					/* index			*/
	char	line[10];			/* input work hours	*/

	/* input data	*/
	for (i = 0; i < work_days; i++) {
		printf("Input work hours for day %d: ",
				(i + 1));
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &hours[i]);
	}//for (i = 0; i < work_days; i++)

	/* get total hours	*/
	for (i = 0; i < work_days; i++) {
		total_hours += hours[i];
	}//for (i = 0; i < work_days; i++)

	/* calculate: regular wage	*/
	if (total_hours <= regular_hours) {
		regular_wage =
		//total_wage =
				total_hours * wage_per_hour;
		over_hour_wage = 0;
	} else {
		regular_wage =
		//total_wage =
				regular_hours * wage_per_hour;
		over_hour_wage =
		//total_wage +=
			(float)(total_hours - regular_hours)
			* (wage_per_hour * increase);
	}//if (total_hours <= regular_hours)
	total_wage =
			regular_wage + over_hour_wage;

	/* report total wage	*/
	printf("Total hours = %d\n", total_hours);
	printf("Regular wage = %d\n", regular_wage);
	printf("Over-hour wage = %d\n", over_hour_wage);
	printf("Total wage = %d\n", total_wage);

	return (0);

}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
