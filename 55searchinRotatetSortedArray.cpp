// Search in Rotated Sorted Array

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        while (l <= r) {
            int m = l + (r-l)/2;
            if (nums[m] == target) return m;
            if (nums[m] >= nums[l]) {
                if (target >= nums[l] && target < nums[m]) r = m-1;
                else l = m+1;
            } else {
                if (target > nums[m] && target <= nums[r]) l = m+1;
                else r = m-1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout << sol.search(nums, target) << endl;
    target = 3;
    cout << sol.search(nums, target) << endl;
    return 0;
}