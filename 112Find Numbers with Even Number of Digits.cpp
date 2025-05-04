// Find Numbers with Even Number of Digits

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to count numbers with an even number of digits
int countNumbersWithEvenDigits(const vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        // Count the number of digits in the number
        int digits = (num == 0) ? 1 : static_cast<int>(log10(abs(num))) + 1;
        // Check if the number of digits is even
        if (digits % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {12, 345, 2, 6, 7896};
    int result = countNumbersWithEvenDigits(nums);
    cout << "Count of numbers with even number of digits: " << result << endl;
    return 0;
}

