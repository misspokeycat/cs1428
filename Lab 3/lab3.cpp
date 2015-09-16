//Luke D'Alfonso
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("student_data.txt");

    ofstream fout;
    fout.open("averages.txt");
    fout << "Name Year Average";

    string name;
    float year, gr1, gr2, gr3, avg;

    for (int x=0; x<3; x++){
        fin >> name >> year >> gr1 >> gr2 >> gr3;
        avg = (gr1+gr2+gr3)/3.0;

        fout << "\n" << name << " " << year << " " << avg;
    }

    //Probably should say to averages.txt, but w/e
    cout << "Data written to student_data.txt";

    fin.close();
    fout.close();
    return 0;
}
