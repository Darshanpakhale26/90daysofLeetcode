// FizzBuzz

// Given an integer n, return a string array answer (1-indexed) where:

// answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
// answer[i] == "Fizz" if i is divisible by 3.
// answer[i] == "Buzz" if i is divisible by 5.
// answer[i] == i (as a string) if none of the above conditions are true.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to generate FizzBuzz sequence
vector<string> fizzBuzz(int n) {
    vector<string> result;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(to_string(i));
        }
    }
    return result;
}

int main() {
    int n = 15; // Example input
    vector<string> fizzBuzzResult = fizzBuzz(n);
    
    // Print the result
    for (const string& str : fizzBuzzResult) {
        cout << str << endl;
    }
    
    return 0;
}