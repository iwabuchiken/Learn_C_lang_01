#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include <iostream>

using namespace std;

//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

class Complex {
    //double      re, im;
public:
    double      re, im;
    
    Complex(double r, double i = 0.0)
    {
        re = r;
        im = i;
    }//Complex(double r, double i = 0.0)
    
};//class Complex {

int main( void )
{
    Complex     a(5.0, 7.5);
    Complex     b = 3;
    
    cout << "a.re=" << a.re << endl;
    cout << "b.re=" << b.re << endl;
    //a.re = 100;
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
