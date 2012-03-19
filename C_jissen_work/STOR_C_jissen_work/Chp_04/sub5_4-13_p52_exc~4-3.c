/************************************`
 * sub5_4-13_p52_exc~4-3.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120128_073644			*
 * Aim:								*
 * 	1.Output: Surface and
 * 		circumfrance of a ractangle
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
	/*
	 * The unit is inch for
	 * all the variables
	 */
	int		x = 3; /* width */
	int		y = 5; /* height */
	float	x2 = 6.8; /* width */
	float	y2 = 2.3; /* height */

	/* Output for integer value */
	printf("Surface=%d\n", (x*y));
	printf("Circumfrance=%d\n",
				(x + y) * 2);

	/* Output for float value */
	printf("Surface=%f\n", (x2*y2));
	printf("Circumfrance=%f\n",
				(x2 + y2) * 2);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
