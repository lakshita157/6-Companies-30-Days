class Solution {
public:
    int solve(vector<int>& wt, int i){
        int day =1, load =0;
        int n = wt.size();
        for(int j=0; j<n; j++){
            if(load+wt[j]>i){
                day+=1;
                load = wt[j];
            }
            else{
                load+=wt[j];
            }
        }

        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int cnt =0;
        int sum =0;
        int maxi = INT_MIN;
        for(int i=0;  i<weights.size() ; i++){
            sum+=weights[i];
            maxi = max(maxi, weights[i]);
        }
        

        // for(int i=maxi; i<=sum; i++){
        //     int dayreq = solve(weights, i);
        //     cout<<dayreq<<endl;
        //     if(dayreq <= days){
        //         return i;
        //     }
        // }


        int low = maxi;
        int high = sum;
        while(low<=high){
            int mid = low+(high-low)/2;
            int dayreq = solve(weights, mid);
            if(dayreq<=days){
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }

        return low;

        
    }
};