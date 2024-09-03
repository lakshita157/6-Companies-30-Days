class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n, 1);
        if(n==0)return 0;
        // dp[0]=0;
        for(int i=1; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
        }

        return *max_element(dp.begin(),dp.end());
    }
};