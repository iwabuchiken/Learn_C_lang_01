/************************************`
 * <Basics>
 *	1. File: sub7_p146_builtin_symbols.c
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
// global vars ============================
// prototypes ============================
// functions ============================
int main(int argc, char* argv[])
{
	/* variables	*/
    //printf("__MSDOS__=%d\n", __MSDOS__);
    //printf("__BORLANDC__=%d\n", __BORLANDC__);
    //printf("__BORLANDC__=%s\n", __BORLANDC__);
    printf("__STDC__=%d\n", __STDC__);
    
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
