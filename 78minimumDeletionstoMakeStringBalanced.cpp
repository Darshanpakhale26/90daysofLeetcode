// Minimum Deletions to Make String Balanced

// You are given a 0-indexed string s consisting of characters 'a' and 'b' only. You are also given an integer array a where a[i] = 1 if s[i] is 'a' and a[i] = 0 if s[i] is 'b'.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = s[i] == 'a';
        }
        vector<int> prefixSum(n + 1);
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + a[i];
        }
        int res = n;
        for (int i = 0; i <= n; i++) {
            res = min(res, prefixSum[i] + n - i - (prefixSum[n] - prefixSum[i]));
        }
        return res;
    }
};

int main() {
    Solution sol;
    string s = "aababbab";
    cout << sol.minimumDeletions(s) << endl;
    return 0;
}