// Luke D'Alfonso
// 9/2/2015
// Lab 1

#include <iostream>
using namespace std;

int main()
{
	string firstName = "Luke", lastName = "D'Alfonso";
	char middleInitial = 'J';
	const int MARSHMALLOWS = 9001;

    //Note that you can break strings over multiple lines:
	cout << "My name is " << firstName << " " << middleInitial << ". "
	    << lastName << ", and I can fit " << MARSHMALLOWS
        << " marshmallows in my mouth." << endl;

	return 0;
}
