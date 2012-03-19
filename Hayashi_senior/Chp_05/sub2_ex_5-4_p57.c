#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

char	line[100];

int main( int argc, char *argv[] )
{
	printf("Enter a line: ");
	fgets(line, sizeof(line), stdin);
	printf("The length is : %d(%s)\n",
				strlen(line), line);

    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
