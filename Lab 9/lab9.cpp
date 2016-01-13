//lab9.cpp
//Luke D'Alfonso

#include <iostream>
using namespace std;

void printMenu();
int getMenuChoice();
char getLoopChoice();
void printTriangle();
void printSquare();

int main(){
    char cont = 'y';
    while (cont == 'y' || cont == 'Y'){
        printMenu();
        if(getMenuChoice() == 1){
            printTriangle();
        } else {
            printSquare();
        }
        cont = getLoopChoice();
    }
    return 0;
}

void printMenu(){
    cout << "1. Print Triangle" << endl;
    cout << "2. Print Square" << endl;
}

int getMenuChoice(){
    int choice = -1;
    while (choice != 1 && choice != 2){
        cout << "Enter 1 or 2: ";
        cin >> choice;
    }
    return choice;
}

char getLoopChoice(){
    char cont = 'a';
    while (cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N'){
        cout << "Continue? ('Y' or 'N'): ";
        cin >> cont;
    }
    return cont;
}

void printTriangle(){
    for (int x = 1; x <= 10; x++){
        for (int y = 0; y < x ; y++){
            cout << '#';
        }
        cout << endl;
    }
}

void printSquare(){
    for (int x = 1; x <= 10; x++){
        for (int y = 0; y < 10 ; y++){
            cout << '#';
        }
        cout << endl;
    }
}
