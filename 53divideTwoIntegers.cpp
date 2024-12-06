// Divide Two Integers

#include <iostream>
#include <climits>

using namespace std;

int divide(int dividend, int divisor) {
    if (divisor == 0 || (dividend == INT_MIN && divisor == -1)) {
        return INT_MAX;
    }
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;  // ^ is the bitwise XOR operator  // 1 ^ 1 = 0, 0 ^ 0 = 0, 1 ^ 0 = 1, 0 ^ 1 = 1
    long long dvd = labs(dividend);  // labs() returns the absolute value of a long integer
    long long dvs = labs(divisor);   // labs() returns the absolute value of a long integer
    int res = 0;
    while (dvd >= dvs) {
        long long temp = dvs, multiple = 1;
        while (dvd >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        dvd -= temp;
        res += multiple;
    }
    return sign == 1 ? res : -res;
}

int main() {
    cout << divide(10, 3) << endl; // 3
    cout << divide(7, -3) << endl; // -2
    cout << divide(INT_MIN, -1) << endl; // 2147483647
    return 0;
}