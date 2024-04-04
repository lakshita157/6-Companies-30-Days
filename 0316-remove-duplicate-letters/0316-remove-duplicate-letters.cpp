class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>lastIndx;

        for(int i=0; i<s.size();i++){
            lastIndx[s.at(i)] = i;
        }

        unordered_map<char,bool>visit;
        string ans="";
        stack<char>st;
        
        
        for(int i=0; i<s.length();i++){
            char ch = s.at(i);
            if(visit[ch]) continue;
            while(!st.empty() && st.top()>ch && lastIndx[st.top()]>i){
                visit[st.top()] = false;
                st.pop();
                

            }

            st.push(ch);
            visit[ch]= true;

            
        }

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};