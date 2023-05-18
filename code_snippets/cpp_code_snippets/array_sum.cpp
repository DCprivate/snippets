#include <iostream>
using namespace std;

int sum(const int numbers[], int n) {   // Must pass size
    int result = 0;
    for (int i = 0; i < n; ++i)
        result += numbers[i];
    return result;
}

int main() {
    int a[] = {1,2,3,4,5};
    for (int n: a)
        cout << n << ' ';
    cout << endl;
    cout << sum(a, 5) << endl;  // 15
}
