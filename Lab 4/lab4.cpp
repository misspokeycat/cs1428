//lab4.cpp
//Luke D'Alfonso
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));

    int random = rand() % 10 + 1;
    int guess;
    //cout << "NINJA DEBUGGING CODE " << random  << endl;
    cout << "Guess the number game" << endl;
    cout << "Pick a number 1 - 10 : ";
    cin >> guess;
    if (guess < 1 || guess > 10){
        //return
    }
    else {
        if (guess == random){
            cout << "\nThe computer selected " << random << ".\nYou win!";
        }
        else {
            if (guess < random) cout << "The secret number is larger than " << guess << endl;
            else cout << "The secret number is smaller than " << guess << endl;
            cout << "Try again : ";
            cin >> guess;
            if (guess < 1 || guess > 10){
                //return
            }
            else {
                if (guess == random) cout << "\nThe computer selected " << random << ".\nYou win!";
                else cout << "The computer selected " << random << ".\nYou lose!";
            }
        }
    }
    return 0;
}
