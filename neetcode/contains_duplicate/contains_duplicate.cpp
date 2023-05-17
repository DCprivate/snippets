/*
    Given int array, return true if any value appears at least twice
    Ex. nums = [1,2,3,1] -> true, nums = [1,2,3,4] -> false

    If seen num previously then has dupe, else insert into hash set

    Time: O(n)
    Space: O(n)
*/
#include <iostream>
#include <unordered_set>
using namespace std;

bool contains_duplicate(const int* nums, int size) {
    unordered_set<int> set;

    for (int i = 0; i < size; i++) {
        if (set.find(nums[i]) != set.end()) {
            return true;
        }
        set.insert(nums[i]);
    }
    return false;
}

int main() {

    int nums[5] = {1, 2, 3, 4, 5};
    int nums1[5] = {1, 2, 3, 4, 1};
    int nums2[100];

    for (int i = 0; i < 100; i++) {
        nums2[i] = i;
    }
    nums2[99] = 1;

    cout << contains_duplicate(nums, sizeof(nums)/sizeof(nums[0])) << endl;
    cout << contains_duplicate(nums1, sizeof(nums1)/sizeof(nums1[0])) << endl;
    cout << contains_duplicate(nums2, sizeof(nums2)/sizeof(nums2[0])) << endl;

    exit(0);
}

