class Solution {
public:
    int solve(vector<int>& nums, vector<int>&dp, int indx){
       
        if(indx==0) return nums[0];
        if(indx<0) return 0;

        if(dp[indx]!=-1) return dp[indx];
        int pick = nums[indx]+solve(nums, dp, indx-2);
        int notp = solve(nums, dp, indx-1);
        return dp[indx]= max(pick, notp);

    }

   
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int>dp1(n-1, -1);
        vector<int>dp2(n, -1);
        
        vector<int> temp1;
        vector<int>temp2;
        for(int i=0; i<n-1; i++){
            temp1.push_back(nums[i]);
        }

        for(int i=1; i<n; i++){
            temp2.push_back(nums[i]);

        }
        int n1 = temp1.size();
        int n2 = temp2.size();

        return max(solve(temp1, dp1, n1-1), solve(temp2, dp2, n2-1));

    }
};