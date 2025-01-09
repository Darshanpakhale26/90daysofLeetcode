// Counting Words With a Given Prefix

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int prefixCount(vector<string>& words, string pref) {
    int count = 0;
    for (int i = 0; i < words.size(); i++) {
        if (words[i].find(pref) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<string> words = {"apple", "banana", "app", "applet", "apples", "applesauce", "appetizer", "appetizers"};
    string pref = "app";
    cout << prefixCount(words, pref) << endl;
    return 0;
}
