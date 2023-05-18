#include <iostream>
#include <string>
using namespace std;


void pass_by_value(int x) {
    cout << "In pass_by_value " << &x << endl;
    for (int i = 0; i < 10; i++) {
        x *= 2;
    }
}


void pass_by_ref(int& x) {
    cout << "In pass_by_ref " << &x << endl;
    for (int i = 0; i < 10; i++) {
        x *= 2;
    }
}


int main() {
    int n1 = 10;
    int n2 = 20;

    cout << "Before: " << n1 << ' ' << &n1 << endl;
    pass_by_value(n1);
    cout << "After: " << n1 << ' ' << &n1 << endl << endl;

    cout << "Before: " << n2 << ' ' << &n2 << endl;
    pass_by_ref(n2);
    cout << "After: " << n2 << ' ' << &n2 << endl;
}