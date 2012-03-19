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

char* getTimeLabel( void );

//functions ==============================
char* getTimeLabel( void )
{
	time_t		t, t_result;
	char		*p = "abc";
	struct tm	*t_st;

	t_result = time(&t);

	//printf("t_result=%f\n", t_result);
	printf("t_result=%ld\n", t_result);

	// initialize t_st
	t_st = localtime(&t);

	return p;

}//char* getTimeLabel( void )

#if 1
#define VERSION "1.0"
/*
//typedef __w64 int INT;
//typedef __w64 long Long;
typedef long __w64 Long;
//typedef int INT;
*/

int main( int argc, char *argv[] )
{
	//INT		i = 100;
	//Long		i = 100;

	printf("[%s:%d]", __FILE__, __LINE__);
	printf("VERSION=%s\n", VERSION);
	//printf("i=%d\n", i);

	getTimeLabel();

	return 0;
}

#endif

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
