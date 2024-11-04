class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        if(s.length()==1)return false;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(st.empty()|| ch == '('|| ch == '{' || ch == '['){
                st.push(ch);
            }
            else if((ch == ')' && st.top()=='(') || (ch==']' && st.top()=='[') || (ch=='}' && st.top()=='{')){
                st.pop();
                
            }
            else st.push(ch);
        }

        if(!st.empty())return false;
       
        return true;
    }
};