// Roman to Integer
// Given a roman numeral, convert it to an integer.
// Take input from user

#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int result = 0;
    for(int i = 0; i < s.size(); i++) {
        if(i > 0 && roman[s[i]] > roman[s[i-1]]) {
            result += roman[s[i]] - 2*roman[s[i-1]];
        } else {
            result += roman[s[i]];
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a roman numeral: ";
    cin >> s;
    cout << romanToInt(s) << endl;
    return 0;
}