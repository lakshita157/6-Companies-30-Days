class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi = INT_MIN;
        if(nums.size()==1)return 0;
        if(nums.size()==2){
            if(nums[0]>nums[1])return 0;
            else return 1;
        }
        for(int i=1; i<nums.size(); i++){
            
            if(nums[i-1]>nums[i]){
                maxi = max(nums[i-1],maxi);
            }
        }
        if(maxi == INT_MIN)return nums.size()-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==maxi){
                return i;
            }
        }

        return -1;
    }
};