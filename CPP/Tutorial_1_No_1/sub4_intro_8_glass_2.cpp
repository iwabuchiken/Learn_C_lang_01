/************************************`
 * <Basics>
 *	1. File: sub4_intro_8_glass_2.cpp
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
class Glass2{
    int     content;
public:
    /* Constructor      */
    //Glass2() : content(10){}
    Glass2(int x);
    
    /* Funcs            */
    void output() { content -= 2;}
    void show_data();
    
}; //class Glass2

/* Constructor: Defined */
Glass2::Glass2(int x) : content(x){}

/* Func: Defined        */
void Glass2::show_data() {
        cout << "Content: " << content
                << endl;
}//void Glass2::show_data()

int main( int argc, char *argv[] )
{
    /* vars             */
    //Glass2   glass;
    Glass2      glass(15);
    int         ans;    /* input answer */
    int         loop = 1;   /* flag for while loop  */
    
    /* Show data        */
    glass.show_data();
    /* Output           */
    glass.output();
    cout << "Output => Done." << endl;
    /* Show data        */
    glass.show_data();
    
    /* Input choice     */
    while (loop) {        
        /* Ask if continue  */
        cout << "Continue? (1:yes 0:no): ";
        cin >> ans;
        if (ans == 0) {
            break;
        } else if (ans == 1) {//if (ans == 0)
//            continue;
        } else {//if (ans == 0)
            cout << "Unknown choice: " << ans << endl;
            continue;
        }//if (ans == 0)
        
        /* Output           */
        glass.output();
        cout << "Output => Done." << endl;
        /* Show data        */
        glass.show_data();
        
    }//while (loop)

//        cout << "Continue? (1:yes 0:no): ";
//        cin >> ans;
//        cout << "Your choice: " << ans << endl;
//        cout << ans + 1 << endl;
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
