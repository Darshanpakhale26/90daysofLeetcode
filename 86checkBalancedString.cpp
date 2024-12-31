// Check Balanced String

// You are given a string num consisting of only digits.
// A string of digits is called balanced if the sum of the digits at even indices is equal to the sum of digits at odd indices.
// Return true if num is balanced, otherwise return false.

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool balancedString(string num) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < num.size(); i++) {
            if (i % 2 == 0)
                sum1 += num[i] - '0';
            else
                sum2 += num[i] - '0';
        }
        return sum1 == sum2;
    }
};

int main() {
    Solution sol;
    string num = "1234";
    cout << sol.balancedString(num) << endl;
    return 0;
}
