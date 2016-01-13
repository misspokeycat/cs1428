//Lab Final
//Luke D'Alfonso, Section 3
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Prototypes
double hemiSphereVolume();
char sumIsNegative(int, int);
double arrayProduct(double [], const int);
void createPerson(string &, int &);

int main(){
    cout << "########## Function 1 ##########" << endl << endl;
    double volume = hemiSphereVolume();
    cout << "The volume of the hemiSphere is: " << volume << endl << endl;

    cout << "########## Function 2 ##########" << endl << endl;
    cout << "1 + (-2) is negative: " << sumIsNegative(1, -2) << endl;
    cout << "10 + (-8) is negative: " << sumIsNegative(10, -8) << endl << endl;

    cout << "########## Function 3 ##########" << endl << endl;
    cout << setprecision(10); //Otherwise arr2's product is truncated
    const int ARRSIZE1 = 3;
    double arr1[ARRSIZE1] = {3.5, 5.75, 7};
    cout << "The product of array [3.5, 5.75, 7] : " << arrayProduct(arr1, ARRSIZE1) << endl;

    const int ARRSIZE2 = 5;
    double arr2[ARRSIZE2] = {3.5, 5.75, 7, 12.5, 6};
    cout << "The product of array [3.5, 5.75, 7, 12.5, 6] : " << arrayProduct(arr2, ARRSIZE2) << endl << endl;

    cout << "########## Function 4 ##########" << endl << endl;
    string name;
    int age;
    createPerson(name, age);
    cout << "Variables printed in main: " << name << " " << age;
    return 0;
}

//Functions
double hemiSphereVolume(){
    const double PI = 3.14159;
    double radius;
    cout << "Enter a radius: ";
    cin >> radius;
    double volume = (2.0 / 3.0) * PI * powf(radius, 3);
    return volume;
}

char sumIsNegative(int a, int b){
    if (a + b < 0){
        return 'Y';
    } else {
        return 'N';
    }
}

double arrayProduct(double arr[], const int SIZE){
    double prod = arr[0];
    for (int x = 1; x < SIZE; x++){
        prod *= arr[x];
    }
    return prod;
}

void createPerson(string &name, int &age){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    return;
}
