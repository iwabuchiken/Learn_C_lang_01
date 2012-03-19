/************************************`
 * <Basics>
 *	1. File: sub2_const_pointer_to_function.c
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

// macros ============================

// global vars ============================

// prototypes ============================

// functions ============================

void func1(const int *p) {
    /* vars         */
    int     i;      /* index        */
    
    /* show         */
    printf("func1: starts\n");
    for (i = 0; i < 3; i++) {
            printf("(p+%d)=%d\n", i, *(p+i));
    }//for (i = 0; i < 3; i++)
    
    /* change the value     */
    //*(p+1) = 100;
    //=> const オブジェクトは変更できない(関数 func1 )
    
    printf("func1: ends\n");
}//void func1(const int *p)


int main(int argc, char* argv[])
{
	/* variables	*/
    //char    a[3]    = {1,2,3};
    int     a[3]    = {1,2,3};
    int     b[3]    = {4,5,6};
    const   int *p  = a;        /* constant pointer */
    int     i;                  /* index        */
    
    /* input data to const pointer  */
    //*p = 3;
    printf("*p=%d\n", *p);
    
/*
    for (i = 0; i < 3; i++) {
        printf("(p+%d)=%d\n", i, *(p+i));
    }//for (i = 0; i < 3; i++)
*/
    
    /* change the reference     */
    p = b;
    
    /* show     */
    printf("\n");
    func1(p);
    
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
