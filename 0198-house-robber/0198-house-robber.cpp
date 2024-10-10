class Solution {
 public:
//    int solve(vector<int>& nums, vector<int>&dp, int indx){
//         if(indx ==0) return nums[0];
//         if(indx <0) return 0;
//         if(dp[indx]!=-1) return dp[indx];
//         int pick = nums[indx]+solve(nums, dp, indx-2);
//         int notp = solve(nums, dp, indx-1);
//         return dp[indx]= max(pick, notp);
//     }
    int rob(vector<int>& nums) {
        // int n = nums.size();
        // vector<int>dp(n, -1);
        // return solve(nums, dp, n-1);

        int n = nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        vector<int>dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[1],nums[0]);
        for(int i=2; i<n; i++){
            dp[i] = max(dp[i-1], dp[i-2]+nums[i]);
        }
        return dp[n-1];

    }
};