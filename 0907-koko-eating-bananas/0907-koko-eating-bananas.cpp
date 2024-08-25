#define ll long long
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ll s = 1, e = 1e9+7;
        while(s<=e){
            ll sum=0;
            ll mid = s+(e-s)/2;
            for(int i=0; i<piles.size(); i++) sum+= ceil(1.0* piles[i]/mid);
            if(sum>h)s=mid+1;
            else e = mid-1;
        }

        return s;
    }
};