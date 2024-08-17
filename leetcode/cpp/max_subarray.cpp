#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.

Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.

Example 2:
Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.

Example 3:
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/

// do bruteforce or no? (tabluation, d&c are other potential solutions)
int maxSubArray(vector<int>& nums) {

}

// Kadane's algorithm O(n)
int maxSubArray(vector<int>& nums) {
    int current_max = nums[0], overall_max = nums[0]; // initialize both to first number in array
    for (int i = 1; i < nums.size(); ++i) { // start at the next index
        current_max = max(nums[i], current_max + nums[i]); // choose between current index and the accumulated highest values
        overall_max = max(current_max, overall_max); // keep track of highest
        //cout << current_max << ' ' << overall_max << endl;
    }
    return overall_max;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> nums2 = {5,4,-1,7,8};
    cout << maxSubArray(nums) << endl;

}