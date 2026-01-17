#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

/*
Given an array of integers nums and an integer target, return indices 
of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and 
you may not use the same element twice.

You can return the answer in any order.
*/

// O(n^2) // my solution
vector<int> __twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i+1; j < nums.size(); ++j) {
            //cout << nums[i] << ' ' << nums[j] << endl;
            if (nums[i] + nums[j] == target) {
                result.emplace_back(i);
                result.emplace_back(j);
                break;
            }
        }
    }
    return result;
}

// O(2n)
vector<int> _twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    int n = nums.size();

    // Build the hash table
    for (int i = 0; i < n; i++) {
        numMap[nums[i]] = i;
    }

    // Find the complement
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numMap.count(complement) && numMap[complement] != i) {
            return {i, numMap[complement]};
        }
    }
    return {}; // No solution found
}

// O(n) // best solution
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    int size = nums.size();

    for (int i = 0; i < size; ++i) { // iterate over nums (goes at least twice because nothing is in map to start)
        int complement = target - nums[i]; // e.x. 9 - 7 = 2, 2 is in map
        if (m.count(complement)) { // if complement is found once in map
            return {m[complement], i}; // m[complement] contains the index of where it is found in nums
        }
        m[nums[i]] = i; // add next value from nums into map with its index into nums
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    nums = twoSum(nums, 9);
    for (auto i : nums) 
        cout << i << endl;
}