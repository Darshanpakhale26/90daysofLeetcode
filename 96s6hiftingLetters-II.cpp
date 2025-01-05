// Shifting Letters II

// You are given a string s of lowercase English letters and a 2D integer array shifts where shifts[i] = [starti, endi, directioni]. For every i, shift the characters in s from the index starti to the index endi (inclusive) forward if directioni = 1, or shift the characters backward if directioni = 0.

// Shifting a character forward means replacing it with the next letter in the alphabet (wrapping around so that 'z' becomes 'a'). Similarly, shifting a character backward means replacing it with the previous letter in the alphabet (wrapping around so that 'a' becomes 'z').

// Return the final string after all such shifts to s are applied.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string shiftingLetters(string s, vector<vector<int>>& shifts) {
    int n = s.size();
    vector<int> shift(n);
    shift[n - 1] = shifts[n - 1][2];
    for (int i = n - 2; i >= 0; i--) {
        shift[i] = (shifts[i][2] + shift[i + 1]) % 26;
    }
    for (int i = 0; i < n; i++) {
        s[i] = (s[i] - 'a' + shift[i]) % 26 + 'a';
    }
    return s;
}

int main() {
    string s = "abc";
    vector<vector<int>> shifts = {{0, 1, 1}, {1, 2, 0}};
    cout << shiftingLetters(s, shifts);
    return 0;
}

