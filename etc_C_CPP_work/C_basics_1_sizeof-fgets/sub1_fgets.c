/************************************`
 * sub1_fgets.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120201_080413			*
 * Aim:								*
 * 	1.fgets => if given to the buffer of
 * 		a string longer than the size of
 * 		the buffer, the last elemnt of
 * 		the buffer will be what?
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 57
 * <Related>
 * 	1. C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\C_jissen\Chp_05
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
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

int main()
{
	/*
	 * Sec: 01
	 */

	char	buf[5]; /* Buffer */
	char	ch;	/* Get 1 char from buffer */
	int		n; /* Retun value of fflush() */

	fgets(buf, sizeof(buf), stdin);

	show(buf, s);
	show(strlen(buf), d);
	show(buf[sizeof(buf) - 2], d);
	show(buf[sizeof(buf) - 2], c);
	show(buf[sizeof(buf) - 1], d);
	show(buf[sizeof(buf) - 1], c);

	/*
	 * Sec:02
	 * Get a char from buffer
	 */

	/* Get a char */
	show1("Input a char: ");
	ch = getchar();
	show(ch, c);
	show(ch, d);

	/* fflush the buffer */
	n = fflush(stdin);

	/* Get a char again */
	show1("Input a char: ");
	ch = getchar();
	show(ch, c);
	show(ch, d);

/*	Result
abc
buf=abc
(%s)
buf[sizeof(buf) - 2]=10(%d)
buf[sizeof(buf) - 2]=
(%c)
buf[sizeof(buf) - 1]=0(%d)
buf[sizeof(buf) - 1]=

abcdefgh
buf=abcd(%s)
buf[sizeof(buf) - 2]=100(%d)
buf[sizeof(buf) - 2]=d(%c)
buf[sizeof(buf) - 1]=0(%d)
buf[sizeof(buf) - 1]=

"Input a char: "
ch=e(%c)
ch=101(%d)

 */
	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
