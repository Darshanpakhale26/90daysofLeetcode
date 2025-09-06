// Find the missing and repeating numbers in an array

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

pair<int, int> findMissingAndRepeating(const vector<int>& nums) {
    unordered_map<int, int> countMap;
    int n = nums.size();
    int missing = -1, repeating = -1;

    // Count occurrences of each number
    for (int num : nums) {
        countMap[num]++;
    }

    // Identify the missing and repeating numbers
    for (int i = 1; i <= n; i++) {
        if (countMap[i] == 0) {
            missing = i;
        } else if (countMap[i] > 1) {
            repeating = i;
        }
    }

    return {missing, repeating};
}

int main() {
    vector<int> nums = {3, 1, 3, 5, 4};
    pair<int, int> result = findMissingAndRepeating(nums);
    cout << "Missing number: " << result.first << ", Repeating number: " << result.second << endl;
    return 0;
}