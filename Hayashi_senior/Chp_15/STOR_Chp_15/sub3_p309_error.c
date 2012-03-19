/************************************`
 * sub3_p309_error.c				*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. #error
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c
//#define D 1
#if D == 1
	int dt = 100;
#elif D == 2
	int dt = 200;
#elif D == 3
	int dt = 300;
#else
#error ’è”‚Ì”ÍˆÍ‚Í‚P|‚R‚Å‚·
#endif

int main( int argc, char *argv[] )
{
	printf("dt=%d\n", dt);
	//printf("%s\n", S);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
