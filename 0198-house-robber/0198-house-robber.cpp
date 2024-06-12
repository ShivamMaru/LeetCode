#include<bits/stdc++.h>
class Solution {
public:
    int solve(vector<int>& nums, int n, vector<int>& dp){
        if(n == 0)
            return nums[0];
        if(n<0)
            return 0;
        
        if(dp[n] != -1)
            return dp[n];
        
        int include = nums[n] + solve(nums, n-2, dp);
        int exclude = solve(nums,n-1,dp);
        return dp[n] = max(include, exclude);
    }
    
    
    
    int rob(vector<int>& nums) {
        
        int n = nums.size()-1;
        vector<int> dp(n+1 , -1);
        
        return solve(nums,n,dp);
    }
};