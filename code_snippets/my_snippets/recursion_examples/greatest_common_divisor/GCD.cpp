#include <iostream>
using namespace std;

int gcd(int n1, int n2) {
    int x; // gdc value

    if (n1 == n2){
        return n1;
    }
    else if (n1 > n2)
        return gcd(n1 - n2, n2);
    else
        return gcd(n1, n2 - n1);
}

int main() {
    int x = 120;
    int y = 100;

    cout << gcd(x, y);

    return 0;
}