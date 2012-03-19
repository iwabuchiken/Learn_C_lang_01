/************************************`
 * sub6_p292_SingleSharpOperator.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. #define show(dt) ....#dt
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

#define show(dt, typ) \
			printf(#dt "=%" #typ "\n", dt)

int main( int argc, char *argv[] )
{
	int		i = 32;
	char	s1[] = "defgi";

	show(i, d);
	show(s1, s);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
