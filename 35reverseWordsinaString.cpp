// Reverse Words in a String

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string reverseWords(string s) {
    vector<string> words;
    string word = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {          // If space is encountered, push the word into the vector
            if(word != "") {        // If word is not empty
                words.push_back(word);    
                word = "";       //   
            }
        } else {
            word += s[i];
        }
    }
    if(word != "") {     
        words.push_back(word);
    }
    string result = "";
    for(int i = words.size() - 1; i >= 0; i--) {
        result += words[i];
        if(i != 0) {
            result += " ";
        }
    }
    return result;
}

int main() {
    string s = "the sky is blue";
    cout << reverseWords(s);
    return 0;
}