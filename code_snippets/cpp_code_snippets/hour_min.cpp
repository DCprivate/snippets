// Adding a few minutes to a time
// 	Illustrates ?: operator
//
#include <iostream>
using namespace std;

int main() {
	unsigned int h = 0;
	unsigned int m = 0;
	cout << "Enter the time as hour min: ";
	cin >> h >> m;

	// Add thirty minutes to the time, adjust the hour
	
	unsigned int newh, newm;
	
	// adjust minutes, and use modulo operator (%)
	newm = (m + 30) % 60;

	// Adjust hours if necessary
	newh = newm > m ? h : h + 1;

	// Wrap past midnight. Various ways to do this (pick your favorite)
	if (newh == 24)
	    newh = 0;
	
	cout << "The new time is: " << newh << ":" << newm << endl;
}
