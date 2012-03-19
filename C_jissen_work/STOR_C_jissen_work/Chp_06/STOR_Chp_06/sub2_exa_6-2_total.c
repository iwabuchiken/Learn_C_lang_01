/************************************`
 * sub2_exa_6-2_total.c
 * Author: Iwabuchi Ken				*
 * Date: 20120213_072945
 * <Aim>
 * 	1. use "(1)" expression for while loop
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 81
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
char	line[100];
int		total;	/* line for input	*/
int		item;	/* the next item to add to the list	*/

int main()
{
	// set values
	total = 0;
	while (1) {
		printf("Enter # to add\n");
		printf("  or 0 to stop:");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &item);

		// judge
		if (item == 0)
			break;
		total += item;
		printf("item: %d\n", item);
		printf("Total: %d\n", total);

		// report
//		printf("item=%d\n", item);
//		break;
	}//while (1) {

	printf("Final total %d\n", total);
	return (0);
}//int main()

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
