#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// O(n) by iterating through, keeping the biggest next biggest
int maxProduct(vector<int>& nums) {
    int biggest = 0;
    int secondBiggest = 0;
    for (int num : nums) {
        if (num > biggest) {
            secondBiggest = biggest;
            biggest = num;
        } else {
            secondBiggest = max(secondBiggest, num);
        }
    }
    
    return (biggest - 1) * (secondBiggest - 1);
}

// O(nlogn)
int _maxProduct(vector<int>& nums) {
    int size = nums.size();
    sort(nums.begin(), nums.end());
    return ((nums[size-1]-1)*(nums[size-2]-1));
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);
    v.push_back(5);
    cout << maxProduct(v) << endl;
}