class Solution {
public:
    string removeKdigits(string num, int k) {
        
        stack<char> st;
        string ans;
        
        if(num.size() == 1 && k == 1)
            return "0";
        
        for(auto ch: num){
            
            while(!st.empty() && k>0 && st.top() > ch){
                st.pop();
                k--;
            }
            
            if(st.empty()){
                
                if(ch=='0')
                    continue;
                else{
                    st.push(ch);
                }
            }else{
                
                st.push(ch);
            }
                
        }
        
        while(!st.empty() && k > 0){
            st.pop();
            k--;
            if(st.empty())
                return "0";
        }
        
         while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        
        return ans.empty() ? "0" : ans;
        
        
    }
};