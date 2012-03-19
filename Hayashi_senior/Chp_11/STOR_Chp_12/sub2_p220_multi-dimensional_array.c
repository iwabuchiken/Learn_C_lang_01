/************************************`
 * sub2_p220_multi-dimensional_array.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. Pass md array to the function
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
#define show(dt, typ) \
		printf(#dt"=%"#typ"\n", dt)
#define show1(dt) printf(dt"\n")
void func1(int a[][2])
//void func1(int a[2][2])
//void func1(int *a[2]) //=> 間接参照のレベルが 'int **' と 'int [2][2]' で異なっています。
//void func1(int **a) //=> 間接参照のレベルが 'int **' と 'int [2][2]' で異なっています。
{
	int		i, j;
	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			show(a[i][j], d);
}

int main( int argc, char* argv[] )
{
	int		a[2][2] = {
			3,9,
			4,5
	};

	func1(a);

	return 0;
}


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
