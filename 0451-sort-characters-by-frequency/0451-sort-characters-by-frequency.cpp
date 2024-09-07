class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }

        priority_queue<pair<int,char>>q;

        for(auto x:mp){
            q.push({x.second, x.first});
        }

        string ans;
        while(!q.empty()){
            int x = q.top().first;
            char c = q.top().second;
            q.pop();
            for(int i=0; i<x; i++){
                ans+=c;
            }
        }

        return ans;
    }
};