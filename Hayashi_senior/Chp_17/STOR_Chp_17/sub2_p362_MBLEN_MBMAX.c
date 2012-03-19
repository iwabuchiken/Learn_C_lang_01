/************************************`
 * sub2_p362_MBLEN_MBMAX.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. Know MB_CUR_MAX, etc.
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <locale.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
	//setlocale(LC_ALL, "jpn");
	setlocale(LC_ALL, "usa");

	printf("MB_CUR_MAX=%d\n", MB_CUR_MAX);
	printf("MB_LEN_MAX=%d\n", MB_LEN_MAX);

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
