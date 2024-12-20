// Final Array State After K Multiplication Operations I

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n = nums.size();
        vector<int> res(n, 0);
        for (int i = 0; i < n; i++) {
            res[i] = nums[i];
        }
        for (int i = 0; i < k; i++) {
            int minIndex = 0;
            for (int j = 1; j < n; j++) {
                if (res[j] < res[minIndex]) {
                    minIndex = j;
                }
            }
            res[minIndex] *= multiplier;
        }
        return res;
    }
};