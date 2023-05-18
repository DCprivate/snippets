#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr [11] = {1,2,3,10,15,20,25,50,67,73,99};
    // use vector instead of array
    for (auto i: arr) {
        cout << i << " ";
    }
}

