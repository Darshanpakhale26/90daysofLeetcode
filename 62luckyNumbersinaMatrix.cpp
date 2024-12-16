//  Lucky Numbers in a Matrix
//  Given a m * n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

//  A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        unordered_map<int, int> rowMin;
        unordered_map<int, int> colMax;
        int m = matrix.size();
        int n = matrix[0].size();
        for (int i = 0; i < m; i++) {
            int minVal = INT_MAX;
            for (int j = 0; j < n; j++) {
                minVal = min(minVal, matrix[i][j]);
            }
            rowMin[i] = minVal;
        }
        for (int j = 0; j < n; j++) {
            int maxVal = INT_MIN;
            for (int i = 0; i < m; i++) {
                maxVal = max(maxVal, matrix[i][j]);
            }
            colMax[j] = maxVal;
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]) {
                    res.push_back(matrix[i][j]);
                }
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {{3, 7, 8}, {9, 11, 13}, {15, 16, 17}};
    vector<int> res = sol.luckyNumbers(matrix);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}