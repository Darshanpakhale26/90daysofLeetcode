// Remove All Adjacent Duplicates In String

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string removeDuplicates(string S) {
    stack<char> stack;
    for(char c : S) {
        if(!stack.empty() && stack.top() == c) {
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
    string S = "abbaca";
    cout << removeDuplicates(S) << endl;
    return 0;
}