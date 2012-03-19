/************************************`
 * <Basics>
 *	1. File: sub2_use_escape_char_for_file_path.c
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

#ifndef INCLUDE_DIRENT_H
#define INCLUDE_DIRENT_H
#include <dirent.h>
#endif

// prototypes ============================

// functions ============================

int main(int argc, char* argv[])
{
	/* variables	*/
	int		i;	/* index		*/

	/* initialize	*/
	i = 0;

	/* processes	*/
	while (argv[i]) {
		printf("argv[%d]=%s\n", i, argv[i]);
		i ++;
	}

	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
