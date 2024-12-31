// //  Valid Word
// A word is considered valid if:

// It contains a minimum of 3 characters.
// It contains only digits (0-9), and English letters (uppercase and lowercase).
// It includes at least one vowel.
// It includes at least one consonant.
// You are given a string word.

// Return true if word is valid, otherwise, return false.

// Notes:

// 'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
// A consonant is an English letter that is not a vowel.

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool validWord(string word) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int v = 0, c = 0;
        for (char ch : word) {
            if (isalpha(ch)) {
                if (vowels.count(ch))
                    v++;
                else
                    c++;
            }
        }
        return word.size() >= 3 && v > 0 && c > 0;
    }
};

int main() {
    Solution sol;
    string word = "abcde";
    cout << sol.validWord(word) << endl;
    return 0;
}
