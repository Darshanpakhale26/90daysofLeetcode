// Find All Numbers Disappeared in an Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    // vector<int> result;
    // sort(nums.begin(), nums.end());
    // for (int i = 1; i <= nums.size(); ++i)
    // {
    //     if (find(nums.begin(), nums.end(), i) == nums.end()) // If i is not found in the array
    //     {
    //         result.push_back(i);
    //     }
    // }
    // return result;


    // Optimized Approach

    vector<int> result;
    for (int i = 0; i < nums.size(); ++i)
    {
        int index = abs(nums[i]) - 1;
        if (index >= 0 && index < nums.size())
        {
            nums[index] = -abs(nums[index]);
        }
    }
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0)
        {
            result.push_back(i + 1);
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> disappeared = findDisappearedNumbers(nums);
    for (int num : disappeared)
    {
        cout << num << " ";
    }
    return 0;
}