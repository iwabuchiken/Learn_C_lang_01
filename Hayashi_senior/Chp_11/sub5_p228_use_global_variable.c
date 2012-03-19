/************************************`
 * sub5_p228_use_global_variable.c	*
 * Author: Iwabuchi Ken				*
 * Date: 20120201_070823			*
 * Aim:								*
 * 	1. Pass a global var to function
 * Usage:
 * 	1. Run the program
 * <Source>
 * 	1. Hayashi:228
 *									*
 ************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c
#define show(dt, typ) \
		printf(#dt"=%"#typ"\n", dt)
#define show1(dt) printf(dt"\n")

/* Global variable */
int	g_var = 25;

/*
 * f1()
 * <Param>
 * <Description>
 * 	1.Change the value
 */
void f1( void )
{
	/* Show g_var */
	//show(g_var, d);

	/* Change g_var value */
	g_var = 30;

	/* Show g_var */
	//show(g_var, d);

}

int main( int argc, char* argv[] )
{
	/*
	 * Sec: 01
	 * 1. Use f1()
	 */

	/* Show func message */
	show1("Entering: main()");

	/* Show g_var var */
	printf("[LINE:%d]\n", __LINE__);
	show(g_var, d);

	/* Change the value */
	f1();

	/* Show g_var var again */
	printf("[LINE:%d]\n", __LINE__);
	show(g_var, d);

	/* Show func message */
	show1("Exiting: main()");

	return 0;
}


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
