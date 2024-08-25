#define ll long long
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int t) {
       
        int maxi = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }

        ll s =1, e=maxi;
        while(s<=e){
            ll mid = s+(e-s)/2;
            ll sum =0;
            for(int i=0; i<nums.size(); i++){
                sum+=ceil((1.0*nums[i])/mid);
            }

            if(sum>t){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }

        return s;
    }
};