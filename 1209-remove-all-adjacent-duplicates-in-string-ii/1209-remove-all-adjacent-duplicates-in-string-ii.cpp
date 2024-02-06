class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        if(s.length()<k){
            return s;
        }
        for(int i=0; i<s.length();i++){
            char ch = s[i];
           
            if(st.empty() || st.top().first != ch ){
                st.push({ch,1});
            }
            else{
                auto prev = st.top();
                st.pop();
                st.push({s[i],prev.second+1});
            }
            if(st.top().second==k) st.pop();
        }

        string ans ="";
        while(!st.empty()){
            auto curr = st.top();
            st.pop();
            while(curr.second--){
                ans.push_back(curr.first);
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};