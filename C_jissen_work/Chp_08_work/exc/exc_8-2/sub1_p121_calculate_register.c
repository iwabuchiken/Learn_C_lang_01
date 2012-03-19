/************************************`
 * <Basics>
 *	1. File: sub1_p121_calculate_register.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120218_062001
 *	4. Dependencies:
 *		1)
 * <Aim>
 * 	1.
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 112
 * <Related>
 * 	1.
 * <Others>
 * <Description of the program>
 * 	1. Input the registor values
 * 		=> up to 100
 * 	2. Calculate the total registor value
 * 	3. display the value
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

#ifdef MYLIB1
#ifndef INCLUDE_MYLIB_1_H
#define INCLUDE_MYLIB_1_H
#include "mylib1.h"
#endif
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

#ifdef MYLIB1
#ifndef INCLUDE_MYLIB_1_H
#define INCLUDE_MYLIB_1_H
#include "mylib1.h"
#endif
#endif

// macros ============================
#define MAX_NUMBER	100

// global vars ============================
/*
int	registor_value[MAX_NUMBER];
*/

// prototypes ============================
void enter_value(int value, int index);

// functions ============================
void enter_value(int value, int index)
{
	/* message		*/
	printf("Input is %d\n", value);
	printf("\t=> a digit\n");

	/* registor the value	*/
/*
	registor_value[index] = value;
*/

}//void enter_value(int value, int index)

/*  is_digit()
 * <return>
 *  1. 1    => the string is a digit
 *  2. 0    => is not
 */
int is_digit(char string[])
{
    /* vars     */
    int     length; /* length of the given string   */
    int     span;   /* span of the number chars     */
    
    /* processes    */
    length  = strlen(string);
    span    = strspn(string, "0123456789");
    
    /* judge and return */
    if (length == span) {
        return 1;
    } else {//if (length == span)
        return 0;
    }//if (length == span)
    
}//int is_digit(char string[])



int main(int argc, char* argv[])
{
	/* variables	*/
	char	line[5];	/* input line	*/
        int     register_value[5];
	int		value;		/* value entered from the command line	*/
	int		index;		/* index for registor_value[]	*/
        double          sum;            /* register value               */

	/* initialize	*/
	index   = 0;
        sum     = 0.0;

	/* processes
	 * 1. input data
	 * 2. process
	 * 3. show result
	 */

	/* 1. input data	*/
	while (1) {
		/* prompt		*/
		printf("Enter the registor value\n");
		printf("\t('0' to quit) => ");

		/* enter		*/
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &value);
		line[strlen(line) - 1] = '\0';

		/* judge if the input is a digit
		 * 1. if yes => enter_value()
		 * 2. if no => loop continues
		 */

		//if (is_digit(value)) {
		//if (isdigit(atoi(line))) {
		if (is_digit(line)) {
			/* if the value is 0	*/
			if (value == 0) {
				break;
			} else {
/*
				register_value[index] = atoi(line);
*/
                            sum += (double)1 / atoi(line);
/*
                            ++index;
*/
			}//if (value == 0)

//			/* 1. if yes => enter_value()	*/
//			printf("Input is %d\n", value);
//			printf("\t=> a digit\n");
			//break;
		} else {
			/* 2. if no => loop continues	*/
			printf("Seems the input is not a digit: %s\n", line);
			printf("Please enter the value again.\n");
			continue;
		}//if (is_digit(line))


	}//while (1)

        /* show sum     */
        printf("sum=%f\n", sum);
        
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
