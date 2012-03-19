/************************************`
 * sub1_preprocess_line.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. Use: #line
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
#line 1 "abc.c"
	printf("line=%d file=%s\n", __LINE__, __FILE__);

#line 24 "abc.c"
	printf("line=%d file=%s\n", __LINE__, __FILE__);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
