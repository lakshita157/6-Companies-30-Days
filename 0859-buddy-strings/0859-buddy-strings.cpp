class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }

        if(s==goal){
            unordered_map<char,int>mps;
            for(auto x:s){mps[x]++;}
            for(auto x:mps){
                if(x.second>1){
                    return true;
                }
            }

            return false;
        }

        int firstind=-1;
        int secind=-1;
        for(int i=0; i<s.length();i++){
            if(s[i]!=goal[i]){
                if(firstind==-1){
                    firstind=i;
                }

                else if(secind == -1){
                    secind = i;
                }
                
                else {
                    return false;
                }

                // cout<<firstind<<" "<<secind<<endl;
            }
        }

        if(secind==-1) return false;
        return s[firstind]==goal[secind] && s[secind]==goal[firstind];
        
    }
};