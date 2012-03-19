#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

//#include <iostream>

//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( int argc, char *argv[] )
{
    //int         a = sin(20);
    //double      a = sin(20);
    double      a = sin(40);
    //const int   b = sin(100);
    //const int   b = sin((double)0.4);
    //int         b = sin((double)0.4);
    //int         b;
    double      b;
    int         i;
    
    b = sin((double)0.4);
    
    printf("a=%f(&=%p)\n", a, a);
    printf("b=%f(&=%p)\n", b, b);
    
    for (i = 0; i < 10; i++) {
        double  x = sin((double)i / 10);
        printf("x=%f\n", x);
    }//for (i = 0; i < 10; i++) {
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
