#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) // important base case
        return n;
    else
        //cout << n << ' ';
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 7;
    cout << fibonacci(n) << endl;
    return 0;
}