 // Multiply Strings

#include <iostream>
#include <string>
using namespace std;

    string multiply(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        
        // Result can be at most len1 + len2 digits
        vector<int> result(len1 + len2, 0);
        
        // Reverse the numbers to make multiplication easier (start from the least significant digit)
        for (int i = len1 - 1; i >= 0; i--) {
            for (int j = len2 - 1; j >= 0; j--) {
                int product = (num1[i] - '0') * (num2[j] - '0');
                int sum = product + result[i + j + 1];
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }
        
        // Convert the result vector into a string
        string res = "";
        for (int i = 0; i < result.size(); i++) {
            if (!(res.empty() && result[i] == 0)) { // Skip leading zeros
                res += to_string(result[i]);
            }
        }
        
        // If the result is empty, return "0"
        return res.empty() ? "0" : res;
    }


int main() {
    cout << multiply("123", "456") << endl;
    return 0;
}