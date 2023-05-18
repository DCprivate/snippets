#include <iostream>
#include <typeinfo>
using namespace std;

void pass_array(const int stuff[], int n) { // (const int* stuff, int n)
    cout << "sizeof(stuff): " << sizeof(stuff) << endl;
    cout << "type of stuff: " << typeid(stuff).name() << endl;
    for (int i = 0; i < n; ++i)
        cout << stuff[i] << ' ';
    cout << endl;
}

int main() {
    int a[] = {1,2,3,4,5};
    cout << "sizeof(a): " << sizeof(a) << endl;
    cout << "type of a: " << typeid(a).name() << endl;
    pass_array(a, 5);
}

/* g++ -std=c++17 p_array.cpp
p_array.cpp:6:40: warning: sizeof on array function parameter will return size
      of 'const int *' instead of 'const int []' [-Wsizeof-array-argument]
    cout << "sizeof(stuff): " << sizeof(stuff) << endl;
                                       ^
p_array.cpp:5:27: note: declared here
void pass_array(const int stuff[], int n) { // (int* stuff, int n)
                          ^
1 warning generated.

$ ./a.out 
sizeof(a): 20
type of a: A5_i             (int [5])
sizeof(stuff): 8
type of stuff: PKi          (int const*)
1 2 3 4 5  
*/
