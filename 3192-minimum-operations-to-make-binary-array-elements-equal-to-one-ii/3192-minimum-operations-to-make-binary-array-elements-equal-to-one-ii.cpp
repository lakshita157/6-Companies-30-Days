class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                if(sum%2==1) sum++;
            }
            else{
                if(sum%2==0) sum++;
            }
        }

        return sum;
    }
};