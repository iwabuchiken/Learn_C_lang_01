/************************************`
 * sub5_p367_VariableLengthParameter.c	*
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
int maxmin(int mode, int ct, ...);

int main( int argc, char *argv[] )
{
	int		n;

	n = maxmin('B', 3, 200, 300, 100);
	printf("Max=%d\n", n);

	n = maxmin('S', 3, 200, 300, 100);
	printf("Max=%d\n", n);

	return 0;
}

int maxmin(int mode, int ct, ...)
{
	int		i, wk, ans = 0;

	va_list ap;
	va_start(ap, ct);
	for (i=1; i <= ct; i++) {
		wk = va_arg(ap, int);
		if (i == 1) ans = wk;
		if (mode == 'B') {
			if (ans < wk) ans = wk;
		}
		else if (mode == 'S') {
			if (ans > wk) ans = wk;
		}
	}//for (i=1; i <= ct; i++) {
	va_end(ap);

	return ans;
}//int maxmin(int mode, int ct, ...)

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
