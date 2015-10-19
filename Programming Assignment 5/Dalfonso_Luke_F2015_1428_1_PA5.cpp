/*  Dalfonso_Luke_F2015_1428_1_PA5.cpp
 *
 *  Author: Luke D'Alfonso
 *  Due Date: 10/21/2015
 *  Programming Assignment Number 5
 *  Fall 2015 - CS 1428 - Section Number 1
 *
 *  Instructor: Husain Gholoom.
 *
 *  *Calculates "square pairs" between 1 and a number.*
 */
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int limit; //The outer limit for square pairs.
    bool done = false; //Checks whether we terminate program or not.

    cout << "Square numbers are certain pairs of numbers when added together give a square number and"
    << "when subtracted also give a square number.  This program displays all the pairs of numbers.\n";
    while (!done){
        cout << "Enter a Number ---> : ";
        cin >> limit;
        if (limit <= 0){
            cout << "invalid Number , Number must be positive" << endl;
        } else {
            cout << endl;
            cout << "The square pair numbers are :-" << endl;
            cout << "N\tP\tN+P\tP-N" << endl;
            cout << "---------------------------" << endl;
            for (int x = 1; x <= limit; x++){
                for (int y = 0; y <= limit; y++){
                    //If ceil(x) == x, then x is an int.
                    if (ceilf(sqrtf(x+y)) == sqrtf(x+y) && ceilf(sqrtf(y-x)) == sqrtf(y-x)){
                        cout << x << "\t" << y << "\t" << x+y << "\t" << y-x << endl;
                    }
                }
            }
        }
        cout << endl;
        cout << "Would you like to repeat the process for another number?" << endl;
        cout << "Enter Y, y or  N, n ------> ";

        //These lines are used to stop infinite loops from happening if a char is input above.
        cin.clear();
        cin.sync();

        char input = 'a'; //Stores the entered value
        while (input != 'Y' && input != 'y' && input != 'N' && input != 'n'){
            cin >> input;
            if (input == 'N' || input == 'n'){
                done = true;
            } else if (input != 'Y' && input != 'y'){
                cout << "Please enter a valid choice: ";
            }
        }
    }
    cout << "Square numbers is prepared by Luke D'Alfonso" << endl;
    cout << "Game Playing with Computers , INC." << endl;
    cout << "10 - 21 - 2015";
    return 0;
}
