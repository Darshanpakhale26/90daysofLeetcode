// Round the given number to nearest multiple of 10
//  Given a positive integer n, round it to nearest whole number having zero as last digit.

// Examples:

// Input : 4722
// Output : 4720

// Input : 38
// Output : 40

// Input : 10
// Output: 10

#include <iostream>
using namespace std;

int roundnum(int n)
{

    if (n % 10 < 5)
        return (n / 10) * 10;

    else
        return (n / 10 + 1) * 10;
}
int main()
{
    int n = 4722;
    cout << roundnum(n) << endl;
    n = 38;
    cout << roundnum(n) << endl;
    n = 10;
    cout << roundnum(n) << endl;
    return 0;
}
