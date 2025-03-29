class Solution {
public:
    void func(int indx, int target, vector<int>v, vector<int>& c, vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(v);
            return;
        }
        int n = c.size();
        for(int i=indx;i<n; i++){
            if(i>indx && c[i]==c[i-1])continue;
            if(c[i]>target)break;
            v.push_back(c[i]);
            func(i+1, target-c[i], v, c, ans);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(),c.end());
        vector<vector<int>>ans;
        vector<int> v;
        func(0,target, v, c, ans);
        return ans;
    }
};