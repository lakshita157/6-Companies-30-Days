class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int>dp(n, 1);
        vector<int>temp(n, -1);

        int maxi =0, mxind =0;
        for(int i=n-1; i>=0; i--){
            for(int j=i+1; j<n; j++){
                if(nums[j]%nums[i]==0 && dp[i]<dp[j]+1){
                    dp[i] = dp[j]+1;
                    temp[i] =j;
                }
            }

            if(maxi<dp[i]){
              maxi = dp[i];
                mxind = i;
            }
        }
        vector<int> ans;
        for(int i=mxind; i!=-1 ; i=temp[i]){
            ans.push_back(nums[i]);
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};