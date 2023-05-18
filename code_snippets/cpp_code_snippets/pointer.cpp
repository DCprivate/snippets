#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int* p = &i;
    cout << *p << " at " << p << endl;
    int j = 2;
    p = &j;
    cout << *p << " at " << p << endl;
}
