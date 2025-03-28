class Solution {
public:
    void func(vector<int>& nums, int indx, vector<int> v, int n, int sum, int target, vector<vector<int>>&ans){
        if(sum == target){
            ans.push_back(v);
            return;
        }
        else if(sum> target)return;

        for(int i=indx; i<n; i++){
            if(i != indx && nums[i]==nums[i-1])            
                continue;
            
            sum+=nums[i];
            v.push_back(nums[i]);
            func(nums, i+1,  v,n, sum, target,ans );
            sum-=nums[i];
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> v;
        vector<vector<int>>ans;
        // int sum=0;
        int n = candidates.size();
        sort(candidates.begin(),candidates.end());
        func(candidates, 0, v, n, 0, target,ans);
        return ans;
    }
};