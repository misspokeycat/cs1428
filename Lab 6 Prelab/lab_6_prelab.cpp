// Lab 6 Pre-Lab

// Finish the following program which adds up all integers from 0 to
// the user's given number inclusively using a FOR loop. The total should be
// assigned to the variable 'total'.

#include <iostream>
using namespace std;


int main()
{
    int number;
    int total;

    cout << "Enter a positive integer to find the summation of"
         << " all numbers from 0 to the given number." << endl;
    cin >> number;

    // TODO - Add your code here
    total = 0;
    for (int x = 0; x <= number; x++) total += x ;




    cout << "Total : " << total << endl;

    return 0;
}
