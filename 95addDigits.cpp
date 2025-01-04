// Add Digits

#include <iostream>

using namespace std;

int addDigits(int num) {
    return 1 + (num - 1) % 9;
}

int main() {
    int num = 38;
    cout << addDigits(num);
    return 0;
}