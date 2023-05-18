#include <cstddef>  // For size_t
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Foo {
    string s{"abcdefghijklmnopqrstuvwxyz"};
    vector<int> v{1,2,3,4,5};

public:
    size_t size() const {
        return s.size() + v.size();
    }
};

int main() {
    Foo x;
    cout << "Size of x is: " << sizeof(x) << endl;
    cout << "Size of a string is: " << sizeof(string) << endl;
    cout << "Size of a vector is: " << sizeof(vector<int>) << endl;
    cout << "Calling the size function (number of elements): " << x.size() << endl;
}
