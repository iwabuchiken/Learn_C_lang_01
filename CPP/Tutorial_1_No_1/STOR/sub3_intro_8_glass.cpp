/************************************`
 * <Basics>
 *	1. File: sub3_intro_8_glass.cpp
 *	2. Author: Iwabuchi Ken				*
 *	3. Date: 20120403_071027
 * <Aim>
 * 	1.
 * <Usage>
 *	1. Execute the program			*
 * <Source>
 * 	1. 
 * <Related>
 * 	1.
 * <Others>
 * <Description of the program>
 * 	1. 
 ************************************/

#include <iostream>

using namespace     std;
/* Class: Defined   */
class Glass{
    int     content;
public:
    /* Constructor      */
    Glass() : content(10){}
    /* Funcs            */
    void output() { content -= 2;}
    void show_data();
    
}; //class Glass

void Glass::show_data() {
        cout << "Content: " << content
                << endl;
}//void Glass::show_data()

int main( int argc, char *argv[] )
{
    /* vars             */
    Glass   glass;
    
    /* Show data        */
    glass.show_data();
    /* Output           */
    glass.output();
    cout << "Output => Done." << endl;
    /* Show data        */
    glass.show_data();
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
