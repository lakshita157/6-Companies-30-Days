class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int mul = 1;
        for(int i=0; i<nums.size(); i++){
            mul*=nums[i];
            maxi = max(maxi, mul);
            if(mul==0)mul = 1;
            cout<<maxi<<" ";
        }

        mul =1;
        for(int i=nums.size()-1; i>=0 ; i--){
            mul*=nums[i];
            maxi = max(maxi, mul);
            if(mul==0)mul =1;
        }

        return maxi;
    }
};