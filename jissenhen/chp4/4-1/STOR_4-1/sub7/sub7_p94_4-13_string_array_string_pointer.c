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
    char        ary[] = "ABCDEF";
    char        *ptr = "abcdef";
    int         i;
    
    printf("ary: %%s=%s sizeof(ary)=%d\n",
            ary, sizeof(ary));
    printf("ptr: %%s=%s sizeof(ptr)=%d\n",
            ptr, sizeof(ptr));
    
    for(i = 0; i < sizeof(ary); i++) {
        printf("%c(&=%p)\n", ary[i], &ary[i]);
    }
    
    printf("<ptr>\n");
    printf("ptr: %%p=%p &=%p\n", ptr, &ptr);
    for(i = 0; i < 7; i++) {
        //printf("%c(%%p=%p &=%p)\n", *ptr, ptr, &ptr);
        printf("%c(%%p=%p &=%p)\n",
                *ptr, ptr, (&ptr)+i);
        //        *ptr, ptr, &(ptr+1));
        //        *ptr, ptr, &(++ptr));
        //=> エラー E2027 メモリ上に配置されなければならない(関数 main )
        //=> error: lvalue required as unary '&' operand
        ptr++;
    }
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
