#include <iostream>
using namespace std;
int main() {
    int* x = nullptr;
    int y = 10;

    cout << x << ' ' << y << endl;
    // cout << *x << endl; // should crash
    cout << &x << ' ' << &y << endl;

    x = &y;
    cout << *x << endl;

}