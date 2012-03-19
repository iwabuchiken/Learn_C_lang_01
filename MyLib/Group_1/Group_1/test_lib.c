/************************************`
 * lib.c					*
 * Author: Iwabuchi Ken				*
 * Date: 20120121_074802			*
 * Func list:						*
 * 	1. makeTokens()
 *									*
 ************************************/
#include <stdio.h> /* ferror(), clearerr(), FILE, printf(), fopen() */
#include <stdlib.h> /* exit() */
#include <time.h>
#include <string.h>

//prototypes =============================
//char* getTimeLabel( void );
char* getTimeLabel( char *label );
char* getStringToken
( char *s1, const char *delimiter,
			int number, char *s2);


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

char* getStringToken
( char *s1, const char *delimiter,
			int number, char *s2)
{
	char	*tmp_p;
	int		i;

	tmp_p = strtok(s1, delimiter);
	//tmp_p = strtok(s1, "_");
	//strtok(s1, "_");
	//strtok(s1, delimiter);
	//if (tmp_p == NULL)
//		return NULL;

	//debug
	printf("s1=%s\n", s1);
	exit(1);

	strcpy(s2, tmp_p);

	for (i = 1; i < number; i++) {
		tmp_p = strtok(NULL, delimiter);
		if (tmp_p == NULL) break;
		if ((i - 1) == number)
			strcpy(s2, tmp_p);
	}

	return s2;
}//char* getStringToken

#if 1
#define VERSION "1.0"

int main( int argc, char *argv[] )
{
	char str[] = "ABCD ef.1234.G";
	char *tp;

	/* スペース.を区切りに文字列を抽出 */
	tp = strtok( str, " ." );
	puts( tp );
	while ( tp != NULL ) {
			tp = strtok( NULL," ." );
			if ( tp != NULL ) puts( tp );
	}

	return 0;
}

#endif

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
