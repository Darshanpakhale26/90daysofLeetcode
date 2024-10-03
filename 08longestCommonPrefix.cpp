// Longest Common Prefix

#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0) {
        return "";
    }
    string prefix = strs[0];
    for(int i = 1; i < strs.size(); i++) {
        while(strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size()-1);
        }
    }
    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}
