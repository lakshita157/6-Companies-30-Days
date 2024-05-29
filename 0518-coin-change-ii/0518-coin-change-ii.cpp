class Solution {
public:
    int solve(int a, vector<int>& coins, int n, vector<vector<long long int>>& dp){
        
        if(a==0) return 1;
        if(a<0 || n<=0) return 0;
        if(dp[n][a]!=-1) return dp[n][a];

        if(a>=coins[n-1]){
             dp[n][a] = solve(a-coins[n-1], coins, n, dp)+solve(a, coins, n-1, dp);
        }
        else{
             dp[n][a] = solve(a, coins, n-1, dp);
        }

        return dp[n][a];
    }

   

    int change(int a, vector<int>& coins) {
        int n = coins.size();
        vector<vector<long long int>> dp(n + 1, vector<long long int>(a+ 1, -1));
        long long int ans = solve(a, coins, n, dp);
        return ans;

    }
};