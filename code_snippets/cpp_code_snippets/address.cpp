#include <iostream>
using namespace std;

void test_address (int a) {
	cout << "In Test_Address" << endl;
	cout << "	" << "address of a: " << &a << endl;
}

void call_test_a (int a) {
	cout << "In Call_test" << endl;
	cout << "	" << "address of a: " << &a << endl;
	test_address (a);
}


int main() {
	int a = 0;
	cout << "Main: " << endl;
	cout << "	" << "address of a: " << &a << endl;
	test_address(a);
	call_test_a (a);
}
