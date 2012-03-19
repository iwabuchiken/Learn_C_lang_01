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
    //char        ary[] = "ABCDEF";
    char        ary[] = "ABCDEFGHI";
    char        *ptr = "abcdef";
    int         i;
    char        (*pz)[7];
/*
警告 W8075 sub8_p95_pointer_to_array.c 18: 問題のあるポインタの変換(関数 main )
警告 W8075 sub8_p95_pointer_to_array.c 23: 問題のあるポインタの変換(関数 main )
 */
    pz = &ary;
    
    printf("&ary: %%p=%p\n", &ary);
    printf("pz: %%p=%p\n", pz);
    
    pz = ptr;
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
