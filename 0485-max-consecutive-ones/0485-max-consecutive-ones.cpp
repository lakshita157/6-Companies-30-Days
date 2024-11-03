class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans =0;
        int x=0;
        for(int i=0; i<nums.size();i++){
            
            if(nums[i]==1){
                x++;
            }
            
            else {

                x=0;
            }

            ans = max(ans , x);
            // cout<<ans<<" ";
            
        }

        return ans;
    }
};