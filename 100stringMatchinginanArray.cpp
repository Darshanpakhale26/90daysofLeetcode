// String Matching in an Array

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> stringMatching(vector<string>& words) {
    vector<string> ans;
    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size(); j++) {
            if (i != j && words[j].find(words[i]) != string::npos) {
                ans.push_back(words[i]);
                break;
            }
        }
    }
    return ans;
}

int main() {
    vector<string> words = {"mass","as","hero","superhero"};
    vector<string> ans = stringMatching(words);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
