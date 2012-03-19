/************************************`
 * lib.c					*
 * Author: Iwabuchi Ken				*
 * Date: 20120121_074802			*
 * Func list:						*
 * 	1. makeTokens()
 *									*
 ************************************/
#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h> /* ferror(), clearerr(), FILE, printf(), fopen() */
#endif
#ifndef INCLUDE_STDLIB_H
#define INCLUDE_STDLIB_H
#include <stdlib.h> /* exit() */
#endif
#ifndef INCLUDE_STRING_H
#define INCLUDE_STRING_H
#include <string.h> /* strcpy(), strcat() */
#endif
#ifndef INCLUDE_TIME_H
#define INCLUDE_TIME_H
#include <time.h>
#endif

#ifdef REVISION
#else
#define REVISION 0
#endif

//prototypes =============================
//char* getTimeLabel( void );
char* getTimeLabel( char *label );
char* getStringToken
( char *s1, const char *delimiter,
			int number, char *s2);
void showLibRevisionNumber( void );

//functions ==============================
/* func: char* getTimeLabel( char *label )
 *
 * <Parameters>
 * 	1. label: char *: Either pointer or
 * 		char array, with size larger than
 * 		20 bytes.
 * <Return>
 * 	1. Pointer to 'label'.
 * 	2. Example: '20120121_134811'
 * 	3. Each number '0' supplied if of
 * 		a single digit: '1' => '01'
 * 	4. 'year' value: 4 digit
 * 	5. Parameter 'label' also rewritten
 * 	6. 'label' => '\0' added at tail
 * <Header needed>
 * 	1. time.h
 * <Resource>
 *	1. time.h: http://www9.plala.or.jp/sgwr-t/lib/time.html
 *	2. strcat(): http://www9.plala.or.jp/sgwr-t/lib/strcat.html
 *	3. itoa(): http://ftc.suki.net/tpb/saruc07.html
 *	4. strlen(): http://www9.plala.or.jp/sgwr-t/lib/strlen.html
 */
char* getTimeLabel( char *label )
{
	time_t		t, t_result;
	struct tm	*t_st;
	/* Contain tm struct member's value */
	char		tmp[10];

	t_result = time(&t);

	// initialize t_st
	t_st = localtime(&t);

	/* year => 4 digit format
	 * Example: '2012'
	 * */
	strcpy(label,
			itoa(t_st->tm_year + 1900, tmp, 10));

	// month
	itoa(t_st->tm_mon + 1, tmp, 10);
	if (strlen(tmp) == 1) {
		strcat(label, "0");
		strcat(label, tmp);
	} else
		strcat(label, tmp);

	// day
	itoa(t_st->tm_mday, tmp, 10);
	if (strlen(tmp) == 1) {
		strcat(label, "0");
		strcat(label, tmp);
	} else
		strcat(label, tmp);

	/* delimiter
	 * => Delimit the date chunk and
	 * 		the time chunk
	 * */
	strcat(label, "_");

	// hour
	itoa(t_st->tm_hour, tmp, 10);
	if (strlen(tmp) == 1) {
		strcat(label, "0");
		strcat(label, tmp);
	} else
		strcat(label, tmp);

	// min
	itoa(t_st->tm_min, tmp, 10);
	if (strlen(tmp) == 1) {
		strcat(label, "0");
		strcat(label, tmp);
	} else
		strcat(label, tmp);

	// sec
	itoa(t_st->tm_sec, tmp, 10);
	if (strlen(tmp) == 1) {
		strcat(label, "0");
		strcat(label, tmp);
	} else
		strcat(label, tmp);

	//return
	return label;

}//char* getTimeLabel( void )

/* char* getStringToken
 *
 * <Parameters>
 * 	1. s1: char*: Target string
 * 	2. delimiter: const char*: Delimiter string
 * 	3. number: int: Get number-th token
 * 	4. s2: char*: Contain the target token
 * <Return>
 * 	1. s2
 * <Usage>
 * 	1. Example
 * 		"abc_def_ghi", "_", 2, s2
 * 		=> s2="def"
 * <Header needed>
 * 	1. string.h
 * <Resource>
 * 	1. strtok(): http://www9.plala.or.jp/sgwr-t/lib/strtok.html
 *
 */
char* getStringToken
( char *s1, const char *delimiter,
			int number, char *s2)
{/**/
	/* Contain the return value of strtok()*/
	char	*tmp_p;
	/* Conatain s1 */
	char	tmp_s[80];
	/* counter */
	int		i;

	strcpy(tmp_s, s1);
	/* First token */
	tmp_p = strtok(tmp_s, delimiter);

	strcpy(s2, tmp_p);

	/* Second token and further */
	for (i = 1; i < number; i++) {
		tmp_p = strtok(NULL, delimiter);

		if (tmp_p == NULL) break;

		if ((i + 1) == number)
			strcpy(s2, tmp_p);
	}

	/* Return */
	return s2;
}//char* getStringToken

void showLibRevisionNumber( void )
{
	printf("[%s:%d]\n", __FILE__, __LINE__);
	printf("REVISION=%d\n", REVISION);

}//void showLibRevisionNumber( void )

#if 1
//#define VERSION "1.0"

int main( int argc, char *argv[] )
{
	char		label[40];
	char		token[10];
	char		string[] = "abc_def_ghi";
	char		s1[10], s2[10];
	char		*p;

	printf("[%s:%d]", __FILE__, __LINE__);
	printf("[main()]\n");

	showLibRevisionNumber();

	return 0;
}

#endif

/*
#ifdef D
    printf("[%s:%d]", __FILE__, __LINE__);
#endif
*/
