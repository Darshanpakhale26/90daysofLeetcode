// Continuous Subarrays

// You are given a 0-indexed integer array nums. A subarray of nums is called continuous if:

// Let i, i + 1, ..., j be the indices in the subarray. Then, for each pair of indices i <= i1, i2 <= j, 0 <= |nums[i1] - nums[i2]| <= 2.
// Return the total number of continuous subarrays.

// // A subarray is a contiguous non-empty sequence of elements within an array.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
    long long continuousSubarrays(vector<int>& nums) {
        long long res = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j + 1 < n && abs(nums[j + 1] - nums[j]) <= 2) j++;
            int len = j - i + 1;
            res += (len * (len + 1)) / 2;
            i = j;
        }
        return res;
    }
}

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    cout << sol.continuousSubarrays(nums) << endl;
    return 0;
}



