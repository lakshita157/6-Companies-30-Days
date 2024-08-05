class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){
                st.push(s[i]);
            }

            else if(s[i]==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();

                }

                else if(!st.empty()&& st.top()!='('){
                    st.push(s[i]);
                }
                else{
                    st.push(s[i]);
                }
            }

          
        }

          return st.size();
        
    }
};