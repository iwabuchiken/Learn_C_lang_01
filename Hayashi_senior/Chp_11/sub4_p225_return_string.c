/************************************`
 * sub4_p225_return_string.c		*
 * Author: Iwabuchi Ken				*
 * Date: 20120128_063854			*
 * Aim:								*
 * 	1. Retun a string
 * Usage:
 * 	1. Run the program
 * <Source>
 * 	1. Hayashi:224
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
/*
 * touprstr1()
 * <Param>
 * <Description>
 * 	1. Convert the parameter variable itself
 */
void touprstr1(char *ss)
{
	show(ss, s);
	show(strlen(ss), d);

	while (*ss) {
		*ss = toupper(*ss);
		++ss;
	}
}

/*
 * touprstr2()
 * <Param>
 * <Description>
 * 	1. Declare a static pointer variable
 * 	2. Copy the parameter string to the pointer
 * 	3. Return the address of the pointer
 */
char *touprstr2(char *ss)
{
	static char	rss[80];
	int			i;

	/* Message */
	printf("[LINE:%d]", __LINE__);
	show1("touprstr2 starts");

	/* Show data: 1 */
	show(strlen(ss), d);
	show(sizeof ss, d);
	//show(ss, s);

	/* Convert ss */
	strcpy(rss, ss);
	for (i = 0; rss[i]; i++) {
		rss[i] = toupper(rss[i]);
	}

	/* Message */
	printf("[LINE:%d]", __LINE__);
	show1("Exiting: touprstr2");

	return rss;
}//char *touprstr2(char *ss)

/*
 * touprstr3()
 * <Param>
 * <Description>
 * 	1. Declare an auto pointer variable
 * 	2. Copy the parameter string to the pointer
 * 	3. Return the address of the pointer
 * 	4. String not shown in the caller function?
 */
char *touprstr3(char *ss)
{
	char		rss[80];
	int			i;

	/* Message */
	printf("[LINE:%d]", __LINE__);
	show1("Entering: touprstr3()");

	/* Show data: 1 */
	show(strlen(ss), d);
	show(sizeof ss, d);
	//show(ss, s);

	/* Convert ss */
	strcpy(rss, ss);
	for (i = 0; rss[i]; i++) {
		rss[i] = toupper(rss[i]);
	}

	/* Message */
	printf("[LINE:%d]", __LINE__);
	show1("Exiting: touprstr3");

	return rss;
}//char *touprstr2(char *ss)

int main( int argc, char* argv[] )
{
	char	a[] = "simd;int main( int argc, char* argv[] )";
	char	a2[] = "java.lang.Object";
	char	a3[] = "System.out.println(this.getClass().getName()";
	char	*p;

	//01 show a: 1st
	show(a, s);

	/* Turn a into upper */
	touprstr1(a);

	/* show a: 2nd */
	show(a, s);

	/*
	 * Section: 02
	 * Use touprstr2()
	 */

	/* show a2: 1st */
	show(a2, s);

	/* Turn a into upper */
	p = touprstr2(a2);

	/* show a: 2nd (using p) */
	show(p, s);

	/*
	 * Section: 03
	 * Use touprstr3()
	 */

	/* Show opening message */
	printf("\n");
	printf("\n<Section: 03>\n");
	//show("<Section: 03>", s);

	/* Show data: 1st */
	show(a3, s);

	/* Convert */
	p = touprstr3(a3);

	/* Show data: 2nd */
	show(p, s);

	return 0;
}


/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
