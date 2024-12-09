// Special Array II
// An array is considered special if every pair of its adjacent elements contains two numbers with different parity.
// You are given an array of integer nums and a 2D integer matrix queries, where for queries[i] = [fromi, toi] your task is to check that 
// subarray
// nums[fromi..toi] is special or not.

// Return an array of booleans answer such that answer[i] is true if nums[fromi..toi] is special.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> specialArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<bool> res;
        for (auto& q : queries) {
            int from = q[0], to = q[1];
            int cnt = 0;
            for (int i = from; i < to; i++) {
                if (nums[i] % 2 != nums[i+1] % 2) cnt++;
            }
            res.push_back(cnt == to-from);
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 4, 6};
    vector<vector<int>> queries = {{0, 1}, {1, 2}, {2, 3}, {0, 3}};
    vector<bool> res = sol.specialArray(nums, queries);
    for (bool b : res) cout << b << " ";
    cout << endl;
    return 0;
}
    