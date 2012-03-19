/************************************`
 * sub4_p335_scanf_getchar.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. scanf, then getchar
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
	int		dt, c1, c2;

	printf("Input num="); scanf("%d", &dt);
	printf("dt=%d\n", dt);
	fflush(stdin);
	printf("Input char="); c1 = getchar();
	printf("c1=%c(%d)\n", c1, c1);
	printf("Input char="); c2 = getchar();
	printf("c2=%c(%d)\n", c2, c2);

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
