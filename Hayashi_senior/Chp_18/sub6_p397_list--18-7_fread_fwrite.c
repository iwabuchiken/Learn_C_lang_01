/************************************`
 * sub6_p397_list--18-7_fread_fwrite.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120121_074802			*
 * Aim:								*
 * 	1. Try: fwrite(), fread()
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

#define show(dt, typ) \
		printf(#dt"=%"#typ"(%%"#typ")\n", dt);

int main( int argc, char *argv[] )
{
	char	buf[][20] = {
			"asdfg",
			"xdswerqwerty"
	};

	FILE	*fp;
	char	fname[] = "sub6.dat";

	show(buf[0], s);
	show(buf[0], p);
	show(&buf[0], p);

	show(buf[1], s);
	show(buf[1], p);
	show(&buf[1], p);

	// write
	if ((fp = fopen(fname, "w")) == NULL) {
		perror("Error: ");
		exit(1);
	}

	fwrite(buf[0], strlen(buf[0]), 1, fp);
	show("File written", s);

	//fwrite(buf[1], strlen(buf[1]), 1, fp);
	fwrite(buf[1], strlen(buf[1]), 2, fp);
	show("File written", s);

	// write: 2
	fputc('\n', fp);

	fwrite(buf, strlen(buf[0]), 1, fp);
	show("File written", s);

	// write: 3
	fputc('\n', fp);

	fwrite(buf, strlen(buf[0]), 2, fp);
	show("File written", s);
	show(strlen(buf[0]), d);

	// write: 4
	fputc('\n', fp);

	fwrite(buf, sizeof(char), 2, fp);
	show("File written", s);
	show(strlen(buf[0]), d);

	fclose(fp);
	show("File closed", s);

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
