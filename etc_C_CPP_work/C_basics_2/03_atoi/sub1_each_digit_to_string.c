/************************************`
 * <Basics>
 *	1. File: sub1_each_digit_to_string.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120311_083148
 *	4. Dependencies:
 *		1)
 * <Aim>
 * 	1. input a number string ( 2 digit number )
 *  2. get the second digit as an integer
 * <Usage>
 *	1. Execute the program
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

// global vars ============================
char    words[][15] = {
    /* 0 - 10 => 0 - 10   */
    "zero",
    "one", "two", "three", "four", "five",
    "six", "seven", "eight", "nine", "ten",
    /* 11 - 19 => 11 - 19  */
    "eleven", "twelve", "thirteen", "fourteen", "fifteen",
    "sixteen", "seventeen", "eighteen", "nineteen",
    /* 20 - 90 => 20 - 27 */
    "twenty", "thirty", "fourty", "fifty",
    "sixty", "seventy", "eighty", "ninety",
    /* 100 => 28        */
    "hundred"
};                  /* number words         */
enum NUMBERS {
    /* 0 - 10       */
    ZERO,
    ONE, TWO, THREE, FOUR, FIVE,
    SIX, SEVEN, EIGHT, NINE, TEN,
    /* 11 - 19      */
    ELEVEN, TWELVE, THIRTEEN, FOURTEEN, FIFTEEN,
    SIXTEEN, SEVENTEEN, EIGHTEEN, NINETEEN,
    /* 20 - 90      */
    TWENTY, THIRTY, FORTY, FIFTY,
    SIXTY, SEVENTY, EIGHTY, NINETY,
    /* 100          */
    HUNDRED    
} NUMBER;

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
    char    line[10];   /* entered number from stdin    */    
    int     i;         /* index                 */

    /* processes
     * 
     */
    /* get the input    */
    while (1) {
        printf("Input a number: ");
        fgets(line, sizeof(line), stdin);
        line[strlen(line) - 1] = '\0';
        if (is_digit(line)) {
            break;
        } else {//if (is_digit(line))
            printf("Input is not a number: %s\n", line);
        }//if (is_digit(line))
    }//while (1)

    /* convert to words     */
    //printf("%d\n", atoi(line[0]));
    printf("%d\n", line[0] - '0');
    
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
