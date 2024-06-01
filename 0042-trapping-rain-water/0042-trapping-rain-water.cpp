class Solution {
public:
    int trap(vector<int>& h) {
        

        int mx = INT_MIN, ans = 0, l = 0, r = h.size() - 1, sum = 0;

        for (int i = 0; i < h.size(); i++)
            sum += h[i], mx = max(mx, h[i]);

        for (int level = 1; level <= mx; level++) {
            while (h[l] < level)
                l++;
            while (h[r] < level)
                r--;
            ans += r - l + 1;
        }
        return ans - sum;
    }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         int ans = 0;
//         stack<int> st;
//         for(int i=0; i<height.size(); i++){
            
//             while(!st.empty() && height[i] > height[st.top()]){
//                 int base = st.top();
//                 st.pop();
//                 if(st.empty())
//                     break;
//                 int dis = i - st.top()-1;
//                 ans += (min(height[i], height[st.top()])- height[base]) * dis;
//             }
//             st.push(i);
//         }
//         return ans;
    // }
};