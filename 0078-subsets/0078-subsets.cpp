class Solution {
public:
    void solve(vector<int>& nums,vector<int>& r,int i,vector<vector<int>>& ans){

        if(i >= nums.size()){
            ans.push_back(r);
            return;
        }
        solve(nums, r , i+1,ans);

        int e = nums[i];
        r.push_back(e);
        solve(nums, r , i+1,ans);
        r.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> r;
        solve(nums, r , 0,ans);
        return ans;
    }
};