/************************************`
 * sub5_exc_6-1_distance.c
 * Author: Iwabuchi Ken				*
 * Date: 20120213_072945
 * <Aim>
 * 	1. calculate the distance between
 * 		the two points
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 84
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

#ifndef INCLUDE_MATH_H
#define INCLUDE_MATH_H
#include <math.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

int main()
{
	// variables
	int		x1, y1;	/* point 1	*/
	int		x2, y2;	/* point 2	*/
	double	dx1, dy1;	/* point 1: double	*/
	double	dx2, dy2;	/* point 2: double	*/
	double	pow1, pow2; /* powers of x and y	*/
	double	dis_pow;	/* double before sqrt-ing	*/
	double	dis_sqrt;	/* double after sqrt-ing	*/
	long		dis;	/* distance	*/
	char	line[20];	/* line for input	*/

	// prompt input
	printf("Input point 1(x, y): ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &x1, &y1);
	printf("Input point 2(x, y): ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d %d", &x2, &y2);

	// prepare data
	dx1 = (double)x1;
	dx2 = (double)x2;
	dy1 = (double)y1;
	dy2 = (double)y2;
	pow1 = pow((dx2 - dx1), 2.0);
	pow2 = pow((dy2 - dy1), 2.0);
	dis_pow = pow1 + pow2;
	dis_sqrt = sqrt(dis_pow);

	// report
	printf("dis_pow=%f\n", dis_pow);
	printf("dis_sqrt=%f\n", dis_sqrt);

/*	dis = sqrt(pow((dx2 - dx1), 2.0) +
			pow((dy2 - dy1), 2.0));
*/
	// calculate
	//dis = sqrt((x2 - x1)^2 + (y2 - y1)^2);

	// show
/*	printf("(dx2 - dx1)=%f\n", (dx2 - dx1));
	printf("pow((dx2 - dx1), 2.0)=%f\n",
				pow((dx2 - dx1), 2.0));
	printf("pow((dx2 - dx1), 2.0) + "
			"pow((dy2 - dy1), 2.0)=%f\n",
			pow((dx2 - dx1), 2.0)
			+ pow((dy2 - dy1), 2.0));
	printf("dis=%f\n", dis);
	*/
//	printf("(x2 - x1)^2=%d\n", (x2 - x1)^2);
//	printf("(double)x2=%f\n", (double)x2);


	return (0);
}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
