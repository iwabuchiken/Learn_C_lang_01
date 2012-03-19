/************************************`
 * <Basics>
 *	1. File: sub3_p134_sum_of_array.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120311_140117
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
int sum_of_array(int first, int last, int array[]);

// functions ============================

int sum_of_array(int first, int last, int array[])
{
    if (first == last) {
        return (array[first]);
    } else {//if (first == last)
        return (array[first] + sum_of_array(first + 1, last, array));
    }//if (first == last)
}//int sum_of_array(int first, int last, int array[])

int main(int argc, char* argv[])
{
    int     array[] = {4,5,6,2,3,4,5,1};    /* target array     */
    int     i;                              /* index            */
    int     size;                           /* size of the array    */
    
    /* get size                 */
    size    = sizeof(array) / sizeof(array[0]);
    /* show the elements        */
    
    //for (i = 0; i < (array / array[0]); i++) {
    for (i = 0; i < size; i++) {
        printf("%2d", array[i]);
    }//for (i = 0; i < (array / array[0]); i++)
    printf(" (size=%d)\n", size);
    printf("\n");
    
    //printf("sum=%d\n", sum_of_array(0, 7, array));
    printf("sum=%d\n", sum_of_array(0, (size-1), array));
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
