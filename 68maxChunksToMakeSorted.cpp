// Max Chunks To Make Sorted

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        int chunks = 0;
        int maxVal = 0;
        for (int i = 0; i < n; i++) {
            maxVal = max(maxVal, arr[i]);
            if (maxVal == sortedArr[i]) {
                chunks++;
            }
        }
        return chunks;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4, 3, 2, 1, 0};
    cout << sol.maxChunksToSorted(arr) << endl;
    return 0;
}