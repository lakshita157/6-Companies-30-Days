class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1, vector<int>(n+1, -1));
        for(int i=0; i<=m; i++){
            dp[i][0]=0;
        }
        for(int j=0; j<=n; j++){
            dp[0][j]=0;
        }

        for(int j=0; j<=n; j++){
            dp[1][j]=1;
        }

        for(int i=2; i<=m; i++){
            for(int j=1; j<=n; j++){
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }

        return dp[m][n];
    }
};