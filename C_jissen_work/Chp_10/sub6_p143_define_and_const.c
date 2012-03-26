/************************************`
 * <Basics>
 *	1. File: sub6_p143_define_and_const.c
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120326_095101
 *	4. Dependencies:
 *		1)
 * <Aim>
 * 	1.
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1. 
 * <Related>
 * 	1.
 * <Others>
 * <Description of the program>
 * 	1. 
 ************************************/

#ifndef INCLUDE_STDIO_H
#define INCLUDE_STDIO_H
#include <stdio.h>
#endif

#ifndef INCLUDE_STDLIB_H
#define INCLUDE_STDLIB_H
#include <stdlib.h>
#endif


#define show(dt, typ) \
			printf(#dt"=%"#typ"(%%"#typ")\n", dt)
#define show1(dt) \
			printf(#dt"\n")

// macros ============================
struct box {
    int     width, height;
};
// global vars ============================
// prototypes ============================
// functions ============================
int main(int argc, char* argv[])
{
	/* variables	*/
    //const box pink_box  = {1.0, 4.5};
    //const box pink_box  = {1, 4};
    //const box pink_box;
    //struct  box pink_box;
    //const struct box pink_box;
    //const struct box pink_box = {1, 4};
    const struct box pink_box = {1.0, 4.5};
    
    /* show         */
    printf("pink_box.height=%d\n", pink_box.height);
    
    /* change value */
    pink_box.height = 10;
    
	return (0);
}//int main(int argc, char* argv[])

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
 */
