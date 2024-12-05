// Largest Number

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string largestNumber(vector<int>& nums) {
    vector<string> strNums;
    for (int num : nums) {
        strNums.push_back(to_string(num));
    }
    sort(strNums.begin(), strNums.end(), [](string& a, string& b) {
        return a + b > b + a;
    });
    string res;
    for (string& str : strNums) {
        res += str;
    }
    return res[0] == '0' ? "0" : res;
}

int main() {
    vector<int> nums = {3, 30, 34, 5, 9};
    cout << largestNumber(nums) << endl;
    return 0;
}