// Intersection of two arrays

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set(nums1.begin(), nums1.end());
    vector<int> result;
    for(int num : nums2) {
        if(set.count(num)) {
            result.push_back(num);
            set.erase(num);
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = intersection(nums1, nums2);
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}