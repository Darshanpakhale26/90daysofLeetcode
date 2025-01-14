// Power of Four
// Given an integer n, return true if it is a power of four. Otherwise, return false.

// An integer n is a power of four, if there exists an integer x such that n == 4x.

#include <iostream>
#include <unordered_map>

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }
        std::unordered_map<int, int> map;
        for (int i = 0; i < 16; i++) {
            map[1 << (2 * i)] = 1;
        }
        return map.find(n) != map.end();
    }
};

int main() {
    Solution solution;
    int n = 16;
    std::cout << solution.isPowerOfFour(n) << std::endl;
    return 0;
}