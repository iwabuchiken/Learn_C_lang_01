/************************************`
 * sub3_p248_arrow_operator.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120117_162249			*
 * Aim:								*
 * 	1. Arrow operator: ->
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

	printf("(*sp).name=%s\n", (*sp).name);
	printf("sp->name=%s\n", sp->name);
	printf("sp->name + 1=%s\n", sp->name + 1);
	printf("*(sp->name)=%c\n", *(sp->name));

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
