// Defuse the Bomb

#include <iostream>
#include <vector>

using namespace std;

vector<int> decrypt(vector<int>& code, int k) {
    int n = code.size();
    vector<int> res(n);
    if(k == 0) {
        return res;
    }
    for(int i = 0; i < n; i++) {
        if(k > 0) {
            for(int j = 1; j <= k; j++) {
                res[i] += code[(i + j) % n];
            }
        } else {
            for(int j = -1; j >= k; j--) {
                res[i] += code[(i + n + j) % n];
            }
        }
    }
    return res;
}

int main() {
    vector<int> code = {5, 7, 1, 4};
    int k = 3;
    vector<int> res = decrypt(code, k);
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}