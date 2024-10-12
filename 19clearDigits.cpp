// // Clear Digits
// Your task is to remove all digits by doing this operation repeatedly:

// Delete the first digit and the closest non-digit character to its left.
// Return the resulting string after removing all digits.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string clearDigits(string s)
{
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            int j = i - 1;
            while (j >= 0 && !isalpha(s[j]))
            {
                j--;
            }
            if (j >= 0)
            {
                res.erase(j, 1);
            }
        }
        else
        {
            res += s[i];
        }
    }
    return res;
}

int main()
{
    string s = "ab";
    cout << clearDigits(s) << endl;
    return 0;
}