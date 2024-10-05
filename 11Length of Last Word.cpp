// Length of Last Word



#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int n = s.length();
    int length = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == ' ') {
            if(length > 0) {
                return length;
            }
        } else {
            length++;
        }
    }
    return length;
}

int main() {
    string s = "Hello World";
    cout << lengthOfLastWord(s) << endl;
    return 0;
}
