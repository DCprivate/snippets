#include <iostream>
#include <string>
using namespace std;

void collatz(int n) {
    if (n != 1) {
        cout << n << endl;
        if (n % 2 == 0)
            return collatz(n/2);
        else 
            return collatz(3*n+1);
    }
   else
       cout << 1 << endl;
}

int main(int argc, char** argv) {
    int n;
    if (argc == 2) {
        n = stoi(argv[1]);
        collatz(n);
    }
}