/************************************`
 * sub3_p221_string.c				*
 * Author: Iwabuchi Ken				*
 * Date: 20120128_063854			*
 * Aim:								*
 * 	1. Pass a string array to the func
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
void func1(char *s)
{
	show(s, s);
	show(strlen(s), d);
}

int main( int argc, char* argv[] )
{
	char	a[] = "simd;int main( int argc, char* argv[] )";

	func1(a);

	return 0;
}


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
