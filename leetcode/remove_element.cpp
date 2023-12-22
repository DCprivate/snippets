#include <iostream>
#include <vector>
using namespace std;

/*
Given an integer array nums and an integer val, remove all 
occurrences of val in nums in-place. The order of the elements 
may be changed. Then return the number of elements in nums 
which are not equal to val.

Consider the number of elements in nums which are not equal 
to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums 
contain the elements which are not equal to val. The remaining 
elements of nums are not important as well as the size of nums.
Return k.
*/

// weird solution that does some index shifting trickery
int _removeElement(vector<int>& nums, int val) {
    int n=nums.size();
    int indx=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=val)
        {
            nums[indx]=nums[i];
            indx++;
        }
    }
    for (const auto& i : nums) cout << i << ' '; // debugging
    cout << endl;
    return indx;
}

// my solution - that actually removes elements
int removeElement(vector<int>& nums, int val) {
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == val) {
            nums.erase(nums.begin()+i);
            i--;
        }
    }
    for (const auto& i : nums) cout << i << ' '; // debugging
    cout << endl;
    return nums.size();
}

int main() {
    vector<int> nums = {3,2,2,3};
    vector<int> nums1 = {0,1,2,2,3,0,4,2};
    int val = 3, val1 = 2;
    cout << _removeElement(nums1, val1) << endl;
}