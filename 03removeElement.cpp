// Remove all occurrences of an element from a vector

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

//----------------- Brute Force Approach-----

void removeElement(vector<int>& nums, int val) {
    int i = 0;
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    nums.resize(i);
}


int main() {
    vector<int> nums = {3,2,2,3};
    int val = 3;
    removeElement(nums, val);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}






