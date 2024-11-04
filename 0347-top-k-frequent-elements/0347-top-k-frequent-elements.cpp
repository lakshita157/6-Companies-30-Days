class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        priority_queue<pair<int,int>>q;
        for(auto x: mp){
            q.push({x.second, x.first});
        }
        vector<int> ans;
        while(k>0){
            ans.push_back(q.top().second);
            q.pop();
            k--;
        }

        return ans;


    }
};