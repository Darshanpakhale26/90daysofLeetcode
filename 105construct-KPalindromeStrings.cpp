// Construct K Palindrome Strings

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

class Solution {
public:
    bool canConstruct(string s, int k) {
         if (k > s.size()) {
        return false;
    }
    
    unordered_map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }
    
  
    int oddCount = 0;
    for (auto& pair : charCount) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }
    
    
    return oddCount <= k;
        
    }
};

int main() {
    Solution solution;
    string s = "annabelle";
    int k = 2;
    std::cout << solution.canConstruct(s, k) << std::endl;
    return 0;
}