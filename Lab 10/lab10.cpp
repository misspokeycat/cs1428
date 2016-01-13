//lab10.cpp
//Luke D'Alfonso

#include <iostream>

using namespace std;

//Function prototypes
int perimeter(int, int);
int area(int, int);
void picture(int, int, char);

int main(){
    //Declarations
    int width, height;
    char symbol;

    cout << "Please enter the following" << endl;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    cout << "Desired symbol for picture: ";
    cin >> symbol;

    cout << endl;
    cout << "Perimeter: " << perimeter(height, width) << endl;
    cout << "Area: " << area(height, width) << endl;
    cout << "Picture of your rectangle:" << endl;
    picture(height, width, symbol);
    return 0;
}

//Function definitions
int perimeter (int height, int width){
    return height * 2 + width * 2;
}

int area (int height, int width){
    return height * width;
}

void picture(int height, int width, char symbol){
    for (int x = 0; x < height; x++){
        for (int y = 0 ; y < width; y++){
            cout << symbol;
        }
        cout << endl;
    }
}
