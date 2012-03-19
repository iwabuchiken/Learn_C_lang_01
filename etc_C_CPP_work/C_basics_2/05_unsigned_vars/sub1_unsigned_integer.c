/************************************`
 * <Basics>
 *	1. File: sub1_unsigned_integer.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120318_113319
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

#include <limits.h>

// macros ============================

// global vars ============================

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
    unsigned int    n;
    int             i;  /* index        */
    
    n = -100;
    
    printf("n=%d\n", n);
    
    /* int max      */
    printf("INT_MAX=%d\n", INT_MAX);
    printf("INT_MAX+1=%d\n", INT_MAX+1);
    printf("UINT_MAX=%d\n", UINT_MAX);
    printf("UINT_MAX+1=%d\n", UINT_MAX+1);
    
    /* show INT_MAX         */
    for (i = 0; i < 10; i++) {
        printf("INT_MAX+%d=%d\n", i, (INT_MAX+i));
    }//for (i = 0; i < 10; i++)
    
    /* show UINT_MAX         */
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("UINT_MAX+%d=%d\n", i, (UINT_MAX+i));
    }//for (i = 0; i < 10; i++)
    
    for (i = 0; i < 10; i++) {
        printf("(unsigned int)(UINT_MAX+(INT_MAX/2) + %d)=%d\n",
                    i, (unsigned int)(UINT_MAX+(INT_MAX/2) + i));
    }
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
