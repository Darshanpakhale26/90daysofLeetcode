// Uncommon Words from Two Sentences

#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int> count;
        istringstream iss(A + " " + B);
        while (iss >> A) count[A]++;
        vector<string> res;
        for (auto a : count)
            if (a.second == 1)
                res.push_back(a.first);
        return res;
    }
};

int main() {
    Solution sol;
    string A = "this apple is sweet";
    string B = "this apple is sour";
    vector<string> res = sol.uncommonFromSentences(A, B);
    for (string s : res)
        cout << s << " ";
    cout << endl;
    return 0;
}