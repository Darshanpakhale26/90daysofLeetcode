// countAndSay

#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n) {
    if (n == 0) return "";
    string res = "1";      // n = 1
    while (--n) {       // n = 2, 3, 4, 5
        string cur = "";
        for (int i = 0; i < res.size(); i++) {  
            int count = 1;      
            while ((i + 1 < res.size()) && (res[i] == res[i + 1])) {   // 1 == 1
                i++;      
                count++;
            }
            cur += to_string(count) + res[i];   // to string(1) + 1
        }
        res = cur;
    }
    return res;   // 1, 11, 21, 1211, 111221
}

int main() {
    cout << countAndSay(5) << endl;
    return 0;
}