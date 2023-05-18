#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int a[2][3] = {{1,2,3}, {4,5,6}};    // 2 x 3 array with 2 rows
    for (int i = 0; i < 2; ++i)
        cout << sizeof(a[i]) << endl;
    cout << endl;

    for (auto& row: a)
        cout << sizeof(row) << ' ' << typeid(row).name() << endl;
    cout << endl;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    for (auto& row: a) {
        for (auto n: row)
            cout << n << ' ';
        cout << endl; 
    }

}

/* $ ./a.out | c++filt -t 
12
12

12 int [3]
12 int [3]

1 2 3 
4 5 6 
*/
