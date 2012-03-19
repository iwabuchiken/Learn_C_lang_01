/************************************`
 * <Basics>
 *	1. File: BARsub1_p121_vowels_consonants.c
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

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
    char      vowels[]      = "aiueo";
    char      consonants[]   = "abcdfghjklmnpqrstvwxyz";
    char      input[5];     /* enter the line   */
    int       i;            /* index            */
    int       flag  = 0;         /* flag for the input
                                  * 0   => unknown
                                  * 1   => vowel
                                  * 2   => consonant
                                  * /
    
    /* enter the char   */
    while (1) {
        printf("Enter a char: ");
        fgets(input, sizeof(input), stdin);
        input[strlen(input) - 1] = '\0';
        if (strlen(input) != 1) {
            printf("Input one char. Your input: %s\n", input);
            continue;
        } else {//if (strlen(input) != 1)
            break;
        }//if (strlen(input) != 1)
    }//while (1)

    /* inspect the char: vowel?     */
    for (i = 0; i < strlen(vowels); i++) {
        if (tolower(input[0]) == vowels[i]) {
            flag    = 1;
            break;
/*
            printf("input %c is a vowel\n", input[0]);
            exit(0);
*/
        }//if (input[0])
    }//for (i = 0; i < strlen(vowels); i++)
    
    /* inspect the char: consonants?     */
    for (i = 0; i < strlen(consonants); i++) {
        if (tolower(input[0]) == consonants[i]) {
            flag    = 2;
            break;
/*
            printf("input %c is a consonant\n", input[0]);
            exit(0);
*/
        }//if (input[0])
    }//for (i = 0; i < strlen(vowels); i++)
    
    /* show result      */
    if (flag == 1) {
        printf("input %c is a vowel\n", input[0]);
    } else if (flag == 2) {//if (flag == 1)
        printf("input %c is a consonant\n", input[0]);
    } else {
        printf("Unknown char: %c\n", input[0]);
    }//if (flag == 1)
    
	/* processes
	 * 1.
	 */
        
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
