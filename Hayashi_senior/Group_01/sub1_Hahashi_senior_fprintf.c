/************************************`
 * sub1_Hahashi_senior_fprintf.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120121_074802			*
 * Aim:								*
 * 	1. fprintf => return value
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h> /* exit() */
#include <string.h>
#include <time.h>
#include <assert.h>

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c
#define show(dt, typ) \
			printf(#dt"=%"#typ"\n", dt)

int main( int argc, char *argv[] )
{
	FILE	*fp;
	char	fname[] = "sub1.dat";
	int		i;

	if ((fp = fopen(fname, "w")) == NULL) {
		show("Can't open file", s);
		exit(1);
	}

	i = fprintf(fp, "%s", "http");
	show("File written", s);
	show(i, d);

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
