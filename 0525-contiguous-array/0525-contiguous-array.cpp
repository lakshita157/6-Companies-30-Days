class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int maxlen =0, count=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==1){
                count+=1;
            }
            else{
                count+=-1;
            }

            if(count ==0){
                maxlen=i+1;
            }
            else if(mp.find(count)!=mp.end()){
                maxlen = max(maxlen, i-mp[count]);
            }
            else{
                mp[count]=i;
            }
        }

        return maxlen;
    }
};