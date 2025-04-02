class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int>v;
        int n = nums.size();
        if(k>n){
            v=nums;
            nums = v;
            
        }
        else{
            int x = n-k;

            for(int i=x; i<n; i++ ){
                v.push_back(nums[i]);
            }

            for(int i=0; i<x; i++){
                v.push_back(nums[i]);
            }

            nums = v;
        }

    }
};