// Count Prefix and Suffix Pairs I


class Solution {
public:
 bool isPrefixAndSuffix(const string& str1, const string& str2) {
        return str2.rfind(str1, 0) == 0 && str2.find(str1, str2.size() - str1.size()) != string::npos;
    }

    // Function to count the number of valid (i, j) pairs
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;

        // Iterate through all pairs (i, j) where i < j
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Check if words[i] is both a prefix and suffix of words[j]
                if (isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }

        return count;
    }
};

int main() {
    Solution solution;
    vector<string> words = {"mass","as","hero","superhero"};
    cout << solution.countPrefixSuffixPairs(words);
    return 0;
}