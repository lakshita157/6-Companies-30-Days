class Solution {
public:
    void func(vector<int>& c, int target, int n, int sum, vector<int> v, vector<vector<int>>&ans, int indx){
        if(sum==target ){
            ans.push_back(v);
            return;
        }
        if(sum>target||indx>=n)return;
        v.push_back(c[indx]);
        func(c, target, n, sum+c[indx], v, ans, indx);
        v.pop_back();
        func(c, target, n, sum, v, ans, indx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int> > ans;
        vector<int> v;
        int n = c.size();
        func(c, target, n, 0, v, ans, 0);
        return ans;

    }
};