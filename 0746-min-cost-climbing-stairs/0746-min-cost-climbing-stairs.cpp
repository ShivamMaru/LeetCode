class Solution {
public:
    
//     int solve(vector<int>& cost, int n, vector<int>& dp){
        
//         if(n == 0)
//             return cost[0];
//         if(n == 1)
//             return cost[1];
//         if(dp[n] != -1)
//             return dp[n];
//         return dp[n] = cost[n] + min(solve(cost,n-1,dp) , solve(cost, n-2,dp));
//     }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        cost.push_back(0);
//         vector<int> dp(n+1 , -1);
        
//         dp[0] = cost[0];
//         dp[1] = cost[1];
        
//         for(int i=2; i<=n; i++){
//             dp[i] = cost[i] + min(dp[i-1] , dp[i-2]);
//         }
//         return dp[n];
        
        int prev = cost[0];
        int curr = cost[1];
        int next;
         for(int i=2; i<=n; i++){
            next = cost[i] + min(curr , prev);
            prev = curr;
            curr = next;
         }
        
        return next;

    }
};