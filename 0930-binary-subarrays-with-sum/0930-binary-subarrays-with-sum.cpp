class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int totalsum=0;
        
        for(int i=0; i<nums.size();i++){
            totalsum+=nums[i];
            if(mp.find(totalsum-goal)!=mp.end()){
                ans+=mp[totalsum-goal];
            }

            mp[totalsum]++;
        }

        return ans;
    }
};

// 1 1 2 2 3