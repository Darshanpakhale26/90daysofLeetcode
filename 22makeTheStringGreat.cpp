// Make The String Great

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string makeGood(string s) {
    stack<char> stack;
    for(char c : s) {
        if(!stack.empty() && abs(stack.top() - c) == 32) { // if stack is not empty and difference between top of stack and current character is 32
            stack.pop();
        } else {
            stack.push(c);
        }
    }
    string result = "";
    while(!stack.empty()) {
        result = stack.top() + result;
        stack.pop();
    }
    return result;
}

int main() {
    string s = "leEeetcode";
    cout << makeGood(s) << endl;
    return 0;
}