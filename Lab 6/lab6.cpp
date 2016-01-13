//lab6.cpp
//Luke D'Alfonso
#include <iostream>;
using namespace std;

int main(){
    int number = 0;
    int total = 1;

    cout << "Enter a number to find its factorial: ";
    cin >> number;

    if (number <= 12 && number >=0){
        cout << "!" << number << " = ";
        if (number != 0){
            for (int x=1; x<=number; x++){
                total *= x;
                cout << x;
                if (number != x){
                     cout << " * ";
                }
            }
            cout << " = " << total;
        } else {
            cout << "1"; // factorial 0
        }
    }
    else {
        cout << "ERROR: Valid numbers are from 0 to 12";
    }
    return 0;
}
