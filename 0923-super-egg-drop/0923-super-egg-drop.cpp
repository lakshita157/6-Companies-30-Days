class Solution {
public:
    int solve(int e, int f, vector<vector<int>>&dp){
        if(e==1 || f==0 || f==1)return f;
        if(dp[e][f]!=-1)return dp[e][f];
        int mn = INT_MAX;
        int l=1, r=f;
        while(l<=r){
            int mid = l+(r-l)/2;

            int broken = solve(e-1, mid-1, dp);
            int notbroken = solve(e, f-mid, dp);

            int step = 1+max(broken, notbroken);
            mn = min(mn, step);
            if(broken >notbroken)r = mid-1;
            else l=mid+1;
        }

        return dp[e][f] = mn;
    }
    int superEggDrop(int k, int n) {
        vector<vector<int>>dp(k+1, vector<int>(n+1, -1));
        return solve(k, n, dp);
    }
};