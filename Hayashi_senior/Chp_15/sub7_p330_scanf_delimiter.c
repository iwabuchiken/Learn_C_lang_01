/************************************`
 * sub7_p330_scanf_delimiter.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. scanf("%d,%d")
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
	int		a, b, c;

	printf("Input data (a,b,c): ");
	scanf("%d,%d,%d", &a, &b, &c);
	printf("a=%d b=%d c=%d\n", a, b, c);

	printf("Input data (3 data): ");
	scanf("%d%d%d", &a, &b, &c);
	printf("a=%d b=%d c=%d\n", a, b, c);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
