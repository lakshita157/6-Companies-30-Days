class Solution {
public:
    int calculate(string s) {
        int number=0;
        int result=0;
        int sign = 1;
        stack<int>st;
        for(int i=0; i<s.length(); i++){
            if(s[i]>='0'&& s[i]<='9'){
                number = number*10 + (s[i]-'0');
            }
            else if(s[i]=='+'){
                result+=(number*sign);
                number=0;
                sign = 1;
            }
            else if(s[i]=='-'){
                result+=(number*sign);
                number = 0;
                sign=-1;

            }
            else if(s[i]=='('){
                st.push(result);
                st.push(sign);
                number=0;
                result=0;
                sign = 1;

            }
            else if(s[i]==')'){
                result+=(number*sign);
                number=0;
                int st_sign = st.top();
                st.pop();
                int st_result = st.top();
                st.pop();
                result*=st_sign;
                result+=st_result;
            }
        }

        result+=(number*sign);
        return result;
    }
};