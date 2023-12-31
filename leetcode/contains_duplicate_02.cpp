#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// O(n^2) no good :(
bool _containsNearbyDuplicate(vector<int>& nums, int k) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i+1; j < nums.size(); ++j) {
            if (nums[i] == nums[j] && (j - i) <= k)
                return true;
        }
    }
    return false;
}

// O(n)
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); ++i) {
        if (m.count(nums[i]) && abs(m[nums[i]]-i) <= k) { // if number is already in map and is in range
            return true;
        }
        m[nums[i]] = i; // give new value to be put in map an index to compare
    }
    return false;
}

int main() {
    vector<int> nums = {1,2,3,1};
    vector<int> nums1 = {1,0,1,1};
    vector<int> nums2 = {1,2,3,1,2,3};
    int k = 3;
    int k1 = 1;
    int k2 = 2;

    cout << containsNearbyDuplicate(nums, k) << endl;
    cout << containsNearbyDuplicate(nums1, k1) << endl;
    cout << containsNearbyDuplicate(nums2, k2) << endl;
}