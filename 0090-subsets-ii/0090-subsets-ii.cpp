class Solution {
public:
    void func(set<vector<int>>&ans, int n, int indx, vector<int>&nums, vector<int> v){
        if(indx ==n){
            ans.insert(v);
            return;
        }

        func(ans, n, indx+1, nums, v);
        v.push_back(nums[indx]);
        func(ans, n, indx+1, nums, v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        set<vector<int>>st;
        vector<int> v;
        sort(nums.begin(), nums.end());
        func(st,n, 0, nums, v);
        for(auto x: st){
            ans.push_back(x);
        }

        return ans;
    }
};