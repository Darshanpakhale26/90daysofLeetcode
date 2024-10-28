// Longest Harmonious Subsequence

// We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.

// Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findLHS(vector<int>& nums) {
    int res = 0;
    unordered_map<int, int> map;
    for(int num : nums) {
        map[num]++;
    }
    for(auto it : map) {
        if(map.find(it.first + 1) != map.end()) {
            res = max(res, it.second + map[it.first + 1]);
        }
    }
    return res;
}

int main() {
    vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    cout << findLHS(nums) << endl;
    return 0;
}