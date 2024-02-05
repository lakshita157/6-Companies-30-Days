class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0;
        int ans =0;
        int x=0;
        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
            x=sum%k;
            if(x==0 && i>0){
                return true;
            }

            if(mp.count(x) && (i-mp[x]>=2)){
                return true;
            }

            if(mp.count(x)==0){
                mp[x]=i;
            }

        }

        return false;
        
    }
};