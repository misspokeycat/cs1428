/*  Dalfonso_Luke_F2015_1428_1_PA8.cpp
 *
 *  Author: Luke D'Alfonso
 *  Due Date: 11/30/2015
 *  Programming Assignment Number 8
 *  Fall 2015 - CS 1428 - Section Number 1
 *
 *  Instructor: Husain Gholoom.
 *
 *  *Generates a sales report given data from two files.*
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

struct Record {
    int SalesPersonID; //The ID of a salesperson.
    double saleByQuarter[4]; //The quarterly sales total for the salesperson.
    double totalSales; //The yearly sales total for the salesperson.
};

void getData(Record[]); //Populates record array with values fromm file.
int getLineCount(); //Gets number of lines in employee file.
double salesByQuarter(Record[], int); //Gets the total sales for a given quarter (1-4).
double salesByPerson(Record); //Gets the total number of sales for a given person.
double grandTotal(Record[]); //Gets the total of all sales.
void printReport(Record[]); //Prints all data to console.
void getSalesPersonName(int id); //Reads salespeople file, and prints the name for a given id.
void maxSaleByPerson(Record[]); //Prints the maximum salesperson name, ID, and the amount sold.
void maxSaleByQuarter(Record[]); //Prints the highest earning quarter number and its sales.

int main(){
    Record salesData[getLineCount()]; //Will hold our sales records.
    
    //Not much in main, becuase printReport handles most of the printing.
    getData(salesData);
    printReport(salesData);
    return 0;
}

void getData(Record recs[]){
    ifstream fin;
    fin.open("sales.txt");
    
    //File error handling
    if (!fin){ 
        fin.close();
        cout << "ERROR: Unable to open sales.txt" << endl;
        exit(1);
    }
    
    //Populate the array with data from the file.
    for (int x = 0; x < getLineCount(); x++){
        fin >> recs[x].SalesPersonID >>
            recs[x].saleByQuarter[0] >>
            recs[x].saleByQuarter[1] >>
            recs[x].saleByQuarter[2] >>
            recs[x].saleByQuarter[3];
        recs[x].totalSales = salesByPerson(recs[x]);
    }
};

double totalSalesByQuarter(Record recs[], int quarter){
    double total = 0;
    for (int x = 0; x < getLineCount(); x++){
        total += recs[x].saleByQuarter[quarter-1];
    }
    return total;
}

double salesByPerson(Record rec){
    double totalSales = 0;
    for (int x = 0; x < 4; x++){
        totalSales += rec.saleByQuarter[x];
    }
    return totalSales;
}

void printReport(Record recs[]){
    //Print the heading.
    cout << setw(40) << "Night Ya Night Prime Coffee" << endl;
    cout << setw(46) << "------ Annual Sales Report - 2013 ------" << endl;
    cout << "ID" << setw(9) << "QT1" << setw(9) << "QT2" << setw(9) << "QT3" << setw(9) << "QT4" << setw(9) << "Total" << endl;
    cout << "-----------------------------------------------------" << endl;
    
    //Print the data.
    cout << setprecision(2) << left << fixed;
    for (int x = 0; x < getLineCount(); x++){
        cout << recs[x].SalesPersonID << "\t" << setw(9) <<
            recs[x].saleByQuarter[0] << setw(9) <<
            recs[x].saleByQuarter[1] << setw(9) <<
            recs[x].saleByQuarter[2] << setw(9) <<
            recs[x].saleByQuarter[3] << setw(9) <<
            recs[x].totalSales << endl;
    }
    cout << endl << endl;
    cout << "Total" << "\t" << setw(9) <<
        totalSalesByQuarter(recs, 1) << setw(9) <<
        totalSalesByQuarter(recs, 2) << setw(9) <<
        totalSalesByQuarter(recs, 3) << setw(9) <<
        totalSalesByQuarter(recs, 4) << setw(9) <<
        grandTotal(recs) << endl;
    cout << endl;
    //Due to design, maxSaleByPerson and maxSaleByQuarter print entirely on their own.
    maxSaleByPerson(recs);
    cout << endl << endl;
    maxSaleByQuarter(recs);
    cout << endl << endl;
    cout << "Luke D'Alfonso - CFO" << endl;
    cout << "November - 30 - 2015";
}

void getSalesPersonName(int id){
    ifstream fin;
    fin.open("empNames.txt");
    if (!fin){
        fin.close();
        cout << "ERROR: Unable to read empNames.txt" << endl;
        exit(2);
    }
    while (!fin.eof()){
        int fid;
        string first, last;
        fin >> fid >> first >> last;
        if (fid == id){
            cout << first << " " << last;
            fin.close();
            return;
        }
    }
}

void maxSaleByPerson(Record recs[]){
    int maxindex = -1;
    double maxnum = -1;
    for (int x = 0; x < getLineCount(); x++){
        if (recs[x].totalSales > maxnum){
            maxindex = x;
            maxnum = recs[x].totalSales;
        }
    }
    cout << "Max Sale by Sales Person:" << endl << endl;
    cout << "Sales Person Name: ";
    getSalesPersonName(recs[maxindex].SalesPersonID);
    cout << endl;
    cout << "Sales Person ID = " << recs[maxindex].SalesPersonID << " , \tAmount = $" << recs[maxindex].totalSales << endl;
}
void maxSaleByQuarter(Record recs[]){
    cout << "Max Sale by Quarter:" << endl << endl;
    int maxindex = -1;
    double maxnum = -1;
    for (int x = 1; x <= 4; x++){
        if (totalSalesByQuarter(recs, x) > maxnum){
            maxindex = x;
            maxnum = totalSalesByQuarter(recs, x);
        }
    }
    cout << "Quarter = " << maxindex << " , \tAmount = $" << maxnum;
}

double grandTotal(Record recs[]){
    double total = 0;
    for (int x = 0; x < getLineCount(); x++){
        total += recs[x].totalSales;
    }
    return total;
}

int getLineCount(){
    ifstream fin;
    fin.open("sales.txt");
    //Handles file errors.
    if (!fin){
        fin.close();
        cout << "ERROR: Unable to open sales.txt" << endl;
        exit(1);
    }
    int linecount = 0;

    //Count the number of files in the line.
    string line;
    while(getline(fin, line)){
        linecount++;
    }
    fin.close();
    return linecount;
}