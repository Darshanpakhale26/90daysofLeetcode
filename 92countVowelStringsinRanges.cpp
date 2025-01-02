// Count Vowel Strings in Ranges

#include <iostream>
#include <vector>

using namespace std;


int countVowelStrings(vector<string>& words, vector<vector<int>>& queries) {
    int n = words.size();
    vector<int> count(n, 0);
    for (int i = 0; i < n; i++) {
        int m = words[i].size();
        if (words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u') {
            count[i]++;
        }
        if (words[i][m - 1] == 'a' || words[i][m - 1] == 'e' || words[i][m - 1] == 'i' || words[i][m - 1] == 'o' || words[i][m - 1] == 'u') {
            count[i]++;
        }
    }
    int q = queries.size();
    vector<int> ans(q, 0);
    for (int i = 0; i < q; i++) {
        int l = queries[i][0], r = queries[i][1];
        for (int j = l; j <= r; j++) {
            if (count[j] == 2) {
                ans[i]++;
            }
        }
    }
    return ans;
}

int main() {
    vector<string> words = {"aba","bcb","ece","aa","e"};
    vector<vector<int>> queries = {{0,2},{1,4},{1,1}};
    vector<int> ans = countVowelStrings(words, queries);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}







