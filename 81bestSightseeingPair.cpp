// Best Sightseeing Pair

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int res = 0, cur = 0;
        for (int a : A) {
            res = max(res, cur + a);
            cur = max(cur, a) - 1;
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> A = {8, 1, 5, 2, 6};
    cout << sol.maxScoreSightseeingPair(A) << endl;
    return 0;
}