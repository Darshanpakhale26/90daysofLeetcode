// Given an array of elements add one
//  arr[1,2,3]

// output 124


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};  // input array

    int number = 0;
    for (int digit : arr) {
        number = number * 10 + digit;  // form the number
    }

    number += 1;  // add one

    cout << number << endl;  // output the result

    return 0;
}



