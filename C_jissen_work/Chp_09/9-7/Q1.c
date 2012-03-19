/************************************`
 * <Basics>
 *	1. File: Q1.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120312_225343
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
int count_word_num(char text[]);

// functions ============================
/******************************************
 * count_word_num -- count number of words in the given text
 * 
 * <Parameters>
 *      words  - target text
 *        - 
 * <Return value>
 *      number of words : int
 * <Notices>
 *  1. word is defined as: if a space char comes after 
 *      a string, the string is counted as one word
 *      => ex: "beauty comes from within" ==> the space char counts as 3
 *              hence, the number is 3 + 1, hence 4.
 ******************************************/
int count_word_num(char text[])
{
    /* vars         */
    int         i;      /* index for text      */
    int         count   = 0;  /* number of words 
    
    /* process
     */
    /* search the text     */
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            count ++;
        }//if (text[i] == " ")
    }//for (i = 0; i < ; i++)
    /* at the last, increment count     */
    count ++;
    
    /* return           */
    return count;
    
}// int count_word_num(char text[])

int main(int argc, char* argv[])
{
	/* variables	*/
    
/*
    char        text[]  = 
            "The birth control movement";
*/
/*
            " in the United States was "
            "a social reform campaign from 1914 to the 1940s that "
            "increased the availability of contraception through "
            "education and legalization";
*/
    int         num;        /* number of words      */
    char        text[100];
    
    /* run the test function        */
    if (argc > 1 && argv[1] == "-test") {
        
    } else {//if (argc > 1 && argv[1] == "-test")
    }//if (argc > 1 && argv[1] == "-test")
    
    if (argc > 1) {
        strcpy(text, argv[1]);
    } else {//if (argc > 1)
        strcpy(text, "The birth control movement");
    }//if (argc > 1)
    
    /* count words  */
    num = count_word_num(text);
    
    /* show number  */
    printf("text=%s\n", text);
    printf("num=%d\n", num);
    
    //printf("argc=%d\n", argc);
    
	return (0);
}//int main(int argc, char* argv[])

extern int test_count_word_num(void) {
    /* open the file        */
    return 1;
}//extern int test_count_word_num(void)


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
