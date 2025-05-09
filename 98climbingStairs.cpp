// Climbing Stairs

#include <iostream>

using namespace std;

int climbStairs(int n) {
    if (n == 1) {
        return 1;
    }
    int first = 1;
    int second = 2;
    for (int i = 3; i <= n; i++) {
        int third = first + second;
        first = second;
        second = third;
    }
    return second;
}

int main() {
    int n = 3;
    cout << climbStairs(n);
    return 0;
}