class Solution {
public:
    void func(int n, int indx,vector<int>& nums,  vector<vector<int>>&ans){
        if(indx ==n){
            ans.push_back(nums);
            return;
        }

        for(int i=indx; i<n; i++){
            swap(nums[i], nums[indx]);
            
            func(n, indx+1, nums,  ans);
            swap(nums[i], nums[indx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        func(n,0,nums, ans);
        return ans;

    }
};