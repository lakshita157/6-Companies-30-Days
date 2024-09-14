class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            
            maxi = max(maxi, nums[i]);
        }

        int ans =0;
        int x=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==maxi){
                x++;
            }    
            else{
                ans = max(ans,x);
                x=0;
            }
        }

        ans = max(ans,x);

        return ans;


    }
};