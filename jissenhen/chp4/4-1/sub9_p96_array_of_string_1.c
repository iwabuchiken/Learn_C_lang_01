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
    int         i;
    char        a[][6] = {"S5000", "V8", "W140"};
    char        *p[] = {"12345", "AB", "abcd"};
    
    printf("p: %%p=%p &=%p\n", p, &p);
    printf("p[0]: %%p[0]=%p[0] &=%p[0]\n",
                    p[0], &p[0]);
    printf("p[1]: %%p[1]=%p[1] &=%p[1]\n",
                    p[1], &p[1]);
    printf("p[2]: %%p[2]=%p[2] &=%p[2]\n",
                    p[2], &p[2]);
    printf("\n");
    for (i = 0; i < 3; i++)
        printf("a[%d] = %s(strlen(a[%d])=%d)"
                " sizeof(a)=%d\n",
                i, a[i], i, strlen(a[i]), sizeof(a));
    
    for (i = 0; i < 3; i++)
        printf("p[%d] = %s(strlen(p[%d])=%d"
                " sizeof=%d)\n",
                i, p[i], i, strlen(p[i]), sizeof(p));
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
