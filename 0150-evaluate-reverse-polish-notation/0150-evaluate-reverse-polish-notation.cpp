class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto str: tokens){
            if(str == "*" || str=="+" || str=="-" || str=="/"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.pop();
                int solve;
                if(str=="+"){
                    solve= top1+top2;
                }
                else if(str=="*"){
                    solve=top1*top2;
                }
                else if(str=="/"){
                    solve= top2/top1;
                }
                else if(str=="-"){
                    solve=top2-top1;
                }

                st.push(solve);
            }
            else{
                st.push(stoi(str));
            }
        }

        return st.top();
    }
};