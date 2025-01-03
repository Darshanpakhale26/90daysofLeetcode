// Reverse Bits

#include <iostream>

using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t res = 0;
    for (int i = 0; i < 32; i++) {
        res = (res << 1) + (n & 1);
        n >>= 1;
    }
    return res;
}

int main() {
    uint32_t n = 43261596;
    cout << reverseBits(n) << endl;
    return 0;
}
