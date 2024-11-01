// Reverse String

#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) {
    int n = s.size();
    for(int i = 0; i < n / 2; i++) {  // n / 2 is enough because we are swapping the elements
        swap(s[i], s[n - i - 1]);    // swap the first and last element, then second and second last element and so on
    }
}

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    return 0;
}