class Solution {
public:
    int solve(vector<int>& nums, int n,int mid ){
        int sum =0, split=1;
        for(int i=0; i<n; i++){
            if(sum+nums[i]>mid){
                sum = nums[i];
                split++;
            }

            else{

                sum+=nums[i];
            }
        }

        return split;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum=0, maxi = INT_MIN;
        int n = nums.size();
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            maxi = max(maxi, nums[i]);
        }

        int result = -1;

        int low = maxi, high = sum;
        while(low<=high){
            int mid = low+(high-low)/2;
            int split = solve(nums, n, mid);
            
            cout<<split<<" ";
            if(split<=k){
                result = mid;
                high=mid-1;
            }
            else{
                low = mid+1;
            }

        }

        return result;

    }
};