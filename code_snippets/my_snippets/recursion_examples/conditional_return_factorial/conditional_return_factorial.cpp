#include <iostream>

using namespace std;

long long factorial(int n) {
    return n <= 1 ? 1 : n*factorial(n-1);
}   

int main(){
    const int FACTORIAL = 21; // 21 wraps on long long

    for (int i=0; i <= FACTORIAL; i++) {
        cout << i << " : " << factorial(i) << endl;
    }

    return 0;
}

