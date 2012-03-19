/************************************`
 * sub3_continue_and_increment.c
 * Author: Iwabuchi Ken				*
 * Date: 20120213_072945
 * <Aim>
 * 	1. "continue" used => loop increment done?
 * 		=> Yes
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1.
 * <Related>
 * 	1.
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDLIB_H
#define INCLUDE_STDLIB_H /* exit() */
#include <stdlib.h>
#endif

#ifndef INCLUDE_STRING_H
#define INCLUDE_STRING_H
#include <string.h>
#endif

#ifndef INCLUDE_CTYPE_H
#define INCLUDE_CTYPE_H
#include <ctype.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

// global variables

int main()
{
	// set values
	int		i;			/* counter	*/

	for (i = 0; i < 10; i++) {
		if ((i % 2) == 0)
			continue;
		printf("i=%d\n", i);

	}

	return (0);
}//int main()

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
