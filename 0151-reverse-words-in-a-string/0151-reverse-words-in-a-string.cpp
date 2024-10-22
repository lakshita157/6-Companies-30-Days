class Solution {
public:
    string reverseWords(string s) {
         string ans;
        string word;
        stack<string>st;
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            if(ch == ' '){
                if(word!="")
                    st.push(word);
                word = "";
            }
            else{
                word+=ch;
            }
        }

        if(word!=""){
            st.push(word);
        }

        while(!st.empty()){
            ans+=st.top();
            ans+=' ';
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};