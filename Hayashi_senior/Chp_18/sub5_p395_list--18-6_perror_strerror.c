/************************************`
 * sub5_p395_list--18-6_perror_strerror.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120121_074802			*
 * Aim:								*
 * 	1. Try: ferror()
 *									*
 ************************************/
#include <stdio.h> /* ferror(), clearerr(), FILE, printf(), fopen() */
#include <stdlib.h> /* exit() */
#include <string.h> /* strerror() */
#include <errno.h>

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
	FILE	*fp;

	printf("errno=%d\n", errno);

	// error occurs
	if ((fp = fopen("abc.dat", "r")) == NULL) {
		perror("Error occurred: ");
		printf("errno=%d\n", errno);
		printf("%s\n", strerror(errno));
		exit(1);
	}

	//printf("%s\n", strerror(errno));

	fclose(fp);

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
