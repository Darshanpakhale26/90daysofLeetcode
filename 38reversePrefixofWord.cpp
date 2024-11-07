// Reverse Prefix of Word

#include <iostream>
#include <string>
using namespace std;

string reversePrefix(string word, char ch) {
    int i = 0;
    while (i < word.size() && word[i] != ch) {
        i++;
    }
    if (i == word.size()) {
        return word;
    }
    int j = 0;
    while (j < i) {
        swap(word[j], word[i]);
        j++;
        i--;
    }
    return word;
}

int main() {
    string word = "abcdef";
    char ch = 'd';
    cout << reversePrefix(word, ch) << endl;
    return 0;
}