// Lab 2
// Luke D'Alfonso

#include <iostream>

using namespace std;

int main()
{
    //Declarations
    const int CONVERSION = 703;
    string name;
    float weight, height;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << "What is your total weight (lbs.)?" << endl;
    cin >> weight;
    cout << "What is your height (inches) [1 foot = 12 inches]?" << endl;
    cin >> height;

    float BMI = (weight/(height*height))*CONVERSION;
    cout << name << "'s BMI is " << BMI;
    return 0;
}
