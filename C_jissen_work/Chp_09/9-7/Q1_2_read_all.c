/************************************`
 * <Basics>
 *	1. File: Q1_2_read_all.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120313_093935
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

/******************************************
 * count_word_num2 -- count number of words in the given text
 * 
 * <Parameters>
 *      text:char*  - target text
 *        - 
 * <Return value>
 *      number of words : int
 * <Notices>
 *  1. word is defined as: if a space char comes after 
 *      a string, the string is counted as one word
 *      => ex: "beauty comes from within" ==> the space char counts as 3
 *              hence, the number is 3 + 1, hence 4.
 ******************************************/
int count_word_num2(char* content)
{
    /* vars         */
    //int         i;      /* index for text      */
    int         count   = 0;  /* number of words 
    
    /* process
     */
    /* search the text     */
    for (; *content != '\0'; content++) {
        if (*content == ' ') {
            count ++;
        } else {//if (*content == ' ')
        }//if (*content == ' ')
    }//for ( = 0;  < size; ++)
    
    /* at the last, increment count     */
    count ++;
    
    /* return           */
    return count;
    
}//int count_word_num2(char* content)

int main(int argc, char* argv[])
{
	/* variables	*/
    FILE        *fp;    /* file     */
    char*       content;    /* content of the file  */
    char        file_name[] = "q1-2.dat";   /* file for text    */
    int         word_count; /* number of words      */
    
    /* open the file        */
    fp = fopen(file_name, "r");
    if (fp == NULL) {
        printf("Can't open the file: %s\n", file_name);
        exit(1);
    }//if (fp == NULL)
    
    /* read all     */
    content = read_all(fp);
    
    /* show content */
    printf("content=%s\n", content);
    
    /* count words  */
    word_count = count_word_num2(content);
    
    /* show count   */
    printf("word_count=%d\n", word_count);
    
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
