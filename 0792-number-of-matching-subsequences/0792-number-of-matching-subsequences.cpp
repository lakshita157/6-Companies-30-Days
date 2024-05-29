class Solution {
public:
    bool isSubsequence(string &S1, string &S2){
        int i = 0, j = 0; 
        for (; i < S1.length() && j < S2.length(); j++)
            if (S1[i] == S2[j])
            i++; 
        return (i == S1.length()); 
    }

    int numMatchingSubseq(string s, vector<string>& words) {
        int ans =0;
        int m = s.length();
        unordered_map<string, int>mp;
        for(auto word: words){
            if(mp.count(word)){
                ans+=mp[word];
            }
            else{
                ans+=mp[word]=isSubsequence(word, s);
            }
        }

        return ans;
    }
};