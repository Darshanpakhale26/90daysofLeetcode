// Third Maximum Number

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int thirdMax(vector<int>& nums) {
    set<int> top3;          // set is used to store unique elements in sorted order
    for(int num : nums) {
        top3.insert(num);         // insert the element in the set
        if(top3.size() > 3) {     // if the size of the set is greater than 3, remove the smallest element
            top3.erase(top3.begin());  // top3.begin() points to the smallest element
        }
    }
    return top3.size() == 3 ? *top3.begin() : *top3.rbegin(); // if the size of the set is 3, return the smallest element, else return the largest element in the set
}


int main() {
    vector<int> nums = {3, 2, 1};
    cout << thirdMax(nums) << endl;
    return 0;
}