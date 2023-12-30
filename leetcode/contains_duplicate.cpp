#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
Given an integer array nums, return true if any value appears 
at least twice in the array, and return false if every element 
is distinct.
*/

// O(n^2)
bool _containsDuplicate(vector<int>& nums) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i+1; j < nums.size(); ++j) {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;
}

// can I do faster? yes :) O(2n)
bool __containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); ++i) {
        if (m.count(nums[i]) > 0) // this slows it down a bit
            return true;
        m[nums[i]] = i;
    }
    for (const auto& i : m) {
        //cout << i.first << ' ' << i.second << endl; // debugging
    }
    return false;
}

// even faster...? best solution without count() overhead O(n)
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> m;
    //for (const auto& i : nums)
    //    m[i]++; // increments value of i given the specific key

    for (int i = 0; i < nums.size(); ++i) {
        m[nums[i]]++;
        if (m[nums[i]] >= 2)
            return true;
    }
    return false;
}

int main() {
    vector<int> nums = {1,2,3,1};
    vector<int> nums1 = {1,2,3,4};
    vector<int> nums2 = {1,1,1,3,3,4,3,2,4,2};

    cout << containsDuplicate(nums) << endl;
    cout << containsDuplicate(nums1) << endl;
    cout << containsDuplicate(nums2) << endl;
}