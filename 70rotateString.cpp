// Rotate String

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool rotateString(string A, string B) {
        if (A.size() != B.size()) {
            return false;
        }
        A += A;                         // Concatenate A with itself
        return A.find(B) != string::npos;  // Check if B is a substring of A
    }
};

int main() {
    Solution sol;
    string A = "abcde";
    string B = "cdeab";
    cout << sol.rotateString(A, B) << endl;
    return 0;
}