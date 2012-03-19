/************************************`
 * sub1_p360_wide_char.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. wchar_t
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
	wchar_t c1, c2;
	char	c3;
	char	c4[] = "abc‚ ‚¢‚¤";
	wchar_t	c5[] = L"abc‚ ‚¢‚¤";

	c1 = L'a';
	c2 = L'Š¿';
	c3 = '“ú';

	printf("c1=%d\n", c1);
	printf("c2=%d\n", c2);
	printf("c3=%d\n", c3);

	// c4
	printf("c4: strlen=%d %%s=%s\n",
				strlen(c4), c4);
	printf("c5: strlen=%d %%s=%s\n",
				strlen(c5), c5);

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
