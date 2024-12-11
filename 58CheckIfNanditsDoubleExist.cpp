// Check If N and Its Double Exist


#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for (int a : arr) {
            if (s.count(a*2) || (a % 2 == 0 && s.count(a/2))) return true;  // if a*2 or a/2 exists in the set, return true 
            s.insert(a);
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {10, 2, 5, 3};
    cout << sol.checkIfExist(arr) << endl;
    return 0;
}