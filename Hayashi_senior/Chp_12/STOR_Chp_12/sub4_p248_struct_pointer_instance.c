/************************************`
 * sub4_p248_struct_pointer_instance.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120117_162249			*
 * Aim:								*
 * 	1. Pointer-type instance
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
	char			*p;
	char			s[] = "fghijk";

	// input data
	strcpy(sp->name, "xyz");

	printf("sp->name=%s\n", sp->name);
	printf("sp->name+1=%s\n", sp->name+1);
	//p = ++(sp->name);
	printf("s=%s\n", s);
	//s++;
	printf("s+2=%s\n", s+2);

	//printf("++(sp->name)=%s\n", ++(sp->name));

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
