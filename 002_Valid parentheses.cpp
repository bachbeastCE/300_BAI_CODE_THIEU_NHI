#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty())
                    return false; // Check if the stack is empty before
                if (s[i] == ')' && st.top() == '(')
                    st.pop();
                else if (s[i] == '}' && st.top() == '{')
                    st.pop();
                else if (s[i] == ']' && st.top() == '[')
                    st.pop();
                else
                    return false; // If characters don't match, the string is
                                  // invalid.
            }
        }
        return st.empty(); // The stack must be empty for the string to be valid.
    }
};