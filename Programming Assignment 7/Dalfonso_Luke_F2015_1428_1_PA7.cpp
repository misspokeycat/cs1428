/*  Dalfonso_Luke_F2015_1428_1_PA7.cpp
 *
 *  Author: Luke D'Alfonso
 *  Due Date: 11/9/2015
 *  Programming Assignment Number 7
 *  Fall 2015 - CS 1428 - Section Number 1
 *
 *  Instructor: Husain Gholoom.
 *
 *  *Returns the day number of a given date for the specified year.*
 */
#include <iostream>
#include <ctime>

using namespace std;

//Function Prototypes
bool validDay(int day);
bool validMonth(int month);
bool validYear(int year);
bool isLeapYear(int year);
int daysInMonth(int month, int year);
string nameOfMonth(int month);
int numberOfDays(int day, int month, int year);

int main(){
    //Declarations
    char cont = 'Y'; //whether or not to continue or not
    int day, month, year; //the day, month, and year input by the user

    cout << "This C++ program prints the day number of the year,"
    << endl << "given the date in the form of month, then day,"
    << endl << "then year" << endl << endl;

    while (cont == 'Y' || cont == 'y'){
        cout << "Enter date in the form: month day year:" << endl << endl;
        cout << "Enter month\t";
        cin >> month;
        //Checks for valid day, month, and year.
        if (validMonth(month)){
            cout << "Enter day\t";
            cin >> day;
            if (validDay(day)){
                cout << "Enter year\t";
                cin >> year;
                if (validYear(year)){
                    cout << endl;

                    //Displays day of year
                    cout << nameOfMonth(month) << " - " << day << " - " << year << endl;

                    //Main function call;
                    int dayNumber= numberOfDays(day, month, year);
                    cout << "Is day number " << dayNumber << " of the year " << year << endl;
                } else {
                    cout << year << " is an invalid year number"<< endl;
                }
            } else {
                cout << day << " is an invalid day number" << endl;
            }
        } else {
            cout << month << " is an invalid month number" << endl;
        }
        //Check to repeat.
        cout << "Try another date Y/n ---> ";
        cin >> cont;
        while (cont != 'Y' && cont != 'y' && cont != 'N' && cont != 'n'){
            cout << "Invalid choice - enter y/n> ";
            cin >> cont;
        }
        cout << endl;
    }
    cout << endl;
    cout << "Program is terminated" << endl;
    cout << "Luke D'Alfonso - November - 9 - 2015";
    return 0;
}

//Returns true if valid day
bool validDay(int day){
    return (day > 0 && day <= 31);
}

//Returns true if valid month
bool validMonth(int month){
    return (month > 0 && month <= 12);
}

//Returns true if year between current year and 0 A.D.
bool validYear(int year){
    //This gets the local time, which we can get the current year from.
    time_t t = time(NULL);
	tm* timePtr = localtime(&t);

    //The year is actually returned as the number of years since 1900, so add 1900.
    return (year > 0 && year <= (timePtr->tm_year + 1900));
}

//Returns true if it is a leap year
bool isLeapYear(int year){
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

//Returns the number of days in a month in a given year
int daysInMonth(int month, int year){
    if (month == 2){
        if(isLeapYear(year)){
            return 29;
        } else {
            return 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11){
        return 30;
    } else {
        return 31;
    }
};

//Returns the name of a month
string nameOfMonth(int month){
    switch (month){
    case 1:
        return "January";
    case 2:
        return "February";
    case 3:
        return "March";
    case 4:
        return "April";
    case 5:
        return "May";
    case 6:
        return "June";
    case 7:
        return "July";
    case 8:
        return "August";
    case 9:
        return "September";
    case 10:
        return "October";
    case 11:
        return "November";
    case 12:
        return "December";
    }
};

//Returns the day of any given year.
int numberOfDays(int day, int month, int year){
    int dayCount = 0;
    for (int i = 1; i < month; i++){
        dayCount += daysInMonth(i, year);
    }
    dayCount += day;
    return dayCount;
};
