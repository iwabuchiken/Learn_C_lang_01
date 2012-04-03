/************************************`
 * <Basics>
 *	1. File: sub5_intro_15_extend.cpp
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
#include <string>

using namespace     std;
/* Class: Defined   */
class Art
{
private:

public:
    void show_message() {
        cout << "I am an Art" << endl;
    }//void show_message()

}; //class Art

class Math : public Art
{
private:

public:
    void show_message(string message) {
        cout << message << endl;
    }//void show_message()
}; //class Math : public Art
int main( int argc, char *argv[] )
{
    /* vars             */
    Math    obj;
    
    /* Actions          */
    obj.show_message();
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
