/************************************`
 * sub1_p176_void_pointer_operation.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120113_105442			*
 * Aim:								*
 * 	1. p176: void型ポインタの更新
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
	int		n[] = {1,2,3,4};
	void	*pt;

	pt = n;

	//printf("pt=%d\n", *pt);
	printf("pt=%p\n", pt);
	/* cast to 'int*' type, then show */
	printf("pt=%d\n", *((int *)pt)+1);
	//pt++;
	((int*)pt)++;	/* cast to 'int*' type */
	printf("pt=%p\n", pt);
	((char *)pt)++;	/* cast to 'char*' type */
	printf("pt=%p\n", pt);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
