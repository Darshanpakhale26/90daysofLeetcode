// Final Prices With a Special Discount in a Shop

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        for (int i = 0; i < prices.size(); i++) {
            while (!s.empty() && prices[s.top()] >= prices[i]) {
                prices[s.top()] -= prices[i];
                s.pop();
            }
            s.push(i);
        }
        return prices;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {8, 4, 6, 2, 3};
    vector<int> res = sol.finalPrices(prices);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}