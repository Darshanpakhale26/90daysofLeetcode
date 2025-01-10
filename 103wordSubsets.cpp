// Word Subsets

// You are given two string arrays words1 and words2.

// A string b is a subset of string a if every letter in b occurs in a including multiplicity.

// For example, "wrr" is a subset of "warrior" but is not a subset of "world".
// A string a from words1 is universal if for every string b in words2, b is a subset of a.

// Return an array of all the universal strings in words1. You may return the answer in any order.

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool isSubset(string a, string b) {
    unordered_map<char, int> aMap;
    for (int i = 0; i < a.size(); i++) {
        aMap[a[i]]++;
    }
    for (int i = 0; i < b.size(); i++) {
        if (aMap.find(b[i]) == aMap.end()) {
            return false;
        }
        aMap[b[i]]--;
        if (aMap[b[i]] == 0) {
            aMap.erase(b[i]);
        }
    }
    return true;
}

vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    vector<string> res;
    unordered_map<char, int> bMap;
    for (int i = 0; i < words2.size(); i++) {
        unordered_map<char, int> tempMap;
        for (int j = 0; j < words2[i].size(); j++) {
            tempMap[words2[i][j]]++;
        }
        for (auto it = tempMap.begin(); it != tempMap.end(); it++) {
            if (bMap.find(it->first) == bMap.end()) {
                bMap[it->first] = it->second;
            } else {
                bMap[it->first] = max(bMap[it->first], it->second);
            }
        }
    }
    for (int i = 0; i < words1.size(); i++) {
        unordered_map<char, int> aMap;
        for (int j = 0; j < words1[i].size(); j++) {
            aMap[words1[i][j]]++;
        }
        bool isUniversal = true;
        for (auto it = bMap.begin(); it != bMap.end(); it++) {
            if (aMap.find(it->first) == aMap.end() || aMap[it->first] < it->second) {
                isUniversal = false;
                break;
            }
        }
        if (isUniversal) {
            res.push_back(words1[i]);
        }
    }
    return res;
}

int main() {
    vector<string> words1 = {"amazon", "apple", "facebook", "google", "leetcode"};
    vector<string> words2 = {"e", "o"};
    vector<string> res = wordSubsets(words1, words2);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}

 
