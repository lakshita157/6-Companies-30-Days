class Solution {
public:
    string minRemoveToMakeValid(string s) {
       string st;
       int count =0;
       for(int i=0; i<s.length();i++){
            if(s[i]=='(') count++;
            else if(s[i]==')') {
                if(count ==0) continue;
                count--;
            }

            st+=s[i];
       }

       string ans ="";
       for(int i=st.length()-1; i>=0;i--){
            if(st[i]=='(' && count-- >0) continue;
            ans+=st[i];
       }

       reverse(ans.begin(),ans.end());
       return ans;
    }
};