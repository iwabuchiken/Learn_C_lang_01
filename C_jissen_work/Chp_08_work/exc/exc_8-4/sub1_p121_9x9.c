/************************************`
 * <Basics>
 *	1. File: sub1_p121_9x9.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120310_090639
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
/*
int	registor_value[MAX_NUMBER];
*/

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
    int     i, j;       /* index for 'for' loopts   */
    int     k;          /* index for separators     */
    const int   BAR = 10;    /* max number               */
    
	/* initialize	*/
    
	/* processes
	 * 1.
	 */

	/* for loop	*/
    /* label for row    */
    printf(" ");
    for (i = 1; i < BAR; i++) {
        printf("%3d", i);
    }//for (i = 1; i < BAR; i++)
    printf("\n");
    
    /* separator        */
    for (k = 1; k < BAR * 3; k++) {
        printf("-");
    }//for (k = 1; k < BAR; k++)
    printf("\n");
    
    /* show numbers     */
    for (i = 1; i < BAR; i++) {
        printf("%d", i);
        for (j = 1; j < BAR; j++) {
            printf("%3d", (i * j));
        }//for (j = 1; j < BAR; j++)
        printf("\n");
        /* insert a separator   */
        if ((i % 2) == 0) { /* if i is a even number    */
            for (k = 1; k < BAR * 3; k++) {
                printf("-");
            }//for (k = 1; k < BAR; k++)
            printf("\n");
        }//if ((i % 2))
    }//for (i = 1; i < BAR; i++)
    printf("\n");
    
    /* show average     */
        
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
