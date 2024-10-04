//  Find the Index of the First Occurrence in a String

#include <iostream>
#include <string>
using namespace std;

int firstOccurrence(string s, string x) {
    int n = s.length();
    int m = x.length();
    for(int i = 0; i <= n - m; i++) {
        int j;
        for(j = 0; j < m; j++) {
            if(s[i+j] != x[j]) {
                break;
            }
        }
        if(j == m) {
            return i;
        }
    }
    return -1;
}

int main() {
    string s = "hello";
    string x = "ll";
    cout << firstOccurrence(s, x) << endl;
    return 0;
}

// replace s with haystack and x with needle


