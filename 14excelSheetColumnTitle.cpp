// Excel Sheet Column Title

#include <iostream>
#include <string>
using namespace std;

string convertToTitle(int n) {
    string result = "";
    while(n > 0) {
        n--;
        result = char('A' + n % 26) + result;
        n /= 26;
    }
    return result;
}

int main() {
    int n = 701;
    cout << convertToTitle(n) << endl;
    return 0;
}


