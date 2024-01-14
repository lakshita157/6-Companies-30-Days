class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()){
            return false;
        }

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        string s1,s2;

        
        
        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
        }

        for(int i=0; i<word2.size();i++){
            mp2[word2[i]]++;
        }

        vector<int> count1;
        vector<int>count2;
        for(auto x:mp1){
            count1.push_back(x.second);
            s1+=x.first;
        }

        for(auto x:mp2){
            count2.push_back(x.second);
            s2+=x.first;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        for(int i=0; i<s1.length();i++){
            if(s1[i]!=s2[i]){
                return false;
            }
        }

        if(count1.size()!=count2.size()){
            return false;
        }

        sort(count1.begin(),count1.end());
        sort(count2.begin(),count2.end());
        for(int i=0; i<count1.size();i++){
            if((count1[i]-count2[i])!=0){
                return false;
            }
        }

        return true;
    }
};