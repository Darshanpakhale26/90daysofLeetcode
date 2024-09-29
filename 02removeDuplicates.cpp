//  Remove Duplicates from Sorted Array

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;


//----------------- Brute Force Approach


// int removeDuplicates(vector<int>& nums) {
//         if(nums.size()==0) return 0;
//         int i=0;
//         for(int j=1; j<nums.size(); j++){
//             if(nums[j]!=nums[i]){
//                 i++;
//                 nums[i] = nums[j];
//             }
//         }
//         return i+1;
//     }

//--------------- Optimized Approach

// int removeDuplicates(vector<int>& nums) {
//         nums.erase(unique(nums.begin(), nums.end()), nums.end());
//         return nums.size();
//     }


//----------------- Using Set

int removeDuplicates(vector<int>& nums) {

   set<int> s;
         for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        nums.clear();
        for(auto i: s){
            nums.push_back(i);
        }
        return nums.size();
}
int main(){
    vector<int> nums = {1,1,2};
    int res = removeDuplicates(nums);
    cout<<res;
    return 0;
}










