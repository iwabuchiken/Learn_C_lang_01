/************************************`
 * calculate_days.c
 * Author: Iwabuchi Ken				*
 * Date: 20120215_070015
 * <Aim>
 * 	1.
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 104
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

// global variables -----------------
enum	DAYS {
	DAYS_JANUARY=31, DAYS_FEBRUARY=28,
	//DAYS_MARCH=30, DAYS_APRIL=30,
	DAYS_MARCH=31, DAYS_APRIL=30,
	DAYS_MAY=31, DAYS_JUNE=30,
	DAYS_JULY=31, DAYS_AUGUST=31,
	DAYS_SEPTEMBER=30, DAYS_OCTOBER=31,
	DAYS_NOVEMBER=30, DAYS_DECEMBER=31,
} DAYS_LENGTH;

// prototypes -----------------------
int	input_yes_no( void );	/* yes => 1, no => 0	*/
int	calculate_days
	( int start_year, int start_month, int start_day,
		int end_year, int end_month, int end_day);
//int	get_date(int year, int month, int day);
int	get_date(int *year, int *month, int *day);
/* 仮引数はポインタ型にすることについて　=>　『ポインタ完全制覇』（前橋, p48）	*/

int	get_days(int month);

int	get_days_yeardiff_0_monthdiff_0
(int start_day, int end_day);

int	get_days_yeardiff_0_monthdiff_1
( int start_year, int start_month, int start_day,
int end_year, int end_month, int end_day);

int	get_days_yeardiff_0_monthdiff_morethan_1
( int start_year, int start_month, int start_day,
int end_year, int end_month, int end_day);

int	get_days_yeardiff_1_monthdiff_0
( int start_year, int start_month, int start_day,
int end_year, int end_month, int end_day);

int	get_days_yeardiff_morethan_1
( int start_year, int start_month, int start_day,
int end_year, int end_month, int end_day);

// functions ------------------------
int	get_days_yeardiff_0_monthdiff_morethan_1
( int start_year, int start_month, int start_day,
int end_year, int end_month, int end_day)
{
	/* variables
	 *
	 */
	int		total_days;	/* return value	*/
	/* day difference	*/
	int		day_difference	=
				end_day - start_day;

	int		i;	/* index	*/

	/* processes
	 * 1. Start month, end month
	 * 2. Days of months inbetween
	 */
	/* 1. Start month, end month	*/
	total_days =
		get_days_yeardiff_0_monthdiff_1
		( start_year, start_month, start_day,
		end_year, end_month, end_day);

	/* 2. Days of months inbetween	*/
	for (i = (start_month + 1);
			i < end_month; i++) {
		total_days += get_days(i);
	}

	return total_days;
}//int	get_days_yeardiff_0_monthdiff_morethan_1

int	get_days_yeardiff_0_monthdiff_1
( int start_year, int start_month, int start_day,
int end_year, int end_month, int end_day)
{
	/* variables
	 *
	 */
	int		total_days;	/* return value	*/
	/* day difference	*/
	int		day_difference	=
				end_day - start_day;

	/* processes	*/
	total_days =
		get_days(start_month) - (start_day - 1)
		//+ get_days(end_month) - (end_day - 1);
		//+ (end_day - 1);
		+ end_day;

	return total_days;
}//int	get_days_yeardiff_0_monthdiff_1

int	get_days_yeardiff_0_monthdiff_0
(int start_day, int end_day)
{
	/* variables	*/
	int		total_days;	/* return value	*/
	int		day_difference =	/* days inbetween	*/
			end_day - start_day;

	/* start_day later than end_day	*/
	if (day_difference < 0) {
		total_days = -1;
	/* start_day same as end_day	*/
	} else if (day_difference == 0) {
		total_days = 1;
	} else if (day_difference == 1) {
		total_days = 2;
	} else if (day_difference > 1) {
		total_days = (day_difference + 1);
	} else {
		total_days = -1;
	}

	return total_days;
}//int	get_days_yeardiff_0_monthdiff_0

/***********************************
 *	get_days()
 *
 * <Return>
 *	1	=> regular
 *	-1	=> error
 ***********************************/
int	get_days(int month)
{
	switch(month) {
		case 1:
			return DAYS_JANUARY;
		case 2:
			return DAYS_FEBRUARY;
		case 3:
			return DAYS_MARCH;
		case 4:
			return DAYS_APRIL;
		case 5:
			return DAYS_MAY;
		case 6:
			return DAYS_JUNE;
		case 7:
			return DAYS_JULY;
		case 8:
			return DAYS_AUGUST;
		case 9:
			return DAYS_SEPTEMBER;
		case 10:
			return DAYS_OCTOBER;
		case 11:
			return DAYS_NOVEMBER;
		case 12:
			return DAYS_DECEMBER;
		default:
			return -1;
	}//switch(month)
}//int	get_days(int month)

/***********************************
 * get_date()
 *
 * <Return>
 *	1	=> regular
 *	-1	=> error
 ***********************************/
//int	get_date(int year, int month, int day)
int	get_date(int *year, int *month, int *day)
{
	/* variables	*/
	char	line[30];		/* year month day	*/
	//int		result;			/* return value		*/
	int		return_of_sscanf;	/* return value of sscanf()	*/

	/* get input	*/
	fgets(line, sizeof(line), stdin);
	return_of_sscanf = sscanf(line,
		//"%d %d %d", &year, &month, &day);
		"%d %d %d", year, month, day);

	//debug
	printf("[LINE:%d]\n", __LINE__);
	printf("year=%d month=%d "
			//"day=%d\n", year, month, day);
			"day=%d\n", *year, *month, *day);

	if (return_of_sscanf == 3) {
		return 1;
	} else {
		return -1;
	}

	//printf("get_date()\n");

	//return (0);
}//int	get_date(int year, int month, int day)

int	input_yes_no( void )
{
	printf("get_date()\n");

	return (0);
}//int	input_yes_no( void )

int	calculate_days
	( int start_year, int start_month, int start_day,
		int end_year, int end_month, int end_day)
{
	int		year_difference		=
				end_year - start_year;
	int		month_difference	=
				end_month - start_month;
	int		day_difference		=
				end_day - start_day;
	int		total_days;		/* total days	*/

	/*
	 * algorythm
	 */

	/* start_year later than end_year	*/
	if (year_difference < 0) {
		total_days = -1;
	/* start_year same as end_year	*/
	} else if (year_difference == 0) {
		/* start_month later than end_month	*/
		if (month_difference < 0) {
			total_days = -1;
		/* start_month same as end_month	*/
		} else if (month_difference == 0) {
			total_days =
				get_days_yeardiff_0_monthdiff_0
				//(day_difference);
				(start_day, end_day);
//			/* start_day later than end_day	*/
//			if (day_difference < 0) {
//				total_days = -1;
//			/* start_day same as end_day	*/
//			} else if (day_difference == 0) {
//				total_days = 1;
//			} else if (day_difference == 1) {
//				total_days = 2;
//			} else if (day_difference > 1) {
//				total_days = (day_difference + 1);
//			} else {
//				total_days = -1;
//			}
		/* start_month 1 month earlier
		 * than end_month	*/
		} else if (month_difference == 1) {
			total_days =
				get_days_yeardiff_0_monthdiff_1
				( start_year, start_month,
					start_day, end_year,
					end_month, end_day);
//			if (day_difference < 0) {
//				total_days =
//					get_days(start_month) - (start_day - 1)
//					+ get_days(end_month) - (end_day - 1);

//			} else if (day_difference == 0) {					total_days = -1;
//				total_days = -1;
//			} else if (day_difference == 1) {					total_days = -1;
//				total_days = -1;
//			} else if (day_difference > 1) {
//				total_days = -1;
//			} else {
//				total_days = -1;
//			}
		} else if (month_difference > 1) {
			total_days =
				get_days_yeardiff_0_monthdiff_morethan_1
					( start_year, start_month, start_day,
					end_year, end_month, end_day);
			//total_days = -1;
		}

	/* start_year 1 year earlier
	 * than end_year	*/
	} else if (year_difference == 1) {
		printf("[LINE:%d]\n", __LINE__);
		total_days =
			get_days_yeardiff_1_monthdiff_0
				( start_year, start_month, start_day,
				end_year, end_month, end_day);
//		if (month_difference < 0) {
//			total_days = -1;
//		} else if (month_difference == 0) {
//			total_days = -1;
//		} else if (month_difference == 1) {
//			total_days = -1;
//		} else if (month_difference > 1) {
//			total_days = -1;
//		} else {
//			total_days = -1;
//		}
	/* start_year more than 1 year earlier
	 * than end_year	*/
	} else if (year_difference > 1) {
		total_days =
			get_days_yeardiff_morethan_1
			( start_year, start_month, start_day,
			end_year, end_month, end_day);
//		if (month_difference < 0) {
//			total_days = -1;
//		} else if (month_difference == 0) {
//			total_days = -1;
//		} else if (month_difference == 1) {
//			total_days = -1;
//		} else if (month_difference > 1) {
//			total_days = -1;
//		} else {
//			total_days = -1;
//		}
	} else {
		total_days = -1;
	}

	//printf("get_date()\n");

	return total_days;
}//int	calculate_days

int	get_days_yeardiff_1_monthdiff_0
( int start_year, int start_month, int start_day,
int end_year, int end_month, int end_day)
{
	/* variables
	 *
	 */
	int		total_days = 0;	/* return value	*/
	int		i = 1;	/* index: starts from 1	*/
	//debug
	int		year_1;	/* days of year 1		*/
	int		year_2;	/* days of year 2		*/

	/* processes
	 * 1. Start year
	 * 2. End year
	 */
	/* 1. Start year
	 * (1) This month
	 * (2) From the next month till the end
	 * 		of the year
	 */
	/* (1) This month	*/
	total_days +=
		get_days(start_month) - start_day + 1;

	/* (2) From the next month till the end
	 *	 	of the year
	 */
	//while (start_month + i) {
	while (start_month + i <= 12) {
		total_days +=
				get_days(start_month + i);
		i ++;
	}//while (start_month + i)

	//debug
	year_1 = total_days;
	printf("[LINE:%d]", __LINE__);
	printf("Year 1: %d\n", year_1);


	/* 2. End year
	 * (1) End month
	 * (2) From the next month till the end
	 * 		of the year
	 */
	/* (1) End month	*/
	total_days += end_day;

	/* (2) From the year top till
	 * 		the end of the previous month
	 */
	for (i = 1; i < end_month; i++) {
		total_days += get_days(i);
	}

	//debug
	year_2 = total_days - year_1;
	printf("[LINE:%d]", __LINE__);
	printf("Year 2: %d\n", year_2);

	return total_days;
}//int	get_days_yeardiff_1_monthdiff_0

int	get_days_yeardiff_morethan_1
( int start_year, int start_month, int start_day,
int end_year, int end_month, int end_day)
{
	/* variables
	 *
	 */
	int		total_days = 0;	/* return value	*/
	int		i = 1;	/* index: starts from 1	*/
	//debug
	int		year_1;	/* days of year 1		*/
	int		year_2;	/* days of year 2		*/

	/* processes
	 * 1. Start year
	 * 2. End year
	 * 3. Years inbetween
	 */

	/* 1. Start year
	 * (1) This month
	 * (2) From the next month till the end
	 * 		of the year
	 */
	/* (1) This month	*/
	total_days +=
		get_days(start_month) - start_day + 1;

	/* (2) From the next month till the end
	 *	 	of the year
	 */
	//while (start_month + i) {
	while (start_month + i <= 12) {
		total_days +=
				get_days(start_month + i);
		i ++;
	}//while (start_month + i)

	//debug
	year_1 = total_days;
	printf("[LINE:%d]", __LINE__);
	printf("Year 1: %d\n", year_1);


	/* 2. End year
	 * (1) End month
	 * (2) From the next month till the end
	 * 		of the year
	 */
	/* (1) End month	*/
	total_days += end_day;

	/* (2) From the year top till
	 * 		the end of the previous month
	 */
	for (i = 1; i < end_month; i++) {
		total_days += get_days(i);
	}

	//debug
	year_2 = total_days - year_1;
	printf("[LINE:%d]", __LINE__);
	printf("Year 2: %d\n", year_2);

	/* 3. Years inbetween	 */
	if (end_year - start_year > 1) {
		total_days +=
			365 * (end_year - start_year - 1);
	}

	return total_days;
}//int	get_days_yeardiff_morethan_1

/**********************************
 * main()
 **********************************/
int main()
{
	/* variables	*/
	char	line[20];		/* line input	*/
	int		ans;			/* QA input				*/
	char	ask_if_continue[10];	/* line input for while loop	*/
	int		continue_answer;		/* answer for while loop		*/

	int		start_year;		/* start year	*/
	int		start_month;	/* start month	*/
	int		start_day;		/* start day	*/

	int		end_year;		/* end year		*/
	int		end_month;		/* end month	*/
	int		end_day;		/* end day		*/

	int		total_days;		/* total days	*/
	/*
	 * return value of void function
	 */
	int		result;

	/* processes *///---------------------
	while (1) {
		/* get start date	*/
		printf("Enter start date (format:yyyy m d)\n");
		printf("\t=> ");
		result = get_date(
				//start_year, start_month, start_day);
				&start_year, &start_month,
				&start_day);
		/* get end date	*/
		printf("Enter end date (format:yyyy m d)\n");
		printf("\t=> ");
		result = get_date(
				//end_year, end_month, end_day);
				&end_year, &end_month,
				&end_day);

		/* get days		*/
		total_days =
			calculate_days(start_year, start_month, start_day,
				 end_year, end_month, end_day);

		//debug
		printf("[LINE:%d]\n", __LINE__);
		printf("total_days=%d\n", total_days);

//		//debug
//		printf("[LINE:%d]\n", __LINE__);
//		printf("result=%d\n", result);
//		printf("end_year=%d end_month=%d "
//				"end_day=%d\n",
//				end_year, end_month,
//				end_day);
//		printf("start_year=%d start_month=%d "
//				"start_day=%d\n",
//				start_year, start_month,
//				start_day);
//		//*debug

//		//debug: test get_days()
//		printf("start_month days=%d\n",
//				get_days(start_month));
//		//*debug

		/* continue?	*/
		printf("\nContinue?(1: Yes / 2: No)\n");
		printf("\t=> ");
		fgets(ask_if_continue,
			sizeof(ask_if_continue),
			stdin);
		sscanf(ask_if_continue,
			"%d", &continue_answer);
		if (continue_answer == 1)
			continue;
		else
			break;

		//break;
	}//while (1)

	return (0);

}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/

