/************************************`
 * <Basics>
 *	1. File: sub1_list_files.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120216_130922
 * <Aim>
 * 	1.
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1. codes => http://blog.livedoor.jp/campanella_77/archives/20541579.html#
 * <Related>
 * 	1.
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H /* exit() */
#include <stdlib.h>
#endif

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <string.h>
#endif
#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <time.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

#include <dirent.h>

// macros ============================
#define TRUE	1
#define FALSE	0

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
	DIR*			dir;	/* DIR	*/
	struct dirent*	dp;		/* dirent struct	*/
	int				i;		/* index
							 * used for dir entries
	 	 	 	 	 	 	 */
	int				j;		/* index
							 * used for s_option
							 */
	int				s_option;	/* "-s" option	*/
	FILE*			fout;	/* output file		*/
	/* name for the output file	*/
	char			fout_name[20] = "sub2.dat";

	/* initialize variables	*/
	i			= 1;
	s_option	= FALSE;
	j			= 1;
	fout = fopen(fout_name, "w");
	if (fout == NULL) {
		printf("Can't open the file: %s\n",
					fout_name);
		exit(1);
	} else {
		printf("File opened: %s\n", fout_name);
	}

	/* handle options		*/
	while (argv[j]) {
#ifdef D
    printf("[LINE:%d]", __LINE__);
    printf("argv[%d]=%s\n", j, argv[j]);
#endif
		//if (argv[j] == "-s") {
    	if (!strcmp(argv[j], "-s")) {
			s_option = TRUE;
			break;
		}//if (argv[j] == "-s")
		j ++;
	}//while (argv[j])
#ifdef D
    printf("[LINE:%d]", __LINE__);
    printf("s_option=%d\n", s_option);
#endif
	/* open the dir	*/
	if (argv[1]) {
		dir = opendir(argv[1]);
	} else {
		dir = opendir(".");
	}
	//dir = opendir("C:\workspaces\ws_ubuntu_1\G20110617_095214_nbp_new");

	if (dir == NULL) {
		printf("Can't open the dir: .\n");
		exit(1);
	}

	/* read dir		*/
	dp = readdir(dir);
	while (dp != NULL) {
		printf("%d: %s\n", i, dp->d_name);
		/* save data to output file	*/
//		printf("Writing data to file...\n");
		if (s_option == TRUE) {
			fprintf(fout, "%s\n", dp->d_name);
		}//if (s_option == TRUE)

		/* re-read the dir		*/
		dp = readdir(dir);

//		/* save data to output file	*/
//		printf("Writing data to file...\n");
//		if (s_option == TRUE) {
//			fprintf(fout, "%s\n", dp->d_name);
//		}//if (s_option == TRUE)

		/* increment the index	*/
		i ++;
	}//while (dp != NULL)

	/* if no entry	*/
	if (i == 1) {
		printf("No entry\n");
	}

	/* close file	*/
	fclose(fout);
	printf("File closed: %s\n", fout_name);

	/* return		*/
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
