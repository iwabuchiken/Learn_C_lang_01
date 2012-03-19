/************************************`
 * sub9_p254_StructInstanceDeclareDefine.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. Struct declared and defined
 * 	2. Initialized
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

struct seiseki;

typedef struct seiseki Seiseki;

Seiseki add_v(Seiseki a, Seiseki b);

struct seiseki
{
	char	name[20];
	int		a;
	int		b;
};


int main( int argc, char* argv[] )
{

	Seiseki		seito1 = {"abc", 10, 20};
	Seiseki		seito2;

	printf("seito1.name=%s\n", seito1.name);


	return 0;
}

Seiseki add_v(Seiseki a, Seiseki b)
{
	Seiseki		c;
	c.a = a.a + b.a;

	printf("c=%p(%%p) c=%p(&)\n",
							c, &c);

	return c;
}//Seiseki add_v(Seiseki a, Seiseki b)

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
