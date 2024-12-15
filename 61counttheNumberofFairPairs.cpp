// Count the Number of Fair Pairs
// Given a 0-indexed integer array nums of size n and two integers lower and upper, return the number of fair pairs.

// A pair (i, j) is fair if:

// 0 <= i < j < n, and
// lower <= nums[i] + nums[j] <= upper

// using two pointers

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0, right = 1, count = 0;
        while (left < n - 1) {
            if (right == n) {
                left++;
                right = left + 1;
            }
            if (nums[left] + nums[right] >= lower && nums[left] + nums[right] <= upper) {
                count++;
            }
            right++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 3};
    cout << sol.countPairs(nums, 0, 3) << endl;
    return 0;
}