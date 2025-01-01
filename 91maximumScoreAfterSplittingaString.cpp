// Maximum Score After Splitting a String

#include <iostream>
#include <vector>

using namespace std;

int maxScore(string s) {
    int n = s.size();
    vector<int> left(n, 0), right(n, 0);
    left[0] = s[0] == '0' ? 1 : 0;
    right[n - 1] = s[n - 1] == '1' ? 1 : 0;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] + (s[i] == '0' ? 1 : 0);
    }
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] + (s[i] == '1' ? 1 : 0);
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, left[i] + right[i + 1]);
    }
    return ans;
}

int main() {
    string s = "011101";
    cout << maxScore(s) << endl;
    return 0;
}