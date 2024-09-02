class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int n1 = t1.size(), n2 = t2.size();
        vector<vector<int>>dp(n1+1, vector<int>(n2+1, 0));
        for(int i=0; i<=n1; i++){
            for(int j=0; j<=n2; j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }

        for(int i=1; i<=n1; i++){
            for(int j=1; j<=n2; j++){
                if(t1[i-1]==t2[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        return dp[n1][n2];
    }
};