// Valid Number

#include <iostream>
#include <string>
using namespace std;

bool isNumber(string s) {
    int i = 0;
    int n = s.size();
    
    // Skip the leading whitespaces
    while (i < n && isspace(s[i])) {   // isspace() checks if the character is a white-space character
        i++;
    }
    
    // Skip the sign
    if (i < n && (s[i] == '+' || s[i] == '-')) {  // s[i] == '+' or s[i] == '-'
        i++;
    }
    
    // Skip the digits
    bool isNumeric = false;
    while (i < n && isdigit(s[i])) {   // isdigit() checks if the character is a decimal digit character
        i++;
        isNumeric = true;
    }
    
    // Skip the dot
    if (i < n && s[i] == '.') {   // string s contains a dot '.' at index i     
        i++;
        while (i < n && isdigit(s[i])) {
            i++;
            isNumeric = true;
        }
    }
    
    // Skip the 'e'
    if (isNumeric && i < n && s[i] == 'e' || s[i] == 'E') {   // string s contains an 'e' or 'E' at index i
        i++;
        isNumeric = false;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            i++;
        }
        while (i < n && isdigit(s[i])) {
            i++;
            isNumeric = true;
        }
    }
    
    // Skip the trailing whitespaces
    while (i < n && isspace(s[i])) {
        i++;
    }
    
    return isNumeric && i == n;
}

int main() {
    cout << isNumber("0") << endl; // 1
    cout << isNumber(" 0.1 ") << endl; // 1
    cout << isNumber("abc") << endl; // 0
    cout << isNumber("1 a") << endl; // 0
    cout << isNumber("2e10") << endl; // 1
    return 0;
}