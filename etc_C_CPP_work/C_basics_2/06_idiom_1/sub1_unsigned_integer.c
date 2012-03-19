/************************************`
 * <Basics>
 *	1. File: sub1_unsigned_integer.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120318_113319
 *	4. Dependencies:
 *		1)
 * <Aim>
 * 	1. input a number string ( 2 digit number )
 *  2. get the second digit as an integer
 * <Usage>
 *	1. Execute the program
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

#include <limits.h>

// macros ============================

// global vars ============================

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
    const   char    *name;
    
    /* input           */
    name = strrchr(argv[0], '/');
    
    if (name == NULL) {
        name = strrchr(argv[0], '\\');
        //name = strrchr(argv[0], '^');

    }//if (name == NULL)
    
    /* modify the char  */
    if (name != NULL) {
        ++name;
/*
    } else {//if (name != NULL)
        name = "-";
    }//if (name != NULL)
*/
    }//if (name != NULL)
    
    /* show         */
    printf("name=%s\n", name);

    
    return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
