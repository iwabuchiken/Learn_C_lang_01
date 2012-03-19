/************************************`
 * sub6_exc_6-2_score.c
 * Author: Iwabuchi Ken				*
 * Date: 20120213_072945
 * <Aim>
 * 	1. score created in numbers
 * 		=> convert into char-based list
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 84
 * <Related>
 * 	1.
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDLIB_H
#define INCLUDE_STDLIB_H /* exit() */
#include <stdlib.h>
#endif

#ifndef INCLUDE_STRING_H
#define INCLUDE_STRING_H
#include <string.h>
#endif

#ifndef INCLUDE_CTYPE_H
#define INCLUDE_CTYPE_H
#include <ctype.h>
#endif

#ifndef INCLUDE_MATH_H
#define INCLUDE_MATH_H
#include <math.h>
#endif

#ifndef INCLUDE_TIME_H
#define INCLUDE_TIME_H
#include <time.h>
#endif

#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

char convert_score2char(int score);

// prototypes -----------------------
char convert_score2char(int score)
{
	char	converted_char;	/* char converted from score	*/

	// switch
	if (score <= 60) {
		converted_char = 'F';
	} else if (score <= 70) {
		converted_char = 'D';
	} else if (score <= 80) {
		converted_char = 'C';
	} else if (score <= 90) {
		converted_char = 'B';
	} else if (score <= 100) {
		converted_char = 'A';
	} else {
		converted_char = 'X';
	}

/*	switch (score) {
		case (score <= 60):
			converted_char = 'F';
		break;
		default:
			converted_char = 'A';
			break;
	}//switch (score)
*/
	return converted_char;
}//char convert_score2char(int score)

int main()
{
	// variables
	FILE	*fout;	/* data file	*/
	FILE	*fin;	/* data file	*/
	char	fname[] = "sub6.dat"; /* data file name	*/
	char	fname_conv[] = "sub6_conv.dat"; /* data file name	*/
	char	line[20];	/* line data from file	*/
	char	converted_char;	/* number data converted	*/
	int		i;		/* counter		*/
	int		score;	/* score		*/
	char	score_conv;	/* score converted to char	*/
	char	*ret;	/* return of fgets()	*/

	/*************************
	 * prepare data file
	 *************************/
	// open file
	fout = fopen(fname, "w");
	if (fout == NULL) {
		printf("[LINE:%d] ", __LINE__);
		printf("Can't open the file\n");
		exit(1);
	}
	// reset random
	srand((unsigned)time(NULL));

	// generate data
	for (i = 0; i < 10; i++) {
		score = rand() % 100;
		fprintf(fout, "%d\n", score);
	}

	// close file
	fclose(fout);
	printf("[LINE:%d] ", __LINE__);
	printf("File closed\n");

	/*************************
	 * 1. open file
	 * 2. process data
	 *************************/
	// open file
	fin = fopen(fname, "r");
	if (fin == NULL) {
		printf("[LINE:%d] ", __LINE__);
		printf("Can't open the file\n");
		exit(1);
	}
	fout = fopen(fname_conv, "w");
	if (fout == NULL) {
		printf("[LINE:%d] ", __LINE__);
		printf("Can't open the file\n");
		exit(1);
	}
	// read data
	ret = fgets(line, sizeof(line), fin);
	while (ret != NULL) {
		sscanf(line, "%d", &score);
		printf("score=%d\n", score);
		// convert score
		score_conv =
				convert_score2char(score);
		printf(
			"\tscore_conv=%c\n", score_conv);
		// save data to file
		fprintf(fout, "%c\n", score_conv);
		// read a new line from the file
		ret = fgets(line, sizeof(line), fin);
	}//while (ret != NULL)

	// close file
	fclose(fin);
	return (0);
}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
