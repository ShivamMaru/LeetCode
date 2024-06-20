class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        string b = s;
        reverse(b.begin(),b.end());
        int n = s.length();
        int m = b.length();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1));
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s[i-1] == b[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1] , dp[i-1][j]);
            }
        }
        return dp[n][m];
        
    }
};