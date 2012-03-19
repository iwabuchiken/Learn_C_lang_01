/************************************`
 * transfer_time.c
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

// macros -----------------
#define CHARS_PER_SECOND 960

// global variables -----------------

// prototypes -----------------------
int get_file_size( void );

double get_transfer_time_seconds
( int file_size );

char*	format_seconds
( double transfer_time_seconds,
	char transfer_time_string[]);

// functions ------------------------
int get_file_size( void )
{
	/* variables		*/
	char	line[20];		/* line input	*/
	int		file_size;		/* file size input	*/

	/* processes		*/
	while (1) {
		printf("Input the file size\n");
		printf("\t('0' to quit) => ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &file_size);

		if (file_size == 0)
			exit(1);
		if (!isdigit(file_size)) {
//			printf("[LINE:%d]", __LINE__);
//			printf("file size = %d\n",
//						file_size);
			break;
		}
	}//while (1)

	return file_size;
}//int get_file_size( void )

double get_transfer_time_seconds
( int file_size )
{
	return (double)file_size /
				CHARS_PER_SECOND;
}//int	get_transfer_time_seconds

char*	format_seconds
( double transfer_time_seconds,
	char transfer_time_string[])
{
	char*	s;	/* working pointer	*/
	/* working variable for
	 * 	transfer_time_seconds */
	int		transfer_time_work;
	int		hours;		/* hours	*/
	int		minutes;	/* minutes	*/
	int		seconds;	/* seconds	*/

	/* processes
	 * 0. initialize the pointer 's'
	 * 0. convert double into integer
	 * 1. hours
	 * 2. minutes
	 * 3. generate a string
	 */
	/* 0. initialize the pointer 's'	*/
	s = transfer_time_string;
	/* convert into integer type		*/
	transfer_time_work =
			(int)transfer_time_seconds;
#ifdef D
    printf("[LINE:%d]", __LINE__);
    printf("transfer_time_work=%d\n",
    		transfer_time_work);
#endif
	/* hours		*/
	hours = transfer_time_work / (60*60);

	/* minutes		*/
	transfer_time_work -=
			hours * (60*60);
	minutes = transfer_time_work / 60;

	/* seconds		*/
	transfer_time_work -= minutes * 60;
	seconds = transfer_time_work;

	/* 3. generate a string	 */
	//sscanf(s, "%d hour %d minue(s) %d second(s)\0"
	sprintf(s, "%d hour %d minue(s) %d second(s)"
			, hours, minutes, seconds);


#ifdef D
    printf("[LINE:%d]", __LINE__);
    printf("transfer_time_work=%d\n",
    		transfer_time_work);
    printf("hours=%d\n", hours);
    printf("minutes=%d\n", minutes);
    printf("seconds=%d\n", seconds);
    printf("string=%s\n", s);
#endif

    return s;
}//char*	format_seconds

/**********************************
 * main()
 **********************************/
int main()
{
	/* variables		*/
	char	line[20];		/* line input	*/
	int		file_size;		/* file size input	*/
	double	transfer_time_seconds;		/* transfer time in second	*/
	//char*	transfer_time_string[30];	/* transfer time string		*/
	char	transfer_time_string[30];	/* transfer time string		*/
	char*	s;				/* return value of format_seconds()		*/

	/* input file size	*/
	file_size = get_file_size();

#ifdef D
	printf("[LINE:%d]", __LINE__);
	printf("file size = %d\n",
				file_size);
#endif

	/* calculate time
	 * 1. get seconds
	 * 2. convert to string
	 * 3. display
	 */

	/* 1. get seconds		*/
	transfer_time_seconds =
			get_transfer_time_seconds(
					file_size );

	/* 2. convert to string	*/
	s = format_seconds(transfer_time_seconds,
				transfer_time_string);

	/* 3. display			*/
	printf("string=%s\n", s);

#ifdef D
    printf("[LINE:%d]", __LINE__);
    printf("transfer_time_seconds=%f\n",
    		transfer_time_seconds);
#endif

	//	while (1) {
//		printf("Input the file size\n");
//		printf("\t('0' to quit) => ");
//		fgets(line, sizeof(line), stdin);
//		sscanf(line, "%d", &file_size);

//		if (file_size == 0)
//			exit(1);
//		if (!isdigit(file_size)) {
//			printf("[LINE:%d]", __LINE__);
//			printf("file size = %d\n",
//						file_size);
//			break;
//		}
//	}//while (1)

	return (0);

}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/

