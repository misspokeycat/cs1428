/*  Dalfonso_Luke_F2015_1428_1_PA3.cpp
 *
 *  Author: Luke D'Alfonso
 *  Due Date: 9/23/2015
 *  Programming Assignment Number 3
 *  Fall 2015 - CS 1428 - Section Number 1
 *
 *  Instructor: Husain Gholoom.
 *
 *  *Calculates profit/loss on stock sales, and outupts results to file*
 */
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){

    //Declarations
    const float SERVICE_RATE = 0.015; //The % service charge.
    string firstName; //The first name of the customer.
    string lastName; //The last name of the customer.
    int sharesSold;  //The number of shares sold.
    float purchasePrice; //The price which stocks were bought at.
    float salePrice; //The price which stocks were sold at.
    float investedAmount; //Shares sold * buy price
    float soldAmount; //Shares sold * sale price
    float fee; //Service rate * sold amount
    float saleNet; //Sale price less fees
    float netGain; //Net profit/loss less fees

    //File operations
    ifstream fin;
    fin.open("inFile.txt");

    ofstream fout;
    fout.open("outFile.txt");

    //Input operations
    fin >> firstName >> lastName >> sharesSold >> purchasePrice >> salePrice;

    //Calculations
    investedAmount = sharesSold * purchasePrice;
    soldAmount = sharesSold * salePrice;
    fee = SERVICE_RATE * soldAmount;
    saleNet = soldAmount - fee;
    netGain = saleNet - investedAmount;

    //Output operations
    fout << setprecision(2) << fixed;
    fout << "\t\t\tBuying - selling stocks Report" << endl;
    fout << setw(40) << left << "Client Name:" << firstName << " " << lastName << endl;
    fout << setw(40) << left << "Number of shares sold:" << sharesSold << endl;
    fout << setw(40) << left << "Purchase price of each share:" << '$' << purchasePrice << endl;
    fout << setw(40) << left << "Selling price of each share:" << '$' << salePrice << endl;
    fout << setw(40) << left << "Invested amount: " << '$' << investedAmount << endl;
    fout << setw(40) << left << "Sold amount:" << '$' << soldAmount << endl;
    fout << setw(40) << left << "Service charge:" << '$' << fee << endl;
    fout << setw(40) << left << "Amount received after selling:" << '$' << saleNet << endl;
    fout << endl;
    fout << setw(40) << left << "Gained or Lost = " << '$' << netGain << endl;
    fout << endl;
    fout << "Prepared by D'Alfonso's Brokerage firm";


    fin.close();
    fout.close();
    return 0;
}
