/************************************`
 * sub2_sizeof_long_short.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120201_080413			*
 * Aim:								*
 * 	1.Know how long is long and short,
 * 		respectively
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 65
 * <Related>
 * 	1. C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen\Chp_05
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
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

int main()
{
	/*
	 * Sec: 01
	 */

	long int	ln_n1 = 100;
	short int	sh_n2 = 10;
	double		db_n3 = 3.45;
	float		fl_n4 = 2.3;

	show(sizeof(ln_n1), d);
	show(sizeof(sh_n2), d);
	show(sizeof(db_n3), d);
	show(sizeof(fl_n4), d);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
