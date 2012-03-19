#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "main_c.h"
//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c
void sizeofchar( void )
{
    int         i;
    char        ch;
    
    printf("sizeof(i)=%d\n", sizeof(i));
    printf("sizeof(int)=%d\n", sizeof(int));
    printf("sizeof(ch)=%d\n", sizeof(ch));
    printf("sizeof(char)=%d\n", sizeof(char));
    printf("sizeof('A')=%d\n", sizeof('A'));
    
    // 2
    printf("<2>\n");
    printf("ch: %%p=%p &=%p sizeof=%d\n",
                ch, &ch, sizeof(ch));
    ch = 'B';
    printf("ch: %%p=%p &=%p sizeof=%d\n",
                ch, &ch, sizeof(ch));
    
}//void sizeofchar( void )

int main( int argc, char *argv[] )
{
    sizeofchar();
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
