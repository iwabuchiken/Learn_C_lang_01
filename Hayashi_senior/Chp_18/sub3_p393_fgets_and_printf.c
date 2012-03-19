/************************************`
 * sub3_p393_fgets_and_printf.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120121_074802			*
 * Aim:								*
 * 	1. printf(...NULL)
 * 		=> output will be what?
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h> /* exit() */
#include <string.h>
#include <time.h>
#include <assert.h>

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
	char	s1[] = {NULL};

	printf("NULL: %%s=%s\n",
				NULL);
				//NULL, strlen(NULL));
	printf("s1: %%s=%s %%d=%d\n",
				s1, strlen(s1));

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
