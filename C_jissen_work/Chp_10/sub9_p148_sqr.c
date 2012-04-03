/************************************`
 * <Basics>
 *	1. File: sub9_p148_sqr.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120326_095101
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

// macros ============================
#define SQR(x) ((x) * (x))

// global vars ============================
// prototypes ============================
// functions ============================
int main(int argc, char* argv[])
{
    /* vars         */
    int     counter;    /* loop     */
    
    counter = 0;
    
    while (counter < 5) {
        printf("x %d square %d\n", counter, SQR(++counter));

    }//while (counter < 5)

    
    return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
