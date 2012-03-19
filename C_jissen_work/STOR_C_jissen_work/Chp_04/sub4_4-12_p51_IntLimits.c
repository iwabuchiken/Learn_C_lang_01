/************************************`
 * sub4_4-12_p51_IntLimits.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120128_073644			*
 * Aim:								*
 * 	1. What happens if the value
 * 		exceeds the limit for int type
 * Usage:
 *	1. Execute the program			*
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H /* exit() */
#include <stdlib.h>
#endif

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <string.h>
#endif
#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <time.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"\n", dt)
#define show1(dt) \
			printf(#dt"\n")

int main()
{
	int		n = 2e10; /* Exponetial expression */
	int		n2 = 4294967296; /* Whole range of the signed int */
	int		n3 = 268435455; /* half of the range of the signed int */
	int		n4 = 4294967295; /* Whole range of the signed int */
	int		n5 = 2147483647; /* half of the range of the signed int */
	long int	long_n1 = 2147483700;
	int		n6 = long_n1;
	short int	short_n1 = n5;
	int		i;	/* counter */

	show(n, d);
	show1("n2 = 4294967296");
	show(n2, d);
	show1("n3 = 268435455");
	show(n3, d);
	show1("n3 = 268435455 + 2");
	show((n3+2), d);

	show1("<n4>");
	show(n4, d);
	show((n4/2), d);

	show1("");
	show(n5, d);
	for (i = -5; i < 5; i++) {
		//printf("n3+%d=%d\n", i, (n3+i));
		printf("n5+%d=%d\n", i, (n5+i));
	}

	/*
	 * Put a long-int value to
	 * a signed int variable
	 */
	show1("");
	show1("<long_n1>");
	show(long_n1, ld);

	/*
	 * Put a int value to
	 * a signed short-int variable
	 */
	show1("");
	show1("<short_n1=n5>");
	show(n5, d);
	show(short_n1, d);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
