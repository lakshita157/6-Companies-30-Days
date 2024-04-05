class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }

        vector<pair<int,int>>v;
        for(auto it:mp){
            v.push_back(make_pair(it.second,it.first));

        }

        sort(v.rbegin(),v.rend());

        for(int i=0; i<v.size() && k!=0 ; i++){
            ans.push_back(v[i].second);
            k--;
        }

        return ans;

       

        



        
    }
};