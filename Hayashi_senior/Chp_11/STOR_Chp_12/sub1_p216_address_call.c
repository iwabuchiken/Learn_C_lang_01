/************************************`
 * sub1_p216_address_call.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. address call; value call
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
void func1(int n)
{
	show1("\n<func1>");
	show(n, d);
	show(&n, p);
}

void func2(int *n)
{
	show1("\n<func2>");
	show(n, p);
	show(*n, d);
	show(&n, p);
	*n = 30;
	show1("*n = 30");
}

int main( int argc, char* argv[] )
{
	int		n = 20;

	func1(n);
	func2(&n);
	func1(n);

	return 0;
}


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
