// Missing Number

#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    for(int num : nums) {
        sum -= num;
    }
    return sum;
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums) << endl;
    return 0;
}
