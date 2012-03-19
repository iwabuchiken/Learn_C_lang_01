/************************************`
 * sub6_p251_struct_array.c			*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_062246			*
 * Aim:								*
 * 	1. struct array
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
	struct seiseki	*sp2;
	struct seiseki	seito2[100];

	char			s[] = "abcde";
	char			*p;

	//1
	printf("\n<01>\n");
	printf("sizeof(struct seiseki)=%d\n",
				sizeof(struct seiseki));

/*	p = s;

	printf("s: %%s=%s\n", s);
	//s++;
	printf("p: %%s=%s\n", p);
	++p;
	printf("[++p]\n");
	printf("p: %%s=%s\n", p);
	p++;
	printf("[p++]\n");
	printf("p: %%s=%s\n", p);
*/
	//02
	printf("\n<02>\n");
	sp = seito2;
	strcpy(sp->name, "okakura");
	printf("sp->name: %%s=%s &=%p\n",
					sp->name, &sp->name);
	printf("seito2[0].name=%s\n",
					seito2[0].name);
	strcpy((++sp)->name, "tenshin");
	printf("sp->name=%s\n", sp->name);
	printf("seito2[1].name: %%s=%s &=%p\n",
				seito2[1].name, &seito2[1].name);

	//03
	printf("\n<03>\n");
	strcpy(seito2[2].name, "komuro");
	printf("(++sp)->name: %%s=%s &=%p\n",
					(++sp)->name, &sp->name);
	printf("seito2[2].name: %%s=%s &=%p\n",
				seito2[2].name, &seito2[2].name);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
