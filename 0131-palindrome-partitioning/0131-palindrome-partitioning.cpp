class Solution {
public:
    bool check(string st, int i, int j){
        while(i<=j){
            if(st[i]!=st[j])return false;
            i++;
            j--;
        }
        return true;
    }

    void func(int n, int indx, string &st, vector<string> v, vector<vector<string>>&ans){
        if(indx==n){
            ans.push_back(v);
            return;
        }

        for(int i=indx; i<n; i++){
            if(check(st, indx, i)){
                v.push_back(st.substr(indx,i-indx+1));
                func(n,i+1, st, v, ans);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> v;
        int n = s.size();
        func(n,0,s,v,ans);
        return ans;
    }
};