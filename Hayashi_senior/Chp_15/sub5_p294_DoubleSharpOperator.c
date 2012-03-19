/************************************`
 * sub5_p294_DoubleSharpOperator.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. #define func(abc) aaa##abc##bbb
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

//#define str(aa) is##aa
#define is(name, dt) is##name(dt)
//#define str(aa) ii##aa
#define vname(name) adSH##name
int adSH1 = 100;

int main( int argc, char *argv[] )
{
	int		i;
	i = vname(1);
	//printf("%s\n", str("graph"));
	//printf("i")
	printf("i=%d\n", i);
	//printf("%d\n", str(graph)(i));
	printf("%d\n", is(graph, i));

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
