#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "max.h"

//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c
void invisible_error( void )
{
    int         x, y;
//Å@Å@int         x, y;
    
    printf("x=");       scanf("%d", &x);
    printf("y=");       scanf("%d", &y);
    
    printf("max(x, y) = %d\n", max(x, y));
    
}//void invisible_error( void )

int main( int argc, char *argv[] )
{
    invisible_error();
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
