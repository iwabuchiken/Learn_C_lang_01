/************************************`
 * sub8_p329_ScanConversionSignifier.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. scanf("%hi", &a)
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

int main( int argc, char *argv[] )
{
	signed int		a;
	int				b, c;
	char			s[80];
	int				i;

	// %[a-e]
	printf("Input data (string): ");
	i = scanf("%[a-g]%n", s, &a);
	//scanf("%[abcdefg]%n", s, &i);
	printf("input chars=%d\n", a);
	printf("ret=%d\n", i);
	printf("s=%s\n", s);

/*
	printf("Input data (1 datum, octa): ");
	//scanf("%o", &a);
	scanf("%x", &a);
	//printf("a=%o\n", a);
	printf("a=%d\n", a);

	// %n
	printf("Input data (string): ");
	i = scanf("%s%n", s, &a);
	printf("i=%d\n", i);
	printf("s=%s num=%d strlen=%d sizeof=%d"
			" char(s[%d])=%c(%%d=%d)\n",
			s, a, strlen(s), sizeof(s),
			strlen(s), s[strlen(s)], s[strlen(s)]);

	// return value
	printf("Input data (1 datum, octa): ");
	i = scanf("%d%d%d", &a, &b, &c);
	printf("i=%d\n", i);
	printf("a=%d\n", a);
*/
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
