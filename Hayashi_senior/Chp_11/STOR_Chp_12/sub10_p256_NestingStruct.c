/************************************`
 * sub10_p256_NestingStruct.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. nesting
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

struct kakakutyp {
	int		teika;
	int		waribiki;
	int		yuutai;
};

typedef struct syohin {
	char	name[30];
	//struct kakakutyp kakaku;
	struct kakakutyp *kakaku;
	int		zaiko;
} Syohin;

int main( int argc, char* argv[] )
{
	Syohin	sho1, sho2;
	struct kakakutyp *kakaku;

	printf("sho1: %%p=%p &=%p\n", sho1, &sho1);
	printf("sho1.kakaku: %%p=%p &=%p\n",
				sho1.kakaku, &sho1.kakaku);
	kakaku->teika = 100;
	printf("kakaku->teika=%d\n", kakaku->teika);

	//printf("sho1.kakaku: %%p=%p &=%p\n",
		//sho1.kakaku->teika, (&sho1.kakaku)->teika);
	//printf("sho1.kakaku->teika: %%p=%p",
		//		sho1.kakaku->teika);

	//sho1.kakaku.teika = 100;
	//sho2.kakaku->waribiki = 20;
	//(sho2.kakaku)->waribiki = 20;

	//printf("sho2.kakaku->waribiki=%d\n",
		//		sho2.kakaku->waribiki);
	//printf("(sho2.kakaku)->waribiki=%d\n",
		//		(sho2.kakaku)->waribiki);

	return 0;
}


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
