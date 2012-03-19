#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

char	first[100];
char	last[100];
char	full_name[200];

int main( int argc, char *argv[] )
{
	strcpy(first, "Ken");
	strcpy(last, "Iwabuchi");

	strcpy(full_name, first);

	printf("full_name=%s(strlen=%d)\n",
				full_name, strlen(full_name));

	strcat(full_name, " ");
	printf("full_name=%s(strlen=%d)\n",
					full_name, strlen(full_name));

	strcat(full_name, last);
		printf("full_name=%s(strlen=%d)\n",
					full_name, strlen(full_name));


    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
