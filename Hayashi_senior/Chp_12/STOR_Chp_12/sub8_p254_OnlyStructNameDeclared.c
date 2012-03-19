/************************************`
 * sub8_p254_OnlyStructNameDeclared.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. Struct name declared
 * 	2. Prototype declared
 * 	3. Struct defined
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

	Seiseki		seito1, seito2;
	Seiseki		seito3;

	seito1.a = 40;
	seito2.a = 80;

	// show data
	printf("seito3.a=%d\n", seito3.a);
	printf("seito3=%p(%%p) seito3=%p(&)",
				seito3, &seito3);

	// add_v
	printf("\n[add_v]\n");
	seito3 = add_v(seito1, seito2);
	printf("seito3.a=%d\n", seito3.a);
	printf("seito3=%p(%%p) seito3=%p(&)",
				seito3, &seito3);

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
