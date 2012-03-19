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
    int         i, j;
    //int         x[NUM][NUM] = {0};
    int         x[NUM][NUM] = {3};
    int         k;
    
    for(i = 0; i < NUM; i++)
        for(j = 0; j < NUM; j++)
            printf("x[%d][%d]=%d(&=%p)\n",
                    i, j, x[i][j], &x[i][j]);
    printf("sizeof(x)=%d(&=%p)\n",
            sizeof(x), x);
            
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
