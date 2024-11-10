// Number of 1 Bits
// Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

#include <iostream>

using namespace std;

int hammingWeight(uint32_t n) {
    int count = 0;
    while (n) {
        count++;
        n &= (n - 1); // n & (n - 1) drops the lowest set bit of n  
    }
    return count;
}

int main() {
    uint32_t n = 00000000000000000000000000001011;
    cout << hammingWeight(n) << endl;
    return 0;
}