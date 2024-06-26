class Solution {
public:
    bool subsetSum(vector<int>& nums , int sum , int n , vector<vector<bool>>& dp){
        for(int i = 0 ; i < n+1 ; i++) dp[i][0] = true;

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= sum ; j++){
                if(j >= nums[i-1])
                    dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0 ;
        for(int i = 0 ; i < n ; i++) sum += nums[i];
        if(sum%2!=0) return false;
        vector<vector<bool>> dp(n+1 , vector<bool>((sum+1) , false));
        return subsetSum(nums,sum/2,n,dp);
    }
    
};