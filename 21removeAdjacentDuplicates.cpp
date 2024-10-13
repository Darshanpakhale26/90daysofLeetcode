// Remove All Adjacent Duplicates In String

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string removeDuplicates(string S) {
    stack<char> stack;
    for(char c : S) {
        if(!stack.empty() && stack.top() == c) { // if stack is not empty and top of stack is equal to current character  
            stack.pop();
        } else {
            stack.push(c);
        }
    }
    string result = "";
    while(!stack.empty()) {  // pop all elements from stack and add to result
        result = stack.top() + result;   // add to front of result
        stack.pop();
    }
    return result;
}

int main() {
    string S = "abbaca";
    cout << removeDuplicates(S) << endl;
    return 0;
}