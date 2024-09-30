// Search Insert Position 

#include <iostream>
#include <vector>
using namespace std;

//----------------- Brute Force Approach

int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return nums.size();
    }

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 5;
    int res = searchInsert(nums, target);
    cout<<res;
    return 0;
}

//----------------- Optimized Approach

int searchInsert(vector<int>& nums, int target) {
        return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    }