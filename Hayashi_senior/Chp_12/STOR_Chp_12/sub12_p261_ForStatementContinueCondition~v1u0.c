/************************************`
 * sub12_p261_ForStatementContinueCondition.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. Continue condition
 * 		=> initial value doesn't match
 * 			the condition
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

int main( int argc, char* argv[] )
{
	int		i;

	for(i = 10; i < 0; i++)
		printf("i=%d\n", i);
	printf("Exit 'for'\n");
	printf("i=%d\n", i);

	return 0;
}


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
