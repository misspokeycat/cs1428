// Pre-Lab 7

// Add a DO-WHILE to implement a menu to repeat the game until the user
// indicates they want to terminate the program.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string user_selection; // user choice (rock, paper, scissors)
    string comp_selection; // computer choice (rock, paper, scissors)
    int comp_int;          // computer choice as an integer
    int user_int;          // user choice as an integer
    bool flag;             // error flag checks for invalid input

    srand(time(NULL));     // seeds random number generator

    // ADD HERE - start loop here

    // game menu
    cout << "Welcome to my rock, paper, scissors game." << endl;
    cout << "please type \"rock\", \"paper\", or \"scissors\""
         << endl;
    cin >> user_selection;

    // computer randomly picks a number 0-2
    comp_int = rand() % 3;

    // set error flag to false
    flag = false;

    // convert users choice to 0, 1 or 2 ( 0 = rock, 1 = paper, 2 = scissors)
    if(user_selection == "rock"){
        user_int = 0;
    }else if (user_selection == "paper"){
        user_int = 1;
    }else if (user_selection == "scissors"){
        user_int = 2;
    }else{
        // input is invalid. set error flag to true
        flag = true;
    }

    // computer's selection is changed from an integer to a string.
    // (rock, paper, or scissors)
    if(comp_int == 0){
        comp_selection = "rock";
    }else if (comp_int == 1){
        comp_selection = "paper";
    }else{
        comp_selection = "scissors";
    }

    // if error flag is true, input is invalid, otherwise calculate the winner
    // and print results to the screen.
    if(flag){
        cout << "Invalid input. Note that input is case sensitive." << endl;
    }else if(user_int == comp_int){
        cout << user_selection << " ties with " << user_selection << "!"
             << endl;
    }else if(user_int == (comp_int + 1) % 3){
        cout << "You WIN! " << user_selection << " beats " << comp_selection
             << endl;
    }else{
        cout << "You Lose. " << user_selection << " loses to " << comp_selection
             << endl;
    }

    // ADD HERE - prompt user if they want to play the game again

    // ADD HERE - End loop here

    return 0;
}
