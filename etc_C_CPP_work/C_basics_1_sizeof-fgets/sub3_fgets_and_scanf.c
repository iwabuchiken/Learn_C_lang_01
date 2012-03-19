/************************************`
 * sub3_fgets_and_scanf.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120203_061705			*
 * Aim:								*
 * 	1.Use fgets() and scanf(); get
 * 		message
 * Usage:
 *	1.
 * <Source>
 * 	1.
 * <Related>
 * 	1. C:\workspaces\ws_ubuntu_1\G20120202_072802_CExam_class1\TRY_1
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
	char	ch;		/* Receive char type input */
	char	s[20];	/* Receive string type input */
	char	buf[20];/* Buffer for fgets() */
	char	*p;		/* Receive the return value of
						a char type input */

	/* get input */
	printf("Input: ");
	p = fgets(buf, sizeof(s), stdin);

	/* show string in the buffer */
	printf("p=%s strlen(p)=%d\n", p, strlen(p));

	/* scan a string from buf into s */
	sscanf(buf, "%s", s);

	/* show s */
	printf("s=%s strlen(s)=%d\n", s, strlen(s));

	/* scan a char from buf into ch */
	sscanf(buf, "%c", &ch);

	/* show ch */
	//printf("ch=%c strlen(ch)=%d\n", ch, strlen(ch));
	printf("ch=%c", ch);

	return (0);
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
