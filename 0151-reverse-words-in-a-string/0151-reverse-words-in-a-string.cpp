class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
    string tmp, ans;
    
    while (ss >> tmp) {
        if (!ans.empty()) ans = " " + ans; // Add space before appending the word
        ans = tmp + ans;
    }
    
    return ans;
    }
};