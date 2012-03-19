/************************************`
 * sub6_p369_VariableLengthParameter_VariableTypes.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120120_142524			*
 * Aim:								*
 * 	1.
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h> /* wctomb() */
#include <string.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>

#include <stdarg.h> /**/

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c
void unidisp(char *fmt, ...);

int main( int argc, char *argv[] )
{
	unidisp("iii", 100, 200, 30);
	unidisp("ids", 100, 10.34, "abcde");

	return 0;
}

void unidisp(char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	while (*fmt) {
		if (*fmt == 'i')
			printf("%d\n", va_arg(ap, int));
		if (*fmt == 'd')
			printf("%f\n", va_arg(ap, double));
		if (*fmt == 's')
			printf("%s\n", va_arg(ap, char *));

		++fmt;
	}
	va_end(ap);
}//void unidisp(char *fmt, ...)

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
