/************************************`
 * <Basics>
 *	1. File: sub4_p142_die.c
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

#ifndef INCLUDE_STDLIB_H
#define INCLUDE_STDLIB_H
#include <stdlib.h>
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
#define DIE \
    fprintf(stderr, "Fatal Error: Abort\n");exit(8);
// global vars ============================
// prototypes ============================
// functions ============================
int main(int argc, char* argv[])
{
	/* variables	*/
    int     value;
    
    value = 1;
    
/*
    if (value < 0) {
        DIE
    }
*/
    if (value < 0)
        DIE
        
    //if (value < 0)
    
    printf("We did not die\n");
            
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
