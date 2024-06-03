class Solution {
public:
    // int lcs(string s1, string s2, int n, int m, vector<vector<int>>&dp){
    //     if(n==0 || m==0) return dp[n][m] =0;

    //     if(dp[n][m]!=-1) return dp[n][m];

    //     if(s1[n-1]==s2[m-1]){
    //         return dp[n][m] = 1+lcs(s1, s2, n-1, m-1, dp);
    //     }

    //     return dp[n][m] = max(lcs(s1, s2, n-1, m, dp), lcs(s1, s2, n, m-1, dp));
    // }
    int minInsertions(string s) {
        string s1 = s;
        reverse(s1.begin(),s1.end());

        int n = s.length();
        vector<vector<int>>dp(n+1, vector<int>(n+1, 0));
        int maxi =0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(s[i-1]==s1[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                    maxi = max(maxi, dp[i][j]);
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return n-maxi;
    }
};