#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool prime(int n) {
    for (int i = 2; i <= n; i++) {
        //cout << i << ' ';
        if (i == n) {
            //cout << "returning true" << endl;
            return true;
        }
        if (n % i == 0) { // is divisible
            //cout << "returning false" << endl;
            return false;
        }
    }
    return 0;
}

int main() {
    int n = 5;
    bool temp;

    for (int i = 3; i <= n; i++) {
        temp = prime(i);
        if (temp == 1) {
            cout << i << " is prime" << endl;
        }
    }
}