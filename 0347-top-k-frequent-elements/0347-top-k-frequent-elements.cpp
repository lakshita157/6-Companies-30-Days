class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int> ans;
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            pq.push({x.second, x.first});
        }

        int cnt =0;
        while(cnt<k){
            int topi = pq.top().second;
            ans.push_back(topi);
            pq.pop();
            cnt++;
        }

        return ans;


    }
};