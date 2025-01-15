// Hamming Distance

#include <iostream>

class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorResult = x ^ y;
        int count = 0;
        while (xorResult) {
            count += xorResult & 1;
            xorResult >>= 1;
        }
        return count;
    }
};

int main() {
    Solution solution;
    int x = 1;
    int y = 4;
    std::cout << solution.hammingDistance(x, y) << std::endl;
    return 0;
}