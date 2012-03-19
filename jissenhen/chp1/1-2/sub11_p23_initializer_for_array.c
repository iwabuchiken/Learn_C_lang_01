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
    int         n, i;
    //int         a[NUM] = {rand() % 4};
    double      a[NUM] = {rand() % 4};
    
    srand((unsigned) time(NULL));
    
    n = rand() % 4;
    
    printf("n=%d\n", n);
    
    for(i = 0; i < NUM; i++) {
        //printf("a[%d]=%d\n", i, a);
        printf("a[%d]=%f\n", i, a);
    }
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
