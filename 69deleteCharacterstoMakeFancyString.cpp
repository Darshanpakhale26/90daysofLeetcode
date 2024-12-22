//  Delete Characters to Make Fancy String

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        int n = s.size();
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j < n && s[j] == s[i]) {     
                j++;
            }
            if (j - i >= 2) {    
                res += s[i];
                res += s[i];
            } else {
                res += s[i];
            }
            i = j - 1;
        }
        return res;
    }
};

int main() {
    Solution sol;
    string s = "leeetcode";
    cout << sol.makeFancyString(s) << endl;
    return 0;
}