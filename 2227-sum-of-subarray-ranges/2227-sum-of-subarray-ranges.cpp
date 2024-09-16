class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum =0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int maxi = nums[i], mini = nums[i];
            for(int j=i+1; j<n; j++){
                if(nums[j]>maxi)maxi = nums[j];
                else if(nums[j]<mini)mini = nums[j];
                sum+=abs(maxi-mini);
            }
        }

        return sum;
    }
};