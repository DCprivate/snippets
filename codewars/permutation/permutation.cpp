#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int factorial(int n) {
    int total = 1;
    for (int i = n; i > 0; i--) {    
        total *= i;
    }
    return total;
}

// p(n, k) = n! / (n-k)!
int permutation(int n, int k) {
    cout << factorial(n) << ' ' << factorial(n-k) << endl;
    return factorial(n) / factorial(n-k);
}

int main() {
    cout << permutation(4, 4) << endl;
}