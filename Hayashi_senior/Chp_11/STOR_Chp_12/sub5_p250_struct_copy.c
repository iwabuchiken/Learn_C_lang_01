/************************************`
 * sub5_p250_struct_copy.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_062246			*
 * Aim:								*
 * 	1. copy member
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

int main( int argc, char* argv[] )
{
	struct seiseki {
		char	name[20];
		int		a;
		int		b;
	};

	struct seiseki	*sp;
	struct seiseki	seito;
	//seito.name = "Okakura";
	strcpy(seito.name, "Okakura");

	//sp->name = seito.name;
	//strcpy(sp->name, "Tenshin");
	sp->a = 25;

	//printf("sp->name=%s\n", sp->name);
	printf("seito.name=%s\n", seito.name);
	printf("sp->a=%d\n", sp->a);
	//printf("sizeof(sp->name)=%s\n",
		//			sizeof(sp->name));

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
