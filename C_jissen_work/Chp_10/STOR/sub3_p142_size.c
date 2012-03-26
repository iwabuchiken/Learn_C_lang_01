/************************************`
 * <Basics>
 *	1. File: sub3_p142_size.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120325_233708
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
#define SIZE    10;
#define FUDGE   SIZE -2;

// global vars ============================
// prototypes ============================
// functions ============================
int main(int argc, char* argv[])
{
	/* variables	*/
    int     size;
    
    size = FUDGE;
    
    printf("Size is %d\n", size);
    
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
