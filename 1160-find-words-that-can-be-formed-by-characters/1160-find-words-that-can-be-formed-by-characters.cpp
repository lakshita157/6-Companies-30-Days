class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int>mp;
        for(auto x:chars){
            mp[x]++;
        }

        int ans =0;
        for(int i=0; i<words.size();i++){
            unordered_map<char,int> ch;
            string s = words[i];
            for(auto x:s ){
                ch[x]++;
            }
            bool temp = true;
            for(auto x:ch){
                if(mp[x.first]<x.second){
                    temp = false;
                    break;
                }
            }
            if(temp == true){
                ans+=words[i].size();
            }
        }

        return ans;
    }
};