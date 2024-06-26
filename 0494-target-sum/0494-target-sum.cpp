class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int d) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++) sum += nums[i];
         int val = (sum + d)/2;
        
        if ((sum + d) % 2 != 0 || val > sum || val < 0) return 0;
        
        
        vector<vector<long long>> dp(n+1, vector<long long> (val+1, -1));
        
        dp[0][0] = 1;
        for(int i=1; i<val+1; i++) dp[0][i] = 0;
        for(int i=1; i<n+1; i++){
            for(int j=0; j<val+1; j++){
                if(nums[i-1] <= j){
                    dp[i][j] = (dp[i-1][j - nums[i-1]] + dp[i-1][j])% 1000000007;
                }else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][val];
    }
};