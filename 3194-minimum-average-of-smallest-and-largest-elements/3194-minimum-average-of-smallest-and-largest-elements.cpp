class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i=0;
        int j = n-1;
        double ans = 1000;
        while(i<j){
            double x = (nums[i]+nums[j])*(0.5);
            ans = min(ans, x);
            i++;
            j--;
        }

        return ans;
    }
};