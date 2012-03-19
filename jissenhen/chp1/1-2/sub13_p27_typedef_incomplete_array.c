#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

//#include <iostream>

//using namespace std;

//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

#define NUM 3
//#define NUM 10000

int main( void )
{
    typedef int         IntAry[];
    int                 len, i;    
    IntAry              a = {1,2,3};
    //IntAry b;
    //=> エラー E2449 sub13_p27_typedef_incomplete_array.c 23: 'b' のサイズが不明、あるいはゼロ(関数 main )
    //=> error: array size missing in 'b'
    
    len = sizeof(a) / sizeof(a[0]);
    
    printf("len=%d\n", len);
    //printf("sizeof(IntAry)=%d\n", sizeof(IntAry[]));
    //=> 許されない型
    //=> error: array type has incomplete element type

    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
