class Solution {
public:
    int maxPalindromesAfterOperations(vector<string>& words) {
        vector<int>v;
        unordered_map<char,int>mp;
        for(auto word: words){
            v.push_back(word.size()/2);
            for(char ch: word){
                mp[ch]++;
            }
        }

        int total =0;
        for(auto ch:mp){
            total+=ch.second/2;
        }
        sort(v.begin(),v.end());
        int wordpali=0;
        for(int x:v){
            if((total-=x)<0){
                return wordpali;
            }
            else wordpali++;
        }

        return v.size();

    }
};