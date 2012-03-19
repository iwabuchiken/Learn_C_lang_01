/************************************`
 * sub1_stderr.c					*
 * Author: Iwabuchi Ken				*
 * Date: 20120118_080021			*
 * Aim:								*
 * 	1. Use 'stderr' and redirect
 * 		=> see how the console output
 * 			changes
 * Data
 * 	1. Redirected output to
 * 		=> sub1.txt
 *									*
 ************************************/
#include <stdio.h>
#include <stdlib.h> /* wctomb() */
#include <string.h>
#include <time.h>
#include <assert.h>

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
	char	s1[] = "xyz";

	/* This output should be written
	 * to an output file. */
	fprintf(stdout, "%s", s1);
	/* This output should be to the
	 * console always  */
	fprintf(stderr, "%s", s1);

	return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
