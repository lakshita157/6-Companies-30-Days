class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return 0;
        sort(nums.begin(),nums.end());
        int len=0;
        int a=1;
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1){
                    a++;
                }
                else{
                    len = max(len, a);
                    a=1;
                }
            }
        }

        return max(len,a);
    }
};