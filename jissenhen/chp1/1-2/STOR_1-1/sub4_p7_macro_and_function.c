#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//#include "max2.h"
#if !defined(__MAX)
#define __MAX
#define max(a, b) ((a) > (b) ? (a) : (b))
#endif

int (max)(int a, int b)
{
    puts("ŠÖ””Åmax\n");
    return (a > b ? a : b);
}
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
    int         x = 10, y = 5;
    
    printf("x=%d y=%d\n", x, y);
    printf("max(x, y)=%d\n\n", max(x, y));
    printf("(max)(x, y)=%d\n\n", (max)(x, y));
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
