/************************************`
 * sub1_p240_struct_declare.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120116_153442			*
 * Aim:								*
 * 	1. Declare struct
 * 		=> various ways
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

int main( int argc, char **argv )
//int main( int argc, char argv[][] )
{
	struct ABC {
		char	name[20];
		int		a;
		int		b;
	};

	struct ABC	abc;
	struct ABC	abc2;
	char		*p1;

	// set value to name
	strcpy(abc.name, "abcdefg");
	p1 = abc.name;
	//abc2.name = abc.name;
	//abc.name = "abcdefg";

	// show data
	printf("abc.name: %%s=%s %%p=%p"
			" &=%p\n",
			abc.name, abc.name, &(abc.name));
	printf("p1: %%s=%s\n", p1);
	printf("p1+1: %%s=%s\n", p1+1);
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
