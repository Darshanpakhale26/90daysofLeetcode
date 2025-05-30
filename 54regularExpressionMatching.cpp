// Regular Expression Matching

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));
        dp[0][0] = true;
        for (int i = 0; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (p[j-1] == '*') {
                    dp[i][j] = dp[i][j-2] || (i > 0 && (s[i-1] == p[j-2] || p[j-2] == '.') && dp[i-1][j]);
                } else {
                    dp[i][j] = i > 0 && dp[i-1][j-1] && (s[i-1] == p[j-1] || p[j-1] == '.');
                }
            }
        }
        return dp[m][n];
    }
};

int main() {
    Solution sol;
    string s = "aa", p = "a";
    cout << sol.isMatch(s, p) << endl;
    s = "aa", p = "a*";
    cout << sol.isMatch(s, p) << endl;
    s = "ab", p = ".*";
    cout << sol.isMatch(s, p) << endl;
    s = "aab", p = "c*a*b";
    cout << sol.isMatch(s, p) << endl;
    return 0;
}

