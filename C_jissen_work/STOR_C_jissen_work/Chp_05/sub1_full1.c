/************************************`
 * sub1_full1.c						*
 * Author: Iwabuchi Ken				*
 * Date: 20120201_083056			*
 * Aim:								*
 * 	1. Show that fgets() includes '\n'
 * Usage:
 *	1. Execute the program.			*
 * <Source>
 * 	1. Oualline:58
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



#define show(dt, typ) \
			printf(#dt"=%"#typ"\n", dt)
#define show1(dt) \
			printf(#dt"\n")

char first[100];	/* Family name */
char last[100];	/* Given name */
char full[200];	/* Full name */

int main()
{
	/* Get data */
	show1("First name:");
	fgets(first, sizeof(first), stdin);
	show1("Last name:");
	fgets(last, sizeof(last), stdin);

	/* Set full name */
	strcpy(full, first);
	strcat(full, " ");
	strcat(full, last);

	/* Show full name */
	printf("The name is %s\n", full);

	/* Return */
	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
