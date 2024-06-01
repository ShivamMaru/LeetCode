class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        stack<int> st;
        for(int i=0; i<height.size(); i++){
            
            while(!st.empty() && height[i] > height[st.top()]){
                int base = st.top();
                st.pop();
                if(st.empty())
                    break;
                int dis = i - st.top()-1;
                ans += (min(height[i], height[st.top()])- height[base]) * dis;
            }
            st.push(i);
        }
        return ans;
    }
};