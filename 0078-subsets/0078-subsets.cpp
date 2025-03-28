class Solution {
public:
    void func(int n, vector<int>&num, vector<vector<int>> &ans, int indx, vector<int>v){
        if(indx ==n){
            ans.push_back(v);
            return;
        }
        func(n, num, ans, indx+1, v);
            v.push_back(num[indx]);
        
        func(n, num, ans, indx+1, v);
       

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> v;
        func(n, nums, ans, 0, v);
        return ans;
    }
};