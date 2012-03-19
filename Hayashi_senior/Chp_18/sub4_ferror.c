/************************************`
 * sub4_ferror.c					*
 * Author: Iwabuchi Ken				*
 * Date: 20120121_074802			*
 * Aim:								*
 * 	1. Try: ferror()
 *									*
 ************************************/
#include <stdio.h> /* ferror(), clearerr(), FILE, printf(), fopen() */
#include <stdlib.h> /* exit() */

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

void show_FILE_members(FILE *fp)
{
	// see FILE struct members
	/* Members names: Good for
	 * 	=> MSVC10.0, gcc */
	printf("\n==============================\n");
	printf("<FILE>\n");
	printf("fp->_flag=%d\n", fp->_flag);
	printf("fp->_cnt=%d\n", fp->_cnt);
	printf("fp->_ptr=%p\n", fp->_ptr);
	printf("fp->_base=%p\n", fp->_base);
	//printf("fp->_base=%p\n", fp->base);
	printf("fp->_file=%d\n", fp->_file);
	printf("==============================\n");

}//void show_FILE_members(FILE *fp)

int main( int argc, char *argv[] )
{
	FILE			*fp;
	char			fname[] = "sub4.dat";
	char			text[] = "abc";
	//unsigned char	ch;
	char			ch;
	int				i, n;

	// prepare the file
	if ((fp = fopen(fname, "w")) == NULL) {
		printf("Can't open the file: %s\n", fname);
		exit(1);
	}

	fprintf(fp, "%s\n", text);
	fclose(fp);

	// open the file to read
	if ((fp = fopen(fname, "r")) == NULL) {
		printf("Can't open the file: %s\n", fname);
		exit(1);
	}

	// show FILE members
	show_FILE_members(fp);
/*	// see FILE struct members
	printf("\n<FILE>\n");
	printf("fp->_flag=%d\n", fp->_flag);
	printf("fp->_cnt=%d\n", fp->_cnt);
	printf("fp->_ptr=%p\n", fp->_ptr);
*/
	// get chars
	for (i = 0; i < strlen(text); i++) {
		ch = fgetc(fp);
		printf("%%c=%c(%%d=%d)"
				"feof(fp)=%d\n",
				ch, ch, feof(fp));
		// show FILE members
		//show_FILE_members(fp);
	}
	ch = fgetc(fp);
	//printf("%%c=%c(%%d=%d)\n", ch, ch);
	printf("%%c=%c(%%d=%d)"
				"feof(fp)=%d\n",
				ch, ch, feof(fp));

	// show FILE members
	//show_FILE_members(fp);

	// show feof proper
	printf("\n<feof(fp)>\n");
	printf("feof(fp)=%d\n", feof(fp));

	// clear error
	clearerr(fp);
	printf("\n<clearerror(fp)>\n");
	printf("feof(fp)=%d\n", feof(fp));

	// use clearerr(fp)


	// close the file
	fclose(fp);

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
