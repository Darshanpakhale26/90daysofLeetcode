// Sort Array by Increasing Frequency

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        sort(nums.begin(), nums.end(), [&](int a, int b) {      // lambda function  // [&] is used to capture all the variables by reference
            return freq[a] == freq[b] ? a > b : freq[a] < freq[b];    // if freq[a] == freq[b], then sort in descending order, else sort in ascending order
        });
        return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 2, 2, 3};
    vector<int> res = sol.frequencySort(nums);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}


// Another approach using map and multiset

#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        multiset<pair<int, int>> s;
        for (auto& p : freq) {
            s.insert({p.second, p.first});
        }
        vector<int> res;
        for (auto& p : s) {
            for (int i = 0; i < p.first; i++) {
                res.push_back(p.second);
            }
        }
        return res;
    }
};
