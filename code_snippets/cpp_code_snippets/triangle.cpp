#include <iostream>
#include <fstream>

using namespace std;

int triangle (const string& filename)
{
	// Open the file
	// Read 3 numbers that represent sides of a triangle
	// Figure out whether it is scalene, isoceles, or equilateral
}

int main() {
	cout << "Enter the file name: ";
	string fname;
	cin >> fname;

	int tri_return = triangle(fname);

	if (tri_return == 1)
		cout << "Triangle is scalene" << endl;
	else if (tri_return == 2)
		cout << "Triangle is isoceles" << endl;
	else if (tri_return == 3)
		cout << "Triangle is equalateral" << endl;
}

