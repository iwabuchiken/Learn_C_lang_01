/************************************`
 * sub2_p334_InputWithSpace.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. Input: aaa bbb
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
	char	s1[80], s2[80];

	printf("Input 1: ");
	scanf("%s", s1);
	printf("s1=%s(strlen=%d)\n",
				s1, strlen(s1));

	printf("Input 2: ");
	scanf("%s", s2);
	printf("s2=%s(strlen=%d s2[%d]=%c)\n",
		ptg5ts2, strlen(s2), strlen(s2), s2[strlen(s2)]);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
