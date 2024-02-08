class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        string st;
        for(int i=0; i<s.length();i++){
            st+=s[i];
        }
        for(int i=0; i<s.length();i++){
            st+=s[i];
            
        }
        for(int i=0; i<st.length();i++){
            cout<<st[i];
        }


        if(st.find(goal) != string::npos){
            return true;
        }

        return false;
    }
};