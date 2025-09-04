// Max Product Subarray

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] < 0) {
            swap(maxProd, minProd);
        }
        maxProd = max(nums[i], maxProd * nums[i]);
        minProd = min(nums[i], minProd * nums[i]);
        result = max(result, maxProd);
    }
    return result;
}

int main() {
    vector<int> nums = {2, 3, -2, 4};
    int maxProductValue = maxProduct(nums);
    cout << "Max product of subarray: " << maxProductValue << endl;
    return 0;
}