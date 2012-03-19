/************************************`
 * converter.c
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

// prototypes -----------------------
// functions -------------------------
double mile2meter(double value);
double gallon2litter(double value);
int		handle_input_choose( void );
double	input_value( const char* message );

// global variables -----------------
/*
 * rate for mile-meter conversion
 * http://en.wikipedia.org/wiki/Yard#Conversions
 */
double	mile_to_meter_rate = 0.9144;
/*
 * rate for US gallon to litter
 * http://ja.wikipedia.org/wiki/%E3%82%AC%E3%83%AD%E3%83%B3
 */
double	gallon_to_litter = 3.785;

// functions ------------------------
double	input_value( const char* message )
{
	//double	mile_gallon_value;
	int		mile_gallon_value;
	char	line[20];

	printf("%s: ", message);
	fgets(line, sizeof(line), stdin);
	//sscanf(line, "%f", &mile_gallon_value);
	sscanf(line, "%d", &mile_gallon_value);

	//debug
//	printf("[LINE:%d]", __LINE__);
//	//printf("input=%f\n(%%s=%s)",
//	printf("input=%d\n(%%s=%s)",
//			mile_gallon_value, line);

	//return mile_gallon_value;
	return (double)mile_gallon_value;
}//double	input_mile( void )

/*
 * handle_input_choose()
 * <Return>
 * 	1.
 */
int	handle_input_choose( void )
{
	char	line[20];	/* line input	*/
	int		ans;		/* QA input		*/

	while (1) {
		/* scan the input	*/
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &ans);

		if		(ans == 1) return 1;
		else if	(ans == 2) return 2;
		else if	(ans == 0) return 0;
		else {
			printf(
				"Irregular input: %d", ans);
			continue;
		}//if
	}//while (1)

}//int		handle_input_choose( void )

double mile2meter(double value)
{
	double	tmp;	/* temporary variable for mile	*/

	/* convert to mile	 */
	tmp = value * mile_to_meter_rate;

	return tmp;

}//double mile2meter(double value)

double gallon2litter(double value)
{
	double	tmp;	/* temporary variable for mile	*/

	/* convert to mile	 */
	tmp = value * gallon_to_litter;

	return tmp;
}//double gallon2litter(double value)

/**********************************
 * main()
 **********************************/
int main()
{
	/* variables	*/
	char	line[20];		/* line input			*/
	double	meter_litter_value;	/* meter-scale value	*/
	double	mile_pound_value;	/* mile-pound-scale value	*/
	int		ans;			/* QA input				*/

	/* conversion	*/
	while (1) {
		/* choose the genre	*/
		/* 1. prompt		*/
		printf("Choose genre\n");
		printf("1: Miles to meters\n"
				"2: Gallons to litters\n"
				"0: Quit\n");
		printf("\t=> ");

		/* 2. scan the input	*/
		ans = handle_input_choose();

		/* do the rooting		*/
		if (ans == 0)
			//exit(0);
			break;
		else if (ans == 1) {
			mile_pound_value =
				input_value("Input mile");
			meter_litter_value =
				mile2meter(mile_pound_value);
			/* show	*/
			printf("mile=%f => meter=%f\n",
					mile_pound_value, meter_litter_value);
		} else if (ans == 2) {
			mile_pound_value =
				input_value("Input gallon");
			meter_litter_value =
				gallon2litter(mile_pound_value);
			/* show	*/
			printf("gallon=%f => litter=%f\n",
					mile_pound_value, meter_litter_value);
		}//if (ans == 0)
	}//while (1)

	return (0);

}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/

