#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c
void string_null( void )
{
    char        a[3] = "abc";
    int         i;
    
    for (i = 0; i < 3; i++)
    {
        printf("%2c", a[i]);
    }
    printf("\n");
    
    printf("strlen(a)=%d\n", strlen(a));
    printf("a=%s\n", a);
    
}//void sizeofchar( void )

int main( int argc, char *argv[] )
{
    string_null();
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
