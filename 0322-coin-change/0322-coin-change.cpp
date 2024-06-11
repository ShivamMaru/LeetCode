class Solution {
public:
    int solve(vector<int> &num, int x, int n, vector<vector<int>>&dp) {
    
    if (x == 0) return 0; 
    if (n < 0  || x < 0) 
        return INT_MAX; 

    if(dp[n][x] != -1)
        return dp[n][x];

    
    int include = solve(num, x - num[n], n, dp);
    if (include != INT_MAX) include += 1;

    
    int exclude = solve(num, x, n-1,dp);

    
    return dp[n][x] = min(include, exclude);
}

    int coinChange(vector<int>& num, int x) {
    int n = num.size();
    vector<vector<int>> dp(n+1 ,vector<int>(x+1,-1));
    int result = solve(num, x, n-1, dp);
    return (result == INT_MAX) ? -1 : result; 
    }
};