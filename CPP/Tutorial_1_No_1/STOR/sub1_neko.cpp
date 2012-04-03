/************************************`
 * <Basics>
 *	1. File: sub1_neko.cpp
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

class Neko{
    private:
        string  name;
    public:
        Neko(string s) {
            name = s;
        }
        
        void show_name() {
            cout << "Name is: " << name << endl;
        }

}; //class Neko

int main( int argc, char *argv[] )
{
    /* vars             */
    //Neko    dora("Boss");
    string  s;
    
    /* Get a name       */
    cout << "Name please: ";
    cin >> s;
    
    /* Create an instance   */
    Neko    dora(s);
    
    /* func             */
    dora.show_name();
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
