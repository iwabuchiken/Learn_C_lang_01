#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <iostream>

#include "max_p13.h"

using namespace std;

//v=1.0
//created_at=20111104_083701
//project=C:\workspaces\ws_ubuntu_1\G20111104_083701_C_learn_01\main.c

int main( void )
{
    int         x, y;
    
    cout << "x: ";      cin >> x;
    cout << "y: ";      cin >> y;
    
    cout << "max(x, y) = " << max(x, y) << endl;
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
