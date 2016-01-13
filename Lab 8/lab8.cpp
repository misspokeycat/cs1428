//lab8.cpp
//Luke D'Alfonso

#include <iostream>

using namespace std;

int main(){
    const int SIZE = 6;
    float ratings [SIZE];
    const string MOVIES[SIZE] = {"The Matrix", "Fight Club", "Spirited Away",
        "Alien", "Seven Samurai", "Back to the Future"};

    cout << "Please enter a rating for the following movies." << endl;

    for (int i = 0; i < SIZE; i++){
        cout << MOVIES[i] << "\t: ";
        cin >> ratings[i];
    }

    float avg = 0.0;
    for (int i = 0; i < SIZE; i++){
        avg += ratings[i];
    }
    avg = avg / SIZE;

    float maximum = -1.0;
    int maxindex = -1;
    for (int i = 0; i < SIZE; i++){
        if (ratings[i] > maximum){
            maximum = ratings[i];
            maxindex = i;
        }
    }

    float minimum = 10000.0;
    int minindex = -1;
    for (int i = 0; i < SIZE; i++){
        if (ratings[i] < minimum){
            minimum = ratings[i];
            minindex = i;
        }
    }
    cout << endl;
    cout << "Average rating \t: " << avg << endl;
    cout << "Highest rating \t: " << MOVIES[maxindex] << " rated " << maximum << endl;
    cout << "Lowest rating \t: " << MOVIES[minindex] << " rated " << minimum << endl;

    return 0;
}
