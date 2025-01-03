// Combination Sum II

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> out;
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, 0, out, res);
        return res;
    }
    
    void helper(vector<int>& candidates, int target, int start, vector<int>& out, vector<vector<int>>& res) {
        if (target < 0) {
            return;
        } else if (target == 0) {
            res.push_back(out);
        } else {
            for (int i = start; i < candidates.size(); i++) {
                if (i > start && candidates[i] == candidates[i - 1]) {
                    continue;
                }
                out.push_back(candidates[i]);
                helper(candidates, target - candidates[i], i + 1, out, res);
                out.pop_back();
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>> res = sol.combinationSum2(candidates, target);
    for (vector<int> out : res) {
        for (int num : out) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}