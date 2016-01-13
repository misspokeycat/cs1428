//lab11.cpp
//Luke D'Alfonso

#include <iostream>

using namespace std;

//function prototypes
double getAverage(double []);
void applyCurve(double [], double);
int getHighest(double []);

int main(){
    //definitions
    const int SIZE = 5;
    double grades[SIZE];
    double average;
    double curve;

    cout << "Input grades: ";
    for (int i = 0; i < SIZE; i++){
        cin >> grades[i];
    }
    cout << endl;

    cout << "Grades before curve: " << endl;
    for (int i = 0; i < SIZE; i++){
        cout << grades[i] << endl;
    }
    cout << endl;

    average = getAverage(grades);
    cout << "The average of these grades is: " << average << endl << endl;

    curve = (100 - grades[getHighest(grades)])/2;
    applyCurve(grades, curve);

    cout << "Grades after curve:" << endl;
    for (int i = 0; i < SIZE; i++){
        cout << grades[i] << endl;
    }
    cout << endl;

    cout << "The average of these grades is: " << getAverage(grades) << endl << endl;
    cout << "The highest grade earned after the curve is: " << grades[getHighest(grades)];
    return 0;
}

//function definitions
double getAverage(double grades[]){
    double avg = 0;
    for (int i = 0; i < 5; i++){
        avg += grades[i];
    }
    avg = avg / 5;
    return avg;
}

void applyCurve(double grades[], double curve){
    for (int i = 0; i < 5; i++){
        grades[i] += curve;
    }
}

int getHighest(double grades[]){
    double highest = -1;
    int index = -1;
    for (int i = 0; i < 5; i++){
        if (grades[i] > highest){
            highest = grades[i];
            index = i;
        }
    }
    return index;
}
