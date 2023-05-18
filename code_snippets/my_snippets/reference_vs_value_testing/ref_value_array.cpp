#include <iostream>
#include <string>
using namespace std;


void pass_by_value(int a[]) {
    unsigned int size = sizeof(a) / sizeof(a[0]);
    cout << sizeof(a) << ' ' << sizeof(a[0]) << endl;
    cout << "Size in pass_by_value: " << size << endl;
    cout << "In pass_by_value " << &a << endl;
    for (int i = 0; i < size; i++) {
        a[i] *= 2;
    }
}


void pass_by_ref(int (&a)[10]) {
    unsigned int size = sizeof(a) / sizeof(a[0]);
    cout << sizeof(a) << ' ' << sizeof(a[0]) << endl;
    cout << "Size in pass_by_ref: " << size << endl;
    cout << "In pass_by_ref: " << &a << endl;
    for (int i = 0; i < size; i++) {
        a[i] *= 3;
    }
}


int main() {
    const int SIZE = 10;
    int arr_val[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int arr_ref[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    // before
    cout << "Before: " << arr_val << ' ' << &arr_val << endl;
    cout << "Size: " << sizeof(arr_val) / sizeof(arr_val[0]) << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr_val[i] << ' ';
    }
    cout << endl;

    pass_by_value(arr_val);

    // after
    cout << "After: " << arr_val << ' ' << &arr_val << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr_val[i] << ' ';
    }

    cout << endl << endl;

    // before
    cout << "Before: " << arr_ref << ' ' << &arr_ref << endl;
    cout << "Size: " << sizeof(arr_ref) / sizeof(arr_ref[0]) << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr_ref[i] << ' ';
    }
    cout << endl;

    pass_by_ref(arr_ref);

    // after
    cout << "After: " << arr_ref << ' ' << &arr_ref << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr_ref[i] << ' ';
    }
    cout << endl << endl;
}