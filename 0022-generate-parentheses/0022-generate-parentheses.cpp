class Solution {
public:
    void solve(vector<string>&ans, int open, int close, string st ){
        if(open ==0 && close ==0){
            ans.push_back(st);
            return;
        }

        if(open>0){
            st.push_back('(');
            solve(ans, open-1, close, st);
            st.pop_back();
        }
        if(open<close){
            st.push_back(')');
            solve(ans, open, close-1, st);
            st.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        string st;
        solve(ans, n, n, st);
        return ans;
    }
};