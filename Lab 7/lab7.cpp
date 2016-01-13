//lab7.cpp
//Luke D'Alfonso

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main (){
    srand(time(NULL));
    //Declarations
    int user_health = 100;
    int zombie_health = 100;
    char choice;
    int damage = 0;

    cout << "Welcome.....to DIE!" << endl;

    do {
        cout << "Your enemy is at " << zombie_health <<  " health." << endl;
        cout << "You are at " << user_health << " health." << endl;
        cout << endl;
        cout << "CHOOSE YOUR ATTACK!  (A = Melee, D = Demi-Magic) : ";
        cin >> choice;
        bool valid = false;
        switch (choice){
        case 'A':
        case 'a':
            cout << "<MELEE ATTACK>" << endl;
            damage = 12 + (rand() % 10 + 1);
            valid = true;
            break;
        case 'D':
        case 'd':
            cout << "<DEMI-MAGIC>" << endl;
            damage = zombie_health * ((rand() % 3 + 3 ) * .1);
            valid = true;
            break;
        default:
            cout << "That's not an attack!" << endl;
       }
       if (valid){
           zombie_health -= damage;
           cout << "The zombie takes " << damage << " damage!" << endl;
       }
       if (zombie_health > 0){
            damage = 15 + (rand() % 10 + 1);
            user_health -= damage;
            cout << "Your foe strikes you for " << damage << " damage!" << endl;
       }
       cout << endl;
   } while (user_health > 0 && zombie_health > 0);
   if (zombie_health <= 0){
       cout << "The zombie dies!" << endl << "A WINNER IS YOU";
   } else {
       cout << "YOU DEAD" << endl << "GAME OVER";
   }
}
