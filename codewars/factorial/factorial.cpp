#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int factorial(int n) {
    int total = 1;
    for (int i = n; i > 0; i--) {
       
        total *= i;
        cout << i << ' ' << n << ' ' << total << endl;
    }
    return total;
}

int main() {
    cout << factorial(5) << endl;
}