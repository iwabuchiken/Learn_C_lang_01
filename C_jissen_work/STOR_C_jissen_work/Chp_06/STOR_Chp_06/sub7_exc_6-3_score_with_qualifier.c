/************************************`
 * sub7_exc_6-3_score_with_qualifier.c
 * Author: Iwabuchi Ken				*
 * Date: 20120213_072945
 * <Aim>
 * 	1. score created in numbers
 * 		=> convert into char-based list
 * 		=> char modified with "+", etc.
 * Usage:
 *	1. Execute the program			*
 * <Source>
 * 	1. Oualline: 85
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

// prototypes -----------------------
int convert_score2string(
		int score, char converted_string[]);
int convert_first_digit(
		int first_digit, char converted_string[]);

// functions -------------------------
/**************************************
 * convert_first_digit()
 * <Return>
 * 	1. 1 => conversion successful
 * 	2. 2 => conversion unsuccessful
 **************************************/
int convert_first_digit
(int first_digit, char converted_string[])
{
	// switch
	if (first_digit == 0 ||
			first_digit >= 8) {
		converted_string[1] = '+';
	} else if (first_digit <= 3) {
		converted_string[1] = '-';
	} else if (first_digit <= 7) {
		converted_string[1] = ' ';
	} else {
		return -1;
	}

	return 1;
}//int convert_first_digit()

/*************************************
 * convert_score2string()
 * <Return>
 * 	1. 1 => conversion successful
 * 	2. 2 => conversion unsuccessful
 *************************************/
int convert_score2string
(int score, char converted_string[])
{
	int		first_digit;	/* first digit number	*/
	int		result; 		/* result of convert_first_digit()	*/

	// convert to char
	if (score <= 60) {
		converted_string[0] = 'F';
	} else if (score <= 70) {
		converted_string[0] = 'D';
	} else if (score <= 80) {
		converted_string[0] = 'C';
	} else if (score <= 90) {
		converted_string[0] = 'B';
	} else if (score <= 100) {
		converted_string[0] = 'A';
	} else {
		return -1;
	}

	// convert the first digit to qualifier
	if (converted_string[0] != 'F') {
		first_digit = score % 10;
		result = convert_first_digit(
				first_digit, converted_string);
	} else {
		converted_string[1] = ' ';
	}
	//if (converted_string[0] != 'F')

/*	switch (score) {
		case (score <= 60):
			converted_char = 'F';
		break;
		default:
			converted_char = 'A';
			break;
	}//switch (score)
*/
	return 1;
}//char convert_score2string(int score)

/*
 * main()
 * <Processes>
 * 	1. convert_score2string()
 * 		=> convert score to string
 */
int main()
{
	// variables
	FILE	*fout;	/* data file	*/
	FILE	*fin;	/* data file	*/
	char	fname[] = "sub6.dat"; /* data file name	*/
	char	fname_conv[] = "sub6_conv.dat"; /* data file name	*/
	char	line[20];	/* line data from file	*/
	//char	converted_char;	/* number data converted	*/
	char	converted_string[3];	/* number data converted	*/
	int		i;		/* counter		*/
	int		score;	/* score		*/
	int		conv_result;	/* score converted to char	*/
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
		// convert score to string
		conv_result =
				convert_score2string(
					score, converted_string);
		// add '\0' to converted_string
		converted_string[2] = '\0';

		// show result
		printf("\tscore_conv=%s\n",
					converted_string);

		// save data to file
		fprintf(
			fout, "%s\n", converted_string);

		// read a new line from the file
		ret = fgets(line, sizeof(line), fin);
	}//while (ret != NULL)

	// close file
	fclose(fin);
	fclose(fout);

	return (0);
}//int main()


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
