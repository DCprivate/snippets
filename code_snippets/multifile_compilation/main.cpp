#include <iostream>
#include <vector>
#include "multifile_compilation.h"

using std::vector;

int main() {
    vector<int> vec;

    for (int i = 0; i < 50; i++) {
        vec.push_back(i);
    }

    printIntVector(vec);
}