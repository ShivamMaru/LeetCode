class Solution {
public:
  

    bool isSubsequence(string s, string t) {
         int n = s.length();
        int m = t.length();
        vector<vector<long long>> dp(n+1 , vector<long long> (m+1));
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m;j++){
                if(s[i-1] == t[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1] , dp[i-1][j]);
            }
        }
        if(dp[n][m] == n)
            return true;
        return false;
    }
        
};