// Check If a Word Occurs As a Prefix of Any Word in a Sentence

// Given a sentence that consists of some words separated by a single space, and a searchWord, check if searchWord is a prefix of any word in sentence.

// Return the index of the word in sentence (1-indexed) where searchWord is a prefix of this word. If searchWord is a prefix of more than one word, return the index of the first word (minimum index). If there is no such word return -1.

// A prefix of a string s is any leading contiguous substring of s.

// using string stream

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream ss(sentence);
        string word;
        int idx = 1;
        while (ss >> word) {
            if (word.find(searchWord) == 0) return idx;
            idx++;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    cout << sol.isPrefixOfWord("i love eating burger", "burg") << endl;
    cout << sol.isPrefixOfWord("this problem is an easy problem", "pro") << endl;
    cout << sol.isPrefixOfWord("i am tired", "you") << endl;
    return 0;
}6