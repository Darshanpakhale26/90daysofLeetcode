// Plus One

#include <iostream>
#include <vector>
using namespace std;

//----------------- Brute Force Approach

vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1; i>=0; i--){
            if(digits[i]==9){
                digits[i] = 0;
            }
            else{
                digits[i]++;
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }

int main(){
    vector<int> digits = {9};
    vector<int> res = plusOne(digits);
    for(auto i: res){
        cout<<i<<" ";
    }
    return 0;
}



