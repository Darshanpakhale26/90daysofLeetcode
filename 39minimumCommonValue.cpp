// Minimum Common Value

#include <iostream>
#include <vector>

using namespace std;

int minimumCommonValue(vector<int>& nums1, vector<int>& nums2) {
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    for (int i = 0; i < nums1.size(); i++) {
        min1 = min(min1, nums1[i]);
    }
    for (int i = 0; i < nums2.size(); i++) {
        min2 = min(min2, nums2[i]);
    }
    return max(min1, min2);
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {6, 7, 8, 9, 10};
    cout << minimumCommonValue(nums1, nums2) << endl;
    return 0;
}