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
    char        *s1 = "ABCD";
    char        *s2 = "ABCD";
    
    printf("s1: %%s=%s %%p=%p\n", s1,s1);
    printf("s2: %%s=%s %%p=%p\n", s2,s2);
    
    printf("<2> *s1 = 'Z'\n");
    *s1 = 'Z';
    printf("s1: %%s=%s %%p=%p\n", s1,s1);
    printf("s2: %%s=%s %%p=%p\n", s2,s2);
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
