class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        
        for(char c : s ){
            
            if(!s1.empty() && (s1.top() == '(' && c == ')' || s1.top() == '{' && c == '}' ||                 s1.top() == '[' && c == ']'))
                s1.pop();
            else
                s1.push(c);
            
        }
        
        if(s1.empty())
            return true;
        return false;
    }
};