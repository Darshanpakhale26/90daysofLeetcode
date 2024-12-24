// Circular Sentence

// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

// For example, "Hello World", "HELLO", "hello world hello world" are all sentences.
// Words consist of only uppercase and lowercase English letters. Uppercase and lowercase English letters are considered different.

// A sentence is circular if:

// The last character of each word in the sentence is equal to the first character of its next word.
// The last character of the last word is equal to the first character of the first word.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        string word = "";
        for (char c : sentence) {
            if (c == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        words.push_back(word);
        int n = words.size();
        for (int i = 0; i < n; i++) {
            if (words[i].back() != words[(i + 1) % n].front()) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    string sentence = "hello world";
    cout << sol.isCircularSentence(sentence) << endl;
    return 0;
}


