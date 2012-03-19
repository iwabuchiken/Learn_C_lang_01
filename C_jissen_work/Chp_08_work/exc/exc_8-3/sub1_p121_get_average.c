/************************************`
 * <Basics>
 *	1. File: sub1_p121_get_average.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120218_062001
 *	4. Dependencies:
 *		1)
 * <Aim>
 * 	1.
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1. 
 * <Related>
 * 	1.
 * <Others>
 * <Description of the program>
 * 	1. 
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDLIB_H
#define INCLUDE_STDIO_H /* exit() */
#include <stdlib.h>
#endif

#ifndef INCLUDE_STRING_H
#define INCLUDE_STRING_H
#include <string.h>
#endif
#ifndef INCLUDE_TIME_H
#define INCLUDE_TIME_H
#include <time.h>
#endif

#ifndef INCLUDE_CTYPE_H
#define INCLUDE_CTYPE_H
#include <ctype.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

/*
#include "mylib.h"
*/
#ifdef MYLIB
#ifndef INCLUDE_MYLIB_1_H
#define INCLUDE_MYLIB_1_H
#include "mylib.h"
#endif
#endif

// macros ============================
#define MAX_NUMBER	100

// global vars ============================
/*
int	registor_value[MAX_NUMBER];
*/

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
	char	line[5];	/* input line	*/
	int		count;		/* number of numbers entered	*/
    double  average;    /* average      */

	/* initialize	*/
    average     = 0.0;
    count   = 0;
    
	/* processes
	 * 1. input data
	 * 2. process
	 * 3. show result
	 */

	/* 1. input data	*/
	while (1) {
		/* prompt		*/
		printf("Enter the value\n");
		printf("\t(0: quit) => ");

		/* enter		*/
		fgets(line, sizeof(line), stdin);
		//sscanf(line, "%d", &value);
		line[strlen(line) - 1] = '\0';

		/* judge if the input is a digit
		 * 1. if yes => enter_value()
		 * 2. if no => loop continues
		 */

		if (is_digit(line)) {
			/* if the value is 0	*/
			if (atoi(line) == 0) {
				break;
			} else {
                count ++;
                //average += (average + (double)atoi(line)) / (double)count;
                //average += (average + (double)atoi(line)) / count;
                /* before the operation */
/*
                printf("[LINE:%d] ", __LINE__);
                printf("average=%f count=%d atoi(line)=%d"
                        " (average + (double)atoi(line))=%f\n",
                            average, count, atoi(line), 
                            (average + (double)atoi(line)));
                //average += (average + (double)atoi(line)) / count;
*/
                //average = (average * count + (double)atoi(line)) / count;
                average = (average * (count-1) + (double)atoi(line)) / count;
                
                /* after        */
                printf("[LINE:%d] ", __LINE__);
                printf("average=%f count=%d atoi(line)=%d"
                        " (average + (double)atoi(line))=%f\n",
                            average, count, atoi(line), 
                            (average + (double)atoi(line)));
                //debug
/*
                printf("\n");
                printf("(%f + %f) / %d = %f\n", 6.0, 4.0, 2, (6.0+4.0) / 2);
*/
                
			}//if (value == 0)
		} else {
			/* 2. if no => loop continues	*/
			printf("Seems the input is not a digit: %s\n", line);
			printf("Please enter the value again.\n");
			continue;
		}//if (is_digit(line))


	}//while (1)

        /* show average     */
        printf("average=%f\n", average);
        
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
