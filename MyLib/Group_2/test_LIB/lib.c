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
#include "main.h"

void show_msg( void )
{
	printf("[%s:%d]", __FILE__, __LINE__);
}//void show_msg( void )
