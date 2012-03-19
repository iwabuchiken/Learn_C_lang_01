/************************************`
 * <Basics>
 *	1. File: sub1_p121_number2words.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120310_200540
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

// global vars ============================

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
    char    line[10];   /* entered number from stdin    */
    char    words[][8] = {
                "zero",
                "one", "two", "three",
                "four", "five", "six",
                "seven", "eight", "nine",
                "ten"
    };                  /* number words         */
    int     i;         /* index                 */
    //char    num[] = "123";  /* number string    */
    
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
    for (i = 0; i < strlen(line); i++) {
        //printf("%s ", words[line[i] - '0' - 1]);
        printf("%s ", words[line[i] - '0']);
    }//for (i = 0; i < strlen(num); i++)
    printf("\n");
    
/*
    for (i = 0; i < strlen(num); i++) {
        printf("num[%d]: %%c=%c %%d=%d relative=%d\n",
                i, num[i], num[i], (num[i] - '0'));
    }//for (i = 0; i < strlen(num); i++)
*/
    
    /* number to word   */
/*
    for (i = 0; i < strlen(num); i++) {
        printf("num[%d]: %%c=%c %%d=%d relative=%d word=%s\n",
                i, num[i], num[i], (num[i] - '0'), words[(num[i] - '0') - 1]);
    }//for (i = 0; i < strlen(num); i++)
*/
    
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
