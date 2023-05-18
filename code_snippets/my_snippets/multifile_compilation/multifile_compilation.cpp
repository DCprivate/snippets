#include <iostream>
#include "multifile_compilation.h"

using std::cout;
using std::endl;

void printIntVector(vector<int> vec) {
    for (auto i: vec) {
        cout << i << ", ";
    }
    cout << endl;
}