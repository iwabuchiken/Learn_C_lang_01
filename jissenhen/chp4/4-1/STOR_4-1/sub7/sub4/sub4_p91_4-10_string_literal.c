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
    char        *ptr = "ABCD";
    
    printf("ptr(%%s) = %s\n", ptr);
    printf("ptr(%%p) = %p\n", ptr);
    printf("ptr(%%c) = %c\n", *ptr);
    printf("*(++ptr)(%%c) = %c\n", *(++ptr));
    printf("*++ptr(%%c) = %c\n", *++ptr);
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
