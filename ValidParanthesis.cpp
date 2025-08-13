class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                store.push(c);
            } else {
                if (store.empty()) {
                    return false;
…            }
char tope = store.top();

                if ((c == ')' && tope != '(') || (c == '}' && tope != '{') ||
                    (c == ']' && tope != '[')) {
                    return false;
                }

                store.pop();
        }
   }
        return store.empty();
    }
};

/*
Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false
*/
