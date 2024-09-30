// Remove all occurrences of an element from a vector

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

//----------------- Brute Force Approach

int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]!=val){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }

int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int res = removeElement(nums, val);
    cout<<res;
    return 0;
}


//----------------- Optimized Approach

int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }



