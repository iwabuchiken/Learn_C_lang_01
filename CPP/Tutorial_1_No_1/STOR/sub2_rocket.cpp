/************************************`
 * <Basics>
 *	1. File: sub2_rocket.cpp
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

class Rocket{

    /* members          */
    //int     fuel;
    int     velocity;
public:
    /* Constructor: declared    */
    Rocket(int x);
    /* members          */
    int     fuel;
    /* Member funcs     */
    void    accel();

}; //class Rocket

/* Constructor: Defined     */
Rocket::Rocket(int x) : fuel(x), velocity(0) {}

/* Member func: Defined     */
void Rocket::accel()
{
    if (fuel >= 2) {
        /* Change vars      */
        velocity += 2;
        fuel -= 2;
        /* Show data        */
        cout << "Current fuel: " << fuel << endl;
        cout << "Current velocity: " << velocity << endl;
    } else {//if (fuel >= 2)
        /* Show message     */
        cout << "Out of fuel. Can't accelerate" << endl;
    }//if (fuel >= 2)

}//void Rocket::accel()

int main( int argc, char *argv[] )
{
    /* vars             */
    int     n;          /* amount of fuel   */
    cout << "Input the amount of fuel: ";
    cin >> n;
    
    //Rocket(n);      /* Instance of the Rocket class     */
    Rocket rock(n);      /* Instance of the Rocket class     */
    
    /* Accelerate       */
    rock.accel();
    
    /* Accelrate more   */
    while (1) {
        /* If no fuel, break    */
        if (rock.fuel < 1) {
            break;
        }//if (rock.fuel > 0)
        
        /* Accelrate    */
        rock.accel();
    }//while (1)

    
    /* Show data        */
    //cout << rock.velocity << endl;
    //cout << rock.fuel << endl;
    
    return 0;
}

/*
#ifdef D
    printf("[LINE:%d]", __LINE__);
#endif
*/
