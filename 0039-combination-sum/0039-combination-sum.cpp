class Solution {
public:     
    void func(int n, int target,vector<int>& c, vector<int>v, vector<vector<int>>&ans, int indx ){
        if(indx==n){
            if(target==0){
                ans.push_back(v);
                
            }
            return;
        }
        if(c[indx]<=target){
            v.push_back(c[indx]);
            func(n, target-c[indx], c, v, ans, indx);
            v.pop_back();
        }
        func(n, target, c, v, ans, indx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        int n = c.size();
        vector<int> v;
        vector<vector<int>>ans;
        func(n,target,c,v,ans,0);
        return ans;
    }
};