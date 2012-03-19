/************************************`
 * sub3_p335_scanf_percent_c.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. scanf: %5c
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
	int		i;

	printf("Input (5 chars): ");
	scanf("%5c", s1);
	//printf("s1: %%s=%s\n", s1);
	//for (i = 0; i < strlen(s1); i++)
	for (i = 0; i <= strlen(s1); i++)
		printf("%c(%d) ", s1[i], s1[i]);
	printf("\n");
	printf("s1: strlen=%d\n", strlen(s1));

	s1[strlen(s1)] = '\0';
	printf("s1: %%s=%s(strlen=%d)\n",
				s1, strlen(s1));

	//s1[strlen(s1-1)] = '\0';
	s1[strlen(s1)-1] = '\0';
	printf("s1: %%s=%s\n", s1);

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
