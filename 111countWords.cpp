// Count the number of words in a string simple program

#include <iostream>
#include <string>

using namespace std;

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false; // End of a word
        } else {
            if (!inWord) {
                count++; // Start of a new word
                inWord = true;
            }
        }
    }
    return count;
}

int main() {
    string str = "Hello, this is a test string.";
    int wordCount = countWords(str);
    cout << "Number of words: " << wordCount << endl;
    return 0;
}










