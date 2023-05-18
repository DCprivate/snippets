#include <iostream>
#include "average.h"
//#include "average.h"	// (uncomment to show multiple defines)
using namespace std;

int main()
{
	double v1, v2;
	cout << "Enter first number: ";
	cin >> v1;
	cout << "Enter the second number: ";
	cin >> v2;
	cout << "The average is :" << average(v1, v2);
}
