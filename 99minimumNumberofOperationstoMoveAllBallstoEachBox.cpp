// Minimum Number of Operations to Move All Balls to Each Box

#include <iostream>
#include <vector>

using namespace std;

vector<int> minOperations(string boxes) {
    int n = boxes.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (boxes[j] == '1') {
                sum += abs(j - i);
            }
        }
        ans[i] = sum;
    }
    return ans;
}

int main() {
    string boxes = "110";
    vector<int> ans = minOperations(boxes);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}