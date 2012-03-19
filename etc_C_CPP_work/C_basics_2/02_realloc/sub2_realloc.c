/************************************`
 * <Basics>
 *	1. File: sub2_realloc.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120218_062001
 *	4. Dependencies:
 *		1) Header:	C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-6\mylib1.h	v=1.1
 *		2) File:	C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen_work\Chp_07_work\exc_7-6\mylib1.c	v=1.1
 * <Aim>
 * 	1.
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1.realloc:	http://www9.plala.or.jp/sgwr-t/lib/realloc.html
 * <Related>
 * 	1.
 * <Others>
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDIO_H
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

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

#ifndef INCLUDE_MYLIB_1_H
#define INCLUDE_MYLIB_1_H
#include "mylib1.h"
#endif

// macros ============================
//#define TRUE	1
//#define FALSE	0
//#define CHAR_LENGTH	10
#define CHAR_LENGTH	10
// prototypes ============================


// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
	char	*ptr;	/* pointer to be mallocked	*/
	char	*tmp;	/* a temporay for realloc	*/
		/* char reservoir	*/
	char	reserve[] =
		"abcdefghijklmnopqrstuvwxyz";

	/* processes
	 * 1. malloc
	 * 2. copy string
	 * 2. display
	 * 3. realloc
	 * 4. display
	 * 5. free pointers
	 */
	/* 1. malloc	*/
	//ptr = (char*)malloc(10);
	ptr = (char*)malloc(CHAR_LENGTH);
	if (ptr == NULL) {
		printf("Can't malloc\n");
		exit(EXIT_FAILURE);
	} else {
		printf("malloc complete\n");
	}

	/* 2. copy string	*/
	//strcpy(ptr, "abcdefghijklmnop");
	strcpy(ptr, "abcdefghi");
	//strncpy(ptr, reserve, CHAR_LENGTH - 1);
	//*(ptr + (CHAR_LENGTH - 1)) = '\0';
	printf("string copied: %s\n",
				"abcdefghi");

	/* 2. display		*/
	printf("ptr=%s(%%p=%p)\n", ptr, ptr);

	/* 3. realloc		*/
	tmp = (char*)realloc(
					ptr, CHAR_LENGTH + 20);
	if (tmp == NULL) {
		printf("Can't realloc\n");
		free(ptr);
		exit(EXIT_FAILURE);
	} else {
		printf("realloc complete\n");
	}

	/* 2. display		*/
	printf("ptr=%s(%%p=%p)\n", ptr, ptr);

	/* 3. copy again	*/
	printf("\nNow copying...\n");
	strcpy(ptr, "abcdefghijklmnop");
	printf("string copied: %s\n",
				"abcdefghijklmnop");

	/* 4. display		*/
	printf("ptr=%s(%%p=%p)\n", ptr, ptr);

	/* 5. free the pointers	*/
	free(ptr);
	free(tmp);
	printf("pointers freed\n");

	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
