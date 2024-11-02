//  Sort Colors
//  Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue. Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

//  Note: You are not suppose to use the library's sort function for this problem.



#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}

//A rather straight forward solution is a two-pass algorithm using counting sort.



#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int count[3] = {0, 0, 0};   // Count the number of 0s, 1s and 2s
    for(int i = 0; i < nums.size(); i++) {   
        count[nums[i]]++;     
    }
    int index = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < count[i]; j++) {
            nums[index++] = i;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}