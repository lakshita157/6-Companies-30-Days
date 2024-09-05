class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int de = n+m;
        int sum =0;
        for(int i=0; i<m; i++){
            sum+=rolls[i];
        }

        mean*=de;
        mean-=sum;
        if(mean<n || mean>6*n){
            return {};
        }

        // if(mean%n==0){
        //     int x = mean/n;
        //     if(x<=6){
        //         while(n--){
        //             ans.push_back(x);
        //         }
        //         return ans; 
        //     }

            

        //     else{
        //         return {};
        //     }
            
        // }
        vector<int> ans1(n, mean / n);
        int remain = mean % n;

          
        for (int i = 0; i < remain; i++) {
            ans1[i]++;
        }
        

        return ans1;

    }
};