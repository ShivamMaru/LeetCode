class Solution {
public:
    bool solve(vector<int>arr,int n, int sum, vector<vector<int>>& dp){
        if(sum == 0)
            return true;
        if(n == 0)
            return false;
        if(dp[n][sum] != -1)
            return dp[n][sum];
            
        if(sum >= arr[n-1])
            return dp[n][sum] = solve(arr, n-1 , sum - arr[n-1]  , dp) || 
            solve(arr, n-1 ,sum, dp);
        else
            return solve(arr, n-1,sum  , dp);
            
        
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        
        for(int i = 0; i<n; i++){
            sum += nums[i];
       }
    
        if(sum % 2 != 0)
            return false;
        else{
            sum = sum/2;
            vector<vector<int>> dp(n+1, vector<int> (sum+1,-1));
            return solve(nums,n,sum,dp);
            }
    }
};