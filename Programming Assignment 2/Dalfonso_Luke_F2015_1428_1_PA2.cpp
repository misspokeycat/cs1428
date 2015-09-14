/*  Dalfonso_Luke_F2015_1428_1_PA2.cpp
 *
 *  Author: Luke D'Alfonso
 *  Due Date: 9/16/2015
 *  Programming Assignment Number 2
 *  Fall 2015 - CS 1428 - Section Number 1
 *
 *  Instructor: Husain Gholoom.
 *
 *  *Caulculates property tax given assessed value and property tax rate*
 */
#include <iostream>
#include <iomanip> //for decimal formatting
using namespace std;

int main(){
    //Declarations
    const float TAX_PERCENTAGE = 0.92; //The hardcoded tax percentage of 92%.
    float assessed; //User input assessed value of the property
    float taxRate; //User input tax rate
    float taxableAmount; //Calculated taxable amount
    float propertyTax; //Calculated property tax


    cout << "The function of this program to calculate the property tax. Property" << endl;
    cout << "tax is calculated on 92% of the assessed value of the property. For" << endl;
    cout << "example , if the assessed value of the property is $250000.00 , and" << endl;
    cout << "the property tax rate is $1.05 for each $100.00 of the assessed value," << endl;
    cout << "then the property tax is on $230000.00." << "\n\n";

    cout << "Enter the assessed value of the property : ";
    cin >> assessed;

    cout << "\n" << "Enter the property tax rate for each $100.00 : ";
    cin >> taxRate;

    taxableAmount = TAX_PERCENTAGE * assessed;
    propertyTax = taxableAmount * (taxRate/100);

    //This formats the decimal output to display 2 digits after the decimal point.
    cout << setprecision(2) << fixed;

    cout << "\n\n\n";
    cout << "The Assessed Value of the Property :     $" << assessed << endl;
    cout << "The Property Tax Rate for each $100.00 : " << taxRate << " % per $100.00" << endl;
    cout << "Taxable Amount :                         $" << taxableAmount << endl;
    cout << "Property Tax :                           $" << propertyTax << endl;



    cout << "\n\n\n\n" << "Prepared by: D'Alfonso, Luke - Accountant" << endl;
    cout << "S.P. Financial Services .";
    return 0;
}
