//lab5.cpp
//Luke D'Alfonso
#include <iostream>

using namespace std;

int main(){
    const int STRENGTH = 18;
    const int DEXTERITY = 19;
    const int INTELLIGENCE = 12;
    char attack;

    cout << "It's your turn to attack!" << endl;
    cout << "Enter A <Attack>, S <Sneak Attack>, M <Magic Missiles>:" << endl;
    cin >> attack;

    switch (attack){
    case 'A':
        cout << "You attack with great force dealing " << (STRENGTH) << " damage!!";
        break;
    case 'S':
        //The long calculation acts like an if statement
        cout << "They never saw it coming - you deal " << (STRENGTH * 3 * (DEXTERITY>18) + STRENGTH * 2 * (DEXTERITY<=18)) << " damage!!" << endl;
        break;
    case 'M':
        cout << "Orbs of pure energy arch from your fingertips dealing " << (30 + INTELLIGENCE) << " magic damage!" << endl;
        break;
    default:
        cout << "ERROR: Invalid Input"; << endl;
    }
    return 0;
}
