/************************************`
 * <Basics>
 *	1. File: sub2_p129_len.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120310_214838
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

/******************************************
 * length -- calculate the length of the given string
 * 
 * <Parameters>
 *      string  - the string for calculation
 *  
 * <Return value>
 *      length of the string : int
 * <Notices>
 *      
 ******************************************/
int length(char string[]) {
    int     index;      /* index for the string     */
    
    /* loop         */
    for (index = 0; string[index]; index++)
//   for (index = 0; string[index]; index++) {
//       /* do nothing   */
//   }//for (index = 0; index < ; index++)
    
    return (index);
}//int length(char string[])


int main(int argc, char* argv[])
{
    char    line[100];      /* user input   */
    int     i;              /* show ascii code of each char in the line */
    while (1) {
        printf("Enter line: ");
        fgets(line, sizeof(line), stdin);
        
        printf("Length (newline included) is: %d\n", length(line));
        
        for (i = 0; line[i] != '\0'; i++) {
            printf("line[%d]=%d\n", i, line[i]);
        }//for (i = 0; i < ; i++)
        printf("line[%d]=%d\n", i, line[i]);

    }//while (1)

	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
