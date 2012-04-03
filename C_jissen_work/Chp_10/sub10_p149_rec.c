/************************************`
 * <Basics>
 *	1. File: sub10_p149_rec.c
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
#define RECIPROCAL (number) (1.0 / (number))

// global vars ============================
// prototypes ============================
// functions ============================
int main(int argc, char* argv[])
{
    /* vars         */
    float     counter;    /* loop     */

    for (counter = 1.0; counter < 10.0; counter += 1.0) {
        printf("1/%f=%f\n", counter, RECIPROCAL(counter));
    }//for (counter = 1.0; counter < 10.0; counter++)
    
    return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
