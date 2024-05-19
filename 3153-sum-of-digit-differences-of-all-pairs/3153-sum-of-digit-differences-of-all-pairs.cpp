#define ll long long
class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {

        vector<vector<ll>>v(10, vector<ll>(10,0));
        for(auto x: nums){
            int i=0;
            while(x>0){
                v[i][x%10]++;
                x/=10;
                i++;
            }
        }
        
        ll ans =0;
        for(auto x:v){
            ll sum =0;
            for(int i=0; i<10; i++){
                
                if(x[i]==0)continue;

                for(int j=i+1; j<10; j++){
                    if(x[j]==0) continue;
                    sum+=(x[i]*x[j]);
                }
            }

            ans+=sum;
        
        }

        return ans;




        // sort(nums.begin(),nums.end());
        // int cnt=0;
        // for(int i=0; i<nums.size();i++){
        //     string str = to_string(nums[i]);

        //     for(int j=i+1; j<nums.size(); j++){
        //         string s = to_string(nums[j]);

        //         for(int k=0; k<s.length();k++){
        //             if(s[k]!= str[k]) cnt++;
        //         }
        //     }
        // }

        // return cnt;
        
        
    }
};