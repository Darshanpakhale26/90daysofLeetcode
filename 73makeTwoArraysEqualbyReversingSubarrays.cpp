// Make Two Arrays Equal by Reversing Subarrays

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int num : target) {
            mp[num]++;
        }
        for (int num : arr) {
            if (mp.find(num) == mp.end()) {
                return false;
            }
            mp[num]--;
            if (mp[num] == 0) {
                mp.erase(num);
            }
        }
        return mp.empty();
    }
};

int main() {
    Solution sol;
    vector<int> target = {1, 2, 3, 4};
    vector<int> arr = {2, 4, 1, 3};
    cout << sol.canBeEqual(target, arr) << endl;
    return 0;
}


// another solution

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        return target == arr;
    }
};

int main() {
    Solution sol;
    vector<int> target = {1, 2, 3, 4};
    vector<int> arr = {2, 4, 1, 3};
    cout << sol.canBeEqual(target, arr) << endl;
    return 0;
}