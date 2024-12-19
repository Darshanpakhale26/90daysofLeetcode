// Take Gifts From the Richest Pile

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxGifts(vector<int>& gifts, int k) {
        sort(gifts.begin(), gifts.end());
        int n = gifts.size();
        int sum = 0;
        for (int i = n - 1; i >= 0 && k > 0; i--, k--) {
            sum += gifts[i];
        }
        return sum;
    }
};

int main() {
    Solution sol;
    vector<int> gifts = {2, 4, 6, 3, 1, 5};
    int k = 3;
    cout << sol.maxGifts(gifts, k) << endl;
    return 0;
}