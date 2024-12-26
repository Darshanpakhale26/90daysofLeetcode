// // Target Sum   
// You are given an integer array nums and an integer target.

// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that you can build, which evaluates to target.

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        return helper(nums, target, 0, 0);
    }
    
    int helper(vector<int>& nums, int target, int index, int sum) {
        if (index == nums.size()) {
            return sum == target;
        }
        return helper(nums, target, index + 1, sum + nums[index]) + helper(nums, target, index + 1, sum - nums[index]);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 3;
    cout << sol.findTargetSumWays(nums, target) << endl;
    return 0;
}
