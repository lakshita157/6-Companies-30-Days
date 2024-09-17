class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string s = s1+" "+s2;

        unordered_map<string,int>mp;
        string st = "";
        for(auto x:s){
            if(x==' '){
                mp[st]++;
                st="";
            }
            else{
                st+=x;
            }
        }

        if(st!=""){
            mp[st]++;
            st="";
        }
        vector<string>ans;

        for(auto x:mp){
            if(x.second==1){
                ans.emplace_back(x.first);
            }
        }

        return ans;

    }
};