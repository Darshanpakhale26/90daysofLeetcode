// Day of the Year

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;    

class Solution {
public:
    int dayOfYear(string date) {
        vector<int> daysInMonth = {31,28,31,30,31,30,31,31,30,31,30,31};
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            daysInMonth[1] = 29;
        }
        
        int dayOfYear = 0;
        for (int i = 0; i < month - 1; i++) {
            dayOfYear += daysInMonth[i];
        }
        
        return dayOfYear + day;
    }
};

int main() {
    Solution solution;
    string date = "2004-03-01";
    std::cout << solution.dayOfYear(date) << std::endl;
    return 0;
}