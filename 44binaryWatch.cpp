// Binary Watch

#include <iostream>
#include <vector>

using namespace std;

vector<string> readBinaryWatch(int turnedOn) {
    vector<string> res;
    for (int h = 0; h < 12; h++) {
        for (int m = 0; m < 60; m++) {
            if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
                res.push_back(to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m));
            }
        }
    }
    return res;
}

int main() {
    int turnedOn = 1;
    vector<string> res = readBinaryWatch(turnedOn);
    for (string s : res) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}