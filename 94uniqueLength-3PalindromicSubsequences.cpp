//  Unique Length-3 Palindromic Subsequences


// Code
// Testcase
// Testcase
// Test Result
// 1930. Unique Length-3 Palindromic Subsequences
// Medium
// Topics
// Companies
// Hint
// Given a string s, return the number of unique palindromes of length three that are a subsequence of s.

// Note that even if there are multiple ways to obtain the same subsequence, it is still only counted once.

// A palindrome is a string that reads the same forwards and backwards.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countPalindromicSubsequences(string s) {
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                int left = i + 1, right = j - 1;
                while (left <= right && s[left] != s[i]) {
                    left++;
                }
                while (left <= right && s[right] != s[i]) {
                    right--;
                }
                if (left > right) {
                    dp[i][j] = dp[i + 1][j - 1] * 2 + 2;
                } else if (left == right) {
                    dp[i][j] = dp[i + 1][j - 1] * 2 + 1;
                } else {
                    dp[i][j] = dp[i + 1][j - 1] * 2 - dp[left + 1][right - 1];
                }
            } else {
                dp[i][j] = dp[i][j - 1] + dp[i + 1][j] - dp[i + 1][j - 1];
            }
            dp[i][j] = dp[i][j] < 0 ? dp[i][j] + 1000000007 : dp[i][j] % 1000000007;
        }
    }
    return dp[0][n - 1];
}

int main() {
    string s = "bccb";
    cout << countPalindromicSubsequences(s) << endl;
    return 0;
}
