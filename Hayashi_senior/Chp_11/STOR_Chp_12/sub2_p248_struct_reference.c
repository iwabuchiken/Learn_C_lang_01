/************************************`
 * sub2_p248_struct_reference.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120117_162249			*
 * Aim:								*
 * 	1. pointer-type struct instance
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

	struct seiseki seito;
	struct seiseki *sp = &seito;
	struct seiseki seito2;
	struct seiseki *sp2 = &seito2;

	// input data
	strcpy(seito.name, "xyz");
	strcpy(seito2.name, "XYZ");

	// show seito
	printf("\n[seito]\n");
	printf("&seito: &=%p\n", &seito);
	printf("seito: %%p=%p\n", seito);
	//printf("*seito: %%p=%p\n", *seito);
		//=> ïsê≥Ç»ç\ë¢ëÃÇÃââéZ
	printf("seito.name: %%p=%p\n", seito.name);
	printf("seito.name: %%s=%s\n", seito.name);
	printf("seito.name+1: %%s=%s\n", seito.name+1);
	printf("&seito.name: %%p=%p\n", &seito.name);

	// show sp
	printf("\n[sp]\n");
	printf("sp: %%p=%p\n", sp);
	printf("&sp: &=%p\n", &sp);
	printf("*sp: %%p=%p\n", *sp);

	// show seito2
	printf("\n[seito2]\n");
	printf("&seito2: &=%p\n", &seito2);
	printf("seito2: %%p=%p\n", seito2);
	printf("seito2.name: %%p=%p\n", seito2.name);
	printf("seito2.name: %%s=%s\n", seito2.name);
	printf("&seito2.name: %%p=%p\n", &seito2.name);

	// show sp2
	printf("\n[sp2]\n");
	printf("sp2: %%p=%p\n", sp2);
	printf("&sp2: &=%p\n", &sp2);
	printf("*sp2: %%p=%p\n", *sp2);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
