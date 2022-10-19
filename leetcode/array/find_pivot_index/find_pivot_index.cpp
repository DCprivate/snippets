#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int pivotIndex(vector<int>& nums) {
    return 0;
}

int main() {
    vector<int> temp = {1, 2, 3, 4, 5, 6};
    int sum = accumulate(temp.begin(), temp.end(), 0);
    cout << sum << endl;
}