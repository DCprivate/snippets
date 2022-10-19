#include <iostream>
#include <string>
#include <vector> 
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for (int i = 0; i < nums.size()-1; i++) {        
        nums[i+1] = nums[i] + nums[i+1];
    }
    return nums;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    nums = runningSum(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
}
