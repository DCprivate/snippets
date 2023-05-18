#include <iostream>


int main() {

    int arr[1000000000];

    for (auto i: arr) { 
        std::cout << i << ' ';
    }

    int arr2[10000];

    for (auto i: arr2) { 
        std::cout << i << ' ';
    }

}

//(*ptrToObj).function();
//ptrToObj->function();
