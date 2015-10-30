/*  Dalfonso_Luke_F2015_1428_1_PA6.cpp
 *
 *  Author: Luke D'Alfonso
 *  Due Date: 10/30/2015
 *  Programming Assignment Number 6
 *  Fall 2015 - CS 1428 - Section Number 1
 *
 *  Instructor: Husain Gholoom.
 *
 *  *Performs various array manipulations.*
 */
#include <iostream>

using namespace std;

int main(){
   //Declarations
   char cont = 'Y'; //checks if we continue
   int arrsize; //holds the size of our array

   cout << "This is an array manipulation program." << endl;

   //Populate the array size.
    cout << "Enter the size of the array : ";
    cin >> arrsize;

   while (cont == 'Y' || cont == 'y'){
        cout << "Enter any " << arrsize << " Characters, Digits, Special Symbols :  ";
        char arr[arrsize];  //Will be our main array
        char arrReverseCase[arrsize]; //We'll use this to store the "reverse case" array.
        for (int x = 0; x < arrsize; x++){
            arrReverseCase[x] = '!'; //Filling array with '!' to eliminate randomness.
        }
        cin >> arr;

        //Displays the array.  No for loop needed, it's a char array.
        cout << endl;
        cout << "The Array Contain The following:  " << arr << endl;
        cout << endl;

        //Displays all capital letters.
        int capcount = 0; //Will be used to check if no capital letters.
        for (int x = 0; x < arrsize; x++){
            //Easiest way to check ranges of letters.  Can also use ASCII values.
            if (arr[x] >= 'A' && arr[x] <= 'Z'){
                cout << arr[x] << "  is a Capital Letter" << endl;
                //To save time, we will start building the reverse case array here.
                //ASCII 'A' = 65, and ASCII 'a' = 97, so add 32 for capital to lowercase.
                arrReverseCase[x] = arr[x] + 32;
                capcount++;
            }
        }
        if (capcount == 0) cout << "There are No Capital Letters in this Array" << endl << endl;
        //Displays all lowercase letters.
        int lowcount = 0;  //Will be used to check if no lowercase letters.
        for (int x = 0; x < arrsize; x++){
            //Same as before, just different ranges.
            if (arr[x] >= 'a' && arr[x] <= 'z'){
                cout << arr[x] << "  is a Small Letter" << endl;
                //Just subtract 32 to do lowercase to capital.
                arrReverseCase[x] = arr[x] - 32;
                lowcount++;
            }
        }
        if (lowcount == 0) cout << "There are No Small Letters in this Array" << endl << endl;

        //Displays all numbers.
        int digitcount = 0;  //Will be used to check if no numbers.
        for (int x = 0; x < arrsize; x++){
            //Same as before, just different ranges.
            if (arr[x] >= '0' && arr[x] <= '9'){
                cout << arr[x] << "  is a Digit" << endl;
                //We will copy the digit exactly here.
                arrReverseCase[x] = arr[x];
                digitcount++;
            }
        }
        if (digitcount == 0) cout << "There are No Digits in this Array" << endl << endl;

        //Displays all special symbols.
        int sscount = 0;  //Will be used to check if no special symbols.
        for (int x = 0; x < arrsize; x++){
            //This is a bit tricky, because special symbols occupy many ranges.
            //You can still do range checks, but this is a neat trick:
            //If we never stored it in our reverse array, it must be a special symbol.
            if (arrReverseCase[x] == '!'){
                cout << arr[x] << " is a Special Symbol" << endl;
                arrReverseCase[x] = arr[x];
                sscount++;
            }
        }
        if (sscount == 0) cout << "There are No Special Symbols in this Array" << endl;
        cout << endl;

        //Displays the array in reverse.
        cout << "The Array in Reverse Order    ";
        for (int x = 0 ; x < (arrsize / 2) + 1; x++){
            swap(arr[x], arr[arrsize-(x+1)]);
            swap(arrReverseCase[x], arrReverseCase[arrsize-(x+1)]); //We'll flip the reverse case array as well.
        }
        cout << arr << endl;
        cout << endl;

        //Displays the array case flipped.
        //We already did this above, so it's just a cout.
        cout << "The Array After Converting Capital Letters to Small Letters and Vice Versa\t" << arrReverseCase << endl;
        cout << endl;

        //Displays the array, rotated 2 to the left.
        cout << "The Array After Rotating 2 position to the left  ";
        for (int x = 0; x < 2; x++){
            //This code moves the first element in the array to the back.
            for (int i = 1; i < arrsize; i++){
                swap(arrReverseCase[i-1], arrReverseCase[i]);
            }
        }
        cout << arrReverseCase << endl;
        cout << endl;

        //Finally, check to repeat.
        cout << "Would you like to Check Another Array\n\n";
        cout << "Enter Y or y FOR YES" << endl;
        cout << "OR" << endl;
        cout << "N or n FOR NO ------->\t";
        cin >> cont;
        while (cont != 'Y' && cont != 'y' && cont != 'N' && cont != 'n'){
            cout << "Invalid Character , Enter Y , or y, or N , or n   --- > ";
            cin >> cont;
        }
        cout << endl;
   }
   cout << "Program is Terminated" << endl;
   cout << endl;
   cout << "This Algorithm is designed and Implemented by" << endl;
   cout << "Luke D'Alfonso - Analysis Data Group" << endl;
   cout << "October 30 - 2015";
   return 0;
}
