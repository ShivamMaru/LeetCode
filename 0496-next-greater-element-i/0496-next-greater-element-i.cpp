class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int ele;
        stack<int> st;
        unordered_map<int,int> mpp;
        
        for(int i=n2-1; i>=0; i--){
            while(!st.empty() && st.top()<= nums2[i])
                st.pop();
            
            if(!st.empty()){
                ele = st.top();
            }
            else
                ele = -1;
            mpp.insert({nums2[i] , ele});
            st.push(nums2[i]);
        }
        vector<int>ans;
        for(auto it : nums1){
            ans.push_back(mpp[it]);
        }
        return ans;
        
    }
};