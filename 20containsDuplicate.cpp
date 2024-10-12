// Contains Duplicate

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++) {
        if(map.find(nums[i]) != map.end()) {    // If the element is already present in the map  then return true
            return true;
        }
        map[nums[i]] = i;
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    cout << containsDuplicate(nums) << endl;
    return 0;
}