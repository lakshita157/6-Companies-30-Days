class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long ans =0;

        unordered_map<int,int>mp;
        for(auto x:hours){
            int k = (24 - x % 24) %24;
            if(mp.find(k)!=mp.end()){
                ans+=mp[k];
            }

            mp[x % 24]++;
        }

        return ans;
        
    }
};