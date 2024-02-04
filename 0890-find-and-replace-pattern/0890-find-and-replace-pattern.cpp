class Solution {
public:
    bool solve(string &word, string &pattern){
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0; i<word.size();i++){
            char w=word[i];
            char p=pattern[i];
            if(!mp1.count(w)) mp1[w]=p;
           
            if(!mp2.count(p)) mp2[p]=w;
          
            if(mp1[w]!=p || mp2[p]!=w){
                return false;
               
            }
        }

        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(auto x:words){

            if(solve(x,pattern)){
                ans.push_back(x);
            }
        }

        return ans;
    }
};