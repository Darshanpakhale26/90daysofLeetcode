// String Modify
// step 1: String Reverse
// step 2: remove middle character

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string stringModify(string s) {
        reverse(s.begin(), s.end());
        s.erase(s.size() / 2, 1);           
        return s;
    }
};

int main() {
    Solution sol;
    string s = "abcdef";
    cout << sol.stringModify(s) << endl;
    return 0;
}



// Using for loop

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string stringModify(string s) {
        string res = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            res += s[i];
        }
        res.erase(res.size() / 2, 1);  
        return res;
    }
};

int main() {
    Solution sol;
    string s = "abcdef";
    cout << sol.stringModify(s) << endl;
    return 0;
}