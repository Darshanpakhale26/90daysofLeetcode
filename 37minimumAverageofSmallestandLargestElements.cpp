// // Minimum Average of Smallest and Largest Elements

// You have an array of floating point numbers averages which is initially empty. You are given an array nums of n integers where n is even.

// You repeat the following procedure n / 2 times:

// Remove the smallest element, minElement, and the largest element maxElement, from nums.
// Add (minElement + maxElement) / 2 to averages.
// Return the minimum element in averages.

// Example 1:


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// double minAverage(vector<int>& nums) {
//     vector<double> averages;
//     sort(nums.begin(), nums.end());
//     for(int i = 0; i < nums.size() / 2; i++) {
//         averages.push_back((nums[i] + nums[nums.size() - 1 - i]) / 2.0);
//     }
//     return *min_element(averages.begin(), averages.end());
// }

double minAverage(vector<int>& nums) {
    vector<double> averages;
    sort(nums.begin(), nums.end()); 

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int minElement = nums[left++];
        int maxElement = nums[right--];
        double avg = (minElement + maxElement) / 2.0;
        averages.push_back(avg);
    }

   
    double minAvg = *min_element(averages.begin(), averages.end());
    return minAvg;
}

int main() {
    vector<int> nums = {3, 1, 2, 4};
    cout << minAverage(nums);
    return 0;
}