class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        int curr=0;
        char op = '+';
        for(int i=0; i<s.length();i++){
            char currchar = s[i];
            if(isdigit(currchar)){
                curr= (curr*10)+(currchar-'0');
            }

            if(!isdigit(currchar) && !isspace(currchar) || i==s.length()-1){
                if(op == '+'){
                    st.push(curr);
                }
                else if(op=='-'){
                    st.push(-curr);
                }

                else if(op=='*'){
                    int top = st.top();
                    st.pop();
                    st.push(top*curr);
                }

                else if(op=='/'){
                    int top = st.top();
                    st.pop();
                    st.push(top/curr);
                }

                op=currchar;
                curr=0;
            }

            

        }

        int result=0;
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }

        return result;
    }
};