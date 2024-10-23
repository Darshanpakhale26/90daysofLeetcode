//  Find the Difference

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

char findTheDifference(string s, string t) {
    unordered_map<char, int> map;
    for(char c : s) {
        map[c]++;
    }
    for(char c : t) {
        if(map[c] == 0) {
            return c;
        }
        map[c]--;
    }
    return ' ';
}

int main() {
    string s = "abcd";
    string t = "abcde";
    cout << findTheDifference(s, t) << endl;
    return 0;
}