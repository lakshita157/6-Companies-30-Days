class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=1; i<nums.size();i++){
            int diff =0;
            if(nums[i]==nums[i-1]){
                 diff = 1;
                
            }
            else if(nums[i]<nums[i-1]){
                diff = abs(nums[i]-nums[i-1])+1;
            }
            cout<<nums[i]<<" "<<diff<<" "<<cnt<<endl;
            cnt+=diff;
            nums[i]+=diff;
        }

        return cnt;

    }
};


