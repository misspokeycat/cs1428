//lab12.cpp
//Luke D'Alfonso
#include <iostream>
using namespace std;

struct item {
    string name;
    double cost;
    int quantity;
};

int main(){
    item inv[3];
    int totalQty = 0;
    double totalPrice = 0;
    int minIndex = -1;
    double minPrice = 9999;
    for (int i = 0; i < 3; i++){
        cout << "Product #" << i + 1 << endl;
        cout << "Enter name: ";
        cin >> inv[i].name;

        cout << "Enter cost: ";
        cin >> inv[i].cost;
        cout << "Enter quantity: ";
        cin >> inv[i].quantity;

        totalQty += inv[i].quantity;
        totalPrice += inv[i].cost * inv[i].quantity;

        if (inv[i].cost < minPrice){
            minPrice = inv[i].cost;
            minIndex = i;
        }

        cout << endl;
    }

    cout << "Total number of items\t: " << totalQty << endl;
    cout << "Total value of inventory: $" << totalPrice << endl;
    cout << "Cheapest item\t\t: " << inv[minIndex].name << endl;
    return 0;
}
