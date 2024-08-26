class Solution {
public:
    bool checkPossi(vector<int>&b, int d, int m, int k){
        int cnt =0;
        int bouq=0;
        for(int i=0; i<b.size(); i++){
            if(b[i]<=d){
                cnt++;
            }
            else{
                bouq += (cnt/k);
                cnt =0;
            }
        }

        bouq +=(cnt/k);
        
        if(bouq>=m)return true;
        return false;
    }
    int minDays(vector<int>& b, int m, int k) {
        int n = b.size();
        if((long long)m*k>n)return -1;
        
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0; i<b.size(); i++){
            maxi = max(maxi, b[i]);
            mini = min(mini, b[i]);
        }

        int s = mini;
        int e = maxi;
        int ans = 0;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(checkPossi(b,mid,m,k)==true) {
                ans = mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }

        return ans;


    }
};