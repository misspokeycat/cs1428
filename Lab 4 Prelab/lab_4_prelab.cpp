// Lab 4 Pre-Lab

// The following is a simple dice roller for a table top game. 
// I have given you the code to randomly generate a number.
// Don't worry about fully understanding this code
// as you will not be tested over it. 

// Finish the program by adding requested code marked "ADD HERE"

#include <iostream>
#include <ctime>   // for seeding rand
#include <cstdlib> // C standard library

using namespace std;

int main()
{

        int random_number;

        // seeds rand (needed for getting random numbers)
        srand(time(NULL));

        // randomly generates a number 1 - 20 inclusively 
        random_number = rand() % 20 + 1;

        cout << "You roll a " << random_number << ": ";
        

        // ADD HERE - write an IF statement that prints "CRITICAL HIT!!" 
        // if the user rolls a 20


        // ADD HERE - write an ELSE IF statement that prints "Attack Strikes" 
        // if the user rolls between 12 and 19 inclusive.


        // ADD HERE - write an ELSE statement that prints "Attack Misses" 
        // for any other roll


    return 0;
}