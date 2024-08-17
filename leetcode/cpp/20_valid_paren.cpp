#include <iostream>
#include <vector>
#include <stack>
using namespace std;

/*
Given a string s containing just the characters 
'(', ')', '{', '}', '[' and ']', determine if 
the input string is valid.

An input string is valid if:

    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.
*/

bool isValid(string s) {
    stack<char> st;
    for (const auto& c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else {
            if (st.empty() || (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '['))
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s = "()", s1 = "()[]{}", s2 = "(]";
    cout << isValid(s) << endl;
    cout << isValid(s1) << endl;
    cout << isValid(s2) << endl;
}