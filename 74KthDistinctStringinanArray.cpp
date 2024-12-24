//  Kth Distinct String in an Array

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for (string s : arr) {
            mp[s]++;
        }
        for (string s : arr) {        
            if (mp[s] == 1) {         // if the string is distinct
                k--;                  // decrement k
            }
            if (k == 0) {             // if k becomes 0
                return s;             
            }
        }
        return "";                   // if k is greater than the number of distinct strings
    }
};

int main() {
    Solution sol;
    vector<string> arr = {"a", "b", "c", "a", "b", "d"};
    int k = 2;
    cout << sol.kthDistinct(arr, k) << endl;
    return 0;
}