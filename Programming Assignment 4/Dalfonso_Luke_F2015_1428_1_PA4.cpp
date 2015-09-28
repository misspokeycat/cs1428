/*  Dalfonso_Luke_F2015_1428_1_PA3.cpp
 *
 *  Author: Luke D'Alfonso
 *  Due Date: 10/7/2015
 *  Programming Assignment Number 4
 *  Fall 2015 - CS 1428 - Section Number 1
 *
 *  Instructor: Husain Gholoom.
 *
 *  *Calculates parking fee given time parked and type of vehicle*
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

	//Declarations
	const float INIT_CAR_RATE = 1.00;
	const float INIT_BUS_RATE = 3.00;
	const float INIT_TRUCK_RATE = 2.00;
	const float FINAL_CAR_RATE = 1.75;
	const float FINAL_BUS_RATE = 3.25;
	const float FINAL_TRUCK_RATE = 2.75;

	char vehicleType;
	int hoursParked;
	int minutesParked;
	float selectedInitRate = -1.0;
	float selectedFinalRate = -1.0;
	float amountDue = 0.0;

	//Console Input
	cout << "This program calculates and prints a parking fees for parking company" << endl;
	cout << endl;
	cout << "This program is written by Luke D'Alfonso";
	cout << endl << endl;
	cout << "Enter Type of Vehicle :"
		<< "\n C or c for Car"
		<< "\n B or b for Bus"
		<< "\n T or t for Truck ) : \t\t";
	cin >> vehicleType;
	cout << endl << endl;
	cout << "Enter Number of Hours Parked ( 1-23 ) : ";
	cin >> hoursParked;
	cout << endl << endl;
	cout << "Enter Number of Minutes Parked  : ";
	cin >> minutesParked;

	//Switch for vehicle type
	switch(vehicleType){
		case 'C':
		case 'c':
			selectedInitRate = INIT_CAR_RATE;
			selectedFinalRate = FINAL_CAR_RATE;
			break;
		case 'B':
		case 'b':
			selectedInitRate = INIT_BUS_RATE;
			selectedFinalRate = FINAL_BUS_RATE;
			break;
		case 'T':
		case 't':
			selectedInitRate = INIT_TRUCK_RATE;
			selectedFinalRate = FINAL_TRUCK_RATE;
			break;
		default:
			break;
	}
	if (selectedInitRate != -1.0){ //if rate is 1.0, switch failed
		if (minutesParked < 59 && minutesParked > 0){
			if (hoursParked < 24 && hoursParked > 0){
				float totalTime = (float)minutesParked / 60 + (float)hoursParked;
				if (totalTime > 2.0){
					amountDue += selectedFinalRate * (totalTime-2.0);
					totalTime = 2.0;
				}
				amountDue += selectedInitRate * totalTime;
				cout << setprecision(2) << fixed;
				cout << "Your car has been parked for "
					<< hoursParked << " hour(s) and "
					<< minutesParked << " minute(s)";
				cout << endl << endl;
				cout << "Amount Due \t=\t $" << amountDue;
				cout << "\n\n\n\n";
			}
		}
	}
	cout << "D'Alfonso's\tParkWiz Inc.";
}
