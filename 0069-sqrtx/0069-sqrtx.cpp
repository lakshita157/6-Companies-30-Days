class Solution {
public:
    int mySqrt(long long int x) {
        long long int s=0;
        long long int e = x;
        long long int ans = -1;
        while(s<=e){
            long long int mid = s+(e-s)/2;
            long long sq = mid*mid;
            if(sq == x){
                return mid;
            }
            else if(sq>x){
                e=mid-1;
            }
            else{
                s=mid+1;
                ans = mid;
            }
        }

        return ans;
    }
};