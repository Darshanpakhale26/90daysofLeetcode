#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0 ; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    res.push_back(i);
                    res.push_back(j);
                    
                }
            }
        }
        return res;
        
    }

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> res = twoSum(nums, target);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
