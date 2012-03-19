/************************************`
 * calculate_tax.c
 * Author: Iwabuchi Ken				*
 * Date: 20120215_070015
 * <Aim>
 * 	1.
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 104
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

#ifndef INCLUDE_TIME_H
#define INCLUDE_TIME_H
#include <time.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

// macros -----------------
#define TAX_RATE	0.05

// global variables -----------------

// prototypes -----------------------
int get_price( void );	/* get price from stdin	*/

/* get the total	*/
int get_total
( int price, int* tax, double* tax_floating );

// functions ------------------------
int get_price( void )
{
	/* variables	*/
	char	line[10];
	int		price;

	/* processes	*/
	while (1) {
		printf("Input the price: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &price);
		if (!isdigit(price)) {
			break;
		} else {
			printf(
				"Irregular input: %d", price);
		}
	}

	return price;
}//int get_price( void )

int get_total
( int price, int *tax, double* tax_floating )
{
	/* variables	*/
	int		total;

	/* get total	*/
	total = price * (1 + TAX_RATE);

	/* get tax		*/
	*tax = total - price;

	/* get the tax_floating		*/
	*tax_floating = (price * (1 + TAX_RATE))
			//- floor(price * (1 + TAX_RATE));
			- price - *tax;

//	ifdef D
//	printf("[LINE:%d]\n", __LINE__);
//	printf("(price * (1 + TAX_RATE))=%f\n",
//			(price * (1 + TAX_RATE)));
//	printf(
//		"floor(price * (1 + TAX_RATE))=%f\n",
//			floor(price * (1 + TAX_RATE)));
//	endif
	return (price * (1 + TAX_RATE));

}//int get_total()
/**********************************
 * main()
 **********************************/
int main()
{
	/* variables		*/
	char	line[10];	/* input line	*/
	int		price;		/* price(before tax)	*/
	double tax_floating;	/* tax amount in float	*/
	int		tax;		/* tax amount in integer	*/
	int		total;		/* total		*/

	/* processes
	 * 1. input price
	 * 2. calculate
	 * 3. display
	 */
	/* 1. input price	*/
	price = get_price();

	/* */
	total = get_total(price, &tax, &tax_floating);

	/* display		*/
	printf("price=%d total=%d tax=%d\n",
				price, total, tax);
	printf("tax rounded = %.2f\n",
				tax_floating);

#ifdef D
	printf("[LINE:%d]", __LINE__);
	printf("total=%d\n", total);
	printf("price=%d\n", price);
	printf("tax=%d\n", tax);
	printf("tax_floating=%f\n", tax_floating);
	printf("TAX_RATE=%4.3f\n", TAX_RATE);
#endif
	return (0);

}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/

