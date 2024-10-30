// Maximum Average Subarray I

#include <iostream>
#include <vector>

using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    double sum = 0;
    for(int i = 0; i < k; i++) {
        sum += nums[i];
    }
    double res = sum;
    for(int i = k; i < nums.size(); i++) {
        sum += nums[i] - nums[i - k];
        res = max(res, sum);
    }
    return res / k;
}

int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    cout << findMaxAverage(nums, k) << endl;
    return 0;
}