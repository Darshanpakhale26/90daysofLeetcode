// Letter Combinations of a Phone Number

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> letterCombinations(string digits) {
    vector<string> res;
    if(digits.size()==0){
        return res;
    }
    unordered_map<char, string> mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
    string s = "";
        dfs(digits, 0, s, res, mp);
    }
    
    void dfs(string &digits, int index, string &s, vector<string> &res, unordered_map<char, string> &mp) {
        if(index == digits.size()) {
            res.push_back(s);
            return;
        }
        string letters = mp[digits[index]];
        for(char letter : letters) {
            s.push_back(letter);
            dfs(digits, index + 1, s, res, mp);
            s.pop_back();
        }
}

int main(){
    string digits = "23";
    vector<string> res = letterCombinations(digits);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}