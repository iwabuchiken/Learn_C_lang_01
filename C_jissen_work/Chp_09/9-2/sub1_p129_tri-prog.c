/************************************`
 * <Basics>
 *	1. File: sub1_p129_tri-prog.c
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
float triangle(float width, float height);

// functions ============================

/******************************************
 * triangle -- calculate the surface of a triangle
 * 
 * <Parameters>
 *      width  --   bottom length
 *      height --   height
 * <Return value>
 *      surface of a given triangle
 ******************************************/
float triangle(float width, float height)
{
    float   area;   /* surface of the triangle  */
    
    area    = width * height / 2.0;
    
    return (area);
}//float triangle(float width, float height)

int main(int argc, char* argv[])
{
	printf("Triangle #1 %f\n", triangle(1.3, 8.3));    
	printf("Triangle #2 %f\n", triangle(4.8, 9.8));    
	printf("Triangle #3 %f\n", triangle(1.2, 2.0));    
    
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
