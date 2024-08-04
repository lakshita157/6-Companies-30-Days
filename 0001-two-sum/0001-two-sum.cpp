class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // vector<int> ans;
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size();i++){
            int num = nums[i];
            int x = target-nums[i];
            if(mp.find(x) != mp.end()){
                return {mp[x],i};
            }
            mp[num] = i;
        }

        return {-1,-1};
    }
};