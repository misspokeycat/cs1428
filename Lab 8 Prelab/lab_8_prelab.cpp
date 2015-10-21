// Lab 8 Pre-Lab

// Program takes 5 numbers from a user (from console), stores them into an
// array, and then prints them to the screen (on the same line).

// Add code to complete this program. You only need to add code where indicated
// by "ADD HERE".

#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;  // size of array

	// ADD HERE - create an array of integers that will hold 5 integers.
	int arr [SIZE];

	cout << "please enter 5 integers : " << endl;

	// For loop takes 5 integers from user and stores them in the array
	for (int i = 0 ; i < SIZE ; i++)
	{
		// ADD HERE - take user's input and store it in the array you created
		cin >> arr[i];

	}

	// ADD HERE - Write a for loop to print the array to the screen
	for (int i = 0 ; i < SIZE ; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
