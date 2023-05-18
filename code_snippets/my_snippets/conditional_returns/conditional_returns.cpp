#include <iostream>
#include <vector>
#include <random>
using namespace std;

// return greater
int conditional_return(int a, int b) {
    return a > b ? a : b;
}


// return max
int conditional_change(vector<int> v) {

    int max = 0;
    for (int i = 0; i < v.size() - 1; i++) {

        max = v[i] < v[i + 1] ? v[i + 1] : v[i]; 
        // TODO: I don't think a conditional expression is the way to solve this problem
        // try to solve later I guess...
        // right now it returns the last comparison in the vector
    }

    return max;
}


void change(int (&arr)[10]) {
    for (auto i: arr) {
        arr[i] += 1;
    }
}


int main() {

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    for (auto i: arr) {
        cout << i << ' ';
    }
    cout << endl;

    change(arr);

    for (auto i: arr) {
        cout << i << ' ';
    }
    cout << endl;

    //----------------------------------------------
    vector<int> vec;

    for (int i = 0; i < 20; i++) {
        vec.push_back(rand() % 10);
        cout << vec[i] << ' ';
    }
    cout << endl;

    cout << conditional_change(vec) << endl;

    //----------------------------------------------

    int a = 20;
    int b = 10;
    cout << conditional_return(a, b) << endl;


    return 0;
}

