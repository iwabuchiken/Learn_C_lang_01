/************************************`
 * sub2_p177_pointer_priority.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120113_105442			*
 * Aim:								*
 * 	1. p177: pointer: óDêÊèáà 
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
void show_data(int n1[], int size)
{
	int		i;

	printf("\nn1=");
	for(i = 0; i < size; i++) {
		printf("%d", n1[i]);
		if(i < size - 1)
			printf(",");
	}
	printf("\n");
}//

int main( int argc, char *argv[] )
{
	int		n1[] = {10, 20, 30};
	int		*pt = n1;

	// basic
	show_data(n1, 3);
	printf("*pt=%d\n", *pt);
	printf("*(pt+1)=%d\n", *(pt+1));
	// *pt++
	printf("*pt++=%d\n", *pt++);
	printf("*pt=%d\n", *pt);

	// (*pt)++
	printf("(*pt)++=%d\n", (*pt)++);
	printf("*pt=%d\n", *pt);
	/* show data */
	printf("[LINE:%d]", __LINE__);
	show_data(n1, 3);
	printf("*pt=%d\n", *pt);

	// *++pt
	printf("\n");
	printf("*++pt=%d\n", *++pt);
	printf("*pt=%d\n", *pt);
	/* show data */
	printf("[LINE:%d]", __LINE__);
	show_data(n1, 3);
	printf("*pt=%d\n", *pt);

	// ++*pt
	printf("\n");
	printf("++*pt=%d\n", ++*pt);
	printf("*pt=%d\n", *pt);
	/* show data */
	printf("[LINE:%d]", __LINE__);
	show_data(n1, 3);
	printf("*pt=%d\n", *pt);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
