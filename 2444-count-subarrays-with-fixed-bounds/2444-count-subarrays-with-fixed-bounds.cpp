class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans =0;
        int x=-1, left =-1,  right = -1;

        for(int i=0; i<nums.size();i++){
            if(!(nums[i]>=minK && nums[i]<=maxK)){
                x=i;
            }
            if(nums[i]==minK){
                left = i;
            }
            if(nums[i]==maxK){
                right = i;
            }
            // cout<<i<<" "<<nums[i]<<" "<<x<<" "<<left<<" "<<right<<" "<<ans<<endl;
            ans+=max(0, min(left, right)-x);
        }
        return ans;
    }
};

// 1 3 5 2 7 5 min = 1, max = 5
//  i=0   left = 0 res= 0
//  i=1 
