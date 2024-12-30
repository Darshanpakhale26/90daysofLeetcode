// Maximum Sum of 3 Non-Overlapping Subarrays


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sum(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            sum[i] = sum[i - 1] + nums[i - 1];
        }
        vector<int> left(n, 0);
        int maxSum = sum[k] - sum[0];
        for (int i = k; i < n; i++) {
            if (sum[i + 1] - sum[i + 1 - k] > maxSum) {
                left[i] = i + 1 - k;
                maxSum = sum[i + 1] - sum[i + 1 - k];
            } else {
                left[i] = left[i - 1];
            }
        }
        vector<int> right(n, 0);
        maxSum = sum[n] - sum[n - k];
        right[n - k] = n - k;
        for (int i = n - k - 1; i >= 0; i--) {
            if (sum[i + k] - sum[i] >= maxSum) {
                right[i] = i;
                maxSum = sum[i + k] - sum[i];
            } else {
                right[i] = right[i + 1];
            }
        }
        vector<int> res(3, 0);
        maxSum = 0;
        for (int i = k; i <= n - 2 * k; i++) {
            int l = left[i - 1];
            int r = right[i + k];
            int total = (sum[l + k] - sum[l]) + (sum[i + k] - sum[i]) + (sum[r + k] - sum[r]);
            if (total > maxSum) {
                maxSum = total;
                res[0] = l;
                res[1] = i;
                res[2] = r;
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums = {1, 2, 1, 2, 6, 7, 5, 1};
    int k = 2;
    Solution sol;
    vector<int> res = sol.maxSumOfThreeSubarrays(nums, k);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}