class Solution {
public:
    bool canPartition(vector<int>& nums) {
         int sum =0;
        int n = nums.size();
        for(int i=0;i<nums.size(); i++){
            sum+=nums[i];
        }
        if(sum%2!=0)return false;

        sum/=2;

        vector<vector<int>>dp(n+1, vector<int>(sum+1, 0));
        
        for(int i=0; i<=n; i++){
            dp[i][0]=1;
        }



        for(int i=1; i<=n; i++){
            for(int j=1; j<=sum; j++){
                if(j>=nums[i-1]){
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][sum];

    }
};