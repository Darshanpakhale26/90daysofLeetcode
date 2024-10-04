//  Valid Parentheses

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> stack;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else if(c == ')' && !stack.empty() && stack.top() == '(') {
            stack.pop();
        } else if(c == '}' && !stack.empty() && stack.top() == '{') {
            stack.pop();
        } else if(c == ']' && !stack.empty() && stack.top() == '[') {
            stack.pop();
        } else {
            return false;
        }
    }
    return stack.empty();
}

int main() {
    string s = "()";
    cout << isValid(s) << endl;
    return 0;
}