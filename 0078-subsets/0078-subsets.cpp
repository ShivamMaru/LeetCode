class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        vector<int>ans;
        int subset = 1 << n;
        for(int i = 0; i<subset; i++){
            
            for(int j = 0; j<n; j++){
                if(i & (1<<j)){
                    
                    ans.push_back(nums[j]);
                }
            }
            result.push_back(ans);
            ans = {};
        }
        return result;
    }
};