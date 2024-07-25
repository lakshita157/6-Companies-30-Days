class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]]++;
        // }

        // for(int i=0; i<nums.size()+1; i++){
        //     if(mp.find(i)==mp.end())return i;
        // }

        // return -1;

        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i]-i;
        }

        sum -=nums.size();
        return abs(sum);
    }
};