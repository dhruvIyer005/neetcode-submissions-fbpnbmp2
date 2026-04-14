class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets; // Use char, not string
        
        for (char c : s) {
            // 1. If it's an opening bracket, push it
            if (c == '(' || c == '{' || c == '[') {
                brackets.push(c);
            } 
            // 2. If it's a closing bracket
            else {
                // If the stack is empty, there's no opening bracket to match
                if (brackets.empty()) return false;
                
                char top = brackets.top();
                // Check if the top matches the current closing bracket
                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    brackets.pop(); // Match found!
                } else {
                    return false; // Mismatch!
                }
            }
        }
        
        // At the end, if the stack is empty, all brackets were matched
        return brackets.empty();
    }
};