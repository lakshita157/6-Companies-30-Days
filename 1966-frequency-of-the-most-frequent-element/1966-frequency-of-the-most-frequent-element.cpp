class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left =0;
        int ans =1;
        long long sum = nums[0];
        for(int i=1; i<nums.size(); i++){
            while((long long)nums[i]*(i-left)-sum>k){
                sum-=nums[left];
                left++;
            }
            sum+=nums[i];
            ans = max(ans , i-left+1);
        }

        return ans;
    }
};