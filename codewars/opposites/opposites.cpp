#include <iostream>

using namespace std;
// THIS IS NOT HOW YOU DO IT BTW :)
bool func(int f1, int f2) {
    if ((f1+f2) % 2 == 0) {
        return true;
    }
    return false;
}

int main() {
    int f1 = 6;
    int f2 = 1;
    cout << func(f1, f2) << endl;
}

// bool lovefunc(int a, int b) {
//      return (a + b) % 2;
// }
