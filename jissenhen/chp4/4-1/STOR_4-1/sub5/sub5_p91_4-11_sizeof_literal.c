#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
    char        s1[] = "ABC";
    //char        s1[] = "ABC0DEF";
    char        s2[] = "ABC\0DEF";
    
    printf(
        "s1: %%s=%s strlen(s1)=%d, sizeof(s1)=%d\n",
            s1, strlen(s1), sizeof(s1));
    printf(
        "s2: %%s=%s strlen(s2)=%d, sizeof(s2)=%d\n",
            s2, strlen(s2), sizeof(s2));
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
