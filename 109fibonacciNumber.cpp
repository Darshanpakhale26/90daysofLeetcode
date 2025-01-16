// Fibonacci Number

#include <iostream>

class Solution {
public:
    int fib(int N) {
        if (N == 0) {
            return 0;
        }
        if (N == 1) {
            return 1;
        }
        int a = 0;
        int b = 1;
        int c;
        for (int i = 2; i <= N; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};

int main() {
    Solution solution;
    int N = 4;
    std::cout << solution.fib(N) << std::endl;
    return 0;
}