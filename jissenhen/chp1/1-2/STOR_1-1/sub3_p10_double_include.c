#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//#include "max2.h"
#if !defined(__MAX)
#define __MAX
#include "max2.h"
#endif
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
    printf("max(10, 1)=%d\n", max(10, 1));
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
