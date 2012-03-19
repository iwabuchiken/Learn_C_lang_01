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
    //int         b[NUM] = {1};
    //int         b[NUM] = {1,2,3,4};
    int         b[NUM];
    int         i;
    
    //for(i = 0; i < NUM/1000; i++)
    for(i = 0; i < NUM; i++)
    {
        printf("b[%d]=%d\n", i, b[i]);
    }//for(i = 0; i < NUM; i++)
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
