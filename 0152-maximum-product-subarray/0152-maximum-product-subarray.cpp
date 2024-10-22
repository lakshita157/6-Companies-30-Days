class Solution {
public:
    int maxProduct(vector<int>& nums) {
        double pre =1, suf=1;
        double maxi = INT_MIN;
        double n = nums.size();
        for(int i=0; i<nums.size();i++){
            if(pre ==0) pre =1;
            if(suf ==0) suf =1;
            pre*=nums[i];
            suf*=nums[n-i-1];
            maxi = max(maxi, max(pre, suf));
        }

        return maxi;
    }
};