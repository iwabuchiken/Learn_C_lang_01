/************************************`
 * sub3_p183_pointer_pointer.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120113_105442			*
 * Aim:								*
 * 	1. pointer to a pointer
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

int main( int argc, char **argv )
//int main( int argc, char argv[][] )
{
	printf("argc=%d\n", argc);
/*
	printf("argv[%d][%d]=%s\n",
				0, 0, argv[0][0]);
*/

	//printf("argv0=%s\n", *argv);
	//printf("*(++argv)=%s\n", *(++argv));
	for( ; *argv; argv++)
		printf("*argv: %%s=%s\t\t%%p=%p"
				"\t&=%p\n",
					*argv, *argv, &(*argv));

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
