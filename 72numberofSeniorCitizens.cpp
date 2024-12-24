// Number of Senior Citizens
// You are given a 0-indexed array of strings details. Each element of details provides information about a given passenger compressed into a string of length 15. The system is such that:

// The first ten characters consist of the phone number of passengers.
// The next character denotes the gender of the person.
// The following two characters are used to indicate the age of the person.
// The last two characters determine the seat allotted to that person.
// Return the number of passengers who are strictly more than 60 years old.

 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int numberOfSeniorCitizens(vector<string>& details) {
        int count = 0;
        for (string detail : details) {
            int age = stoi(detail.substr(11, 2));
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<string> details = {"9876543210M01234", "9876543210F01234", "9876543210M01234"};
    cout << sol.numberOfSeniorCitizens(details) << endl;
    return 0;
}