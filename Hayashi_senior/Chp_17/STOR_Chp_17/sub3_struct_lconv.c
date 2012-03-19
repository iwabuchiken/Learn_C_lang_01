/************************************`
 * sub3_struct_lconv.c				*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1.
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
/* struct lconv, setlocale() */
#include <locale.h>

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
	struct lconv	*conv;
	char			locale_str[10] = "jpn";
	char			*localept;

	if (argc > 1 && !isdigit(atoi(argv[1])))
			strcpy(locale_str, argv[1]);

	localept = setlocale(LC_ALL, locale_str);
	printf("locale=%s\n", locale_str);
	printf("localept=%s(%%s)\n", localept);
	//setlocale(LC_ALL, "jpn");
	//setlocale(LC_ALL, "usa");

	conv = localeconv();

	printf("MB_CUR_MAX=%d\n", MB_CUR_MAX);
	printf("MB_LEN_MAX=%d\n", MB_LEN_MAX);
	printf("conv->currency_symbol=%s\n",
				conv->currency_symbol);
	printf("strlen(conv->currency_symbol)=%d\n",
				strlen(conv->currency_symbol));

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
