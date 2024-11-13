class Solution {
public:
    bool check(string &s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans ;
        for(int i=0; i<s.length(); i++){
            for(int j=i; j<s.length(); j++){
                if(check(s, i, j)){
                    string st = s.substr(i, j-i+1);
                    if(st.size()>ans.size()){
                        ans = st;
                    }
                }
            }
        }

        return ans;
    }
};