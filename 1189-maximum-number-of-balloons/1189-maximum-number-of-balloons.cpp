class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(auto x:text){
            mp[x]++;
        }
        // int ans=0;
        int bcount=0;
        int acount=0;
        int lcount=0;
        int ocount=0;
        int ncount=0;
        for(auto x:mp){
            if(x.first=='b'){
                bcount=x.second;
            }
            else if(x.first=='a'){
                acount=x.second;
            }
            else if(x.first=='l'){
                lcount=x.second;
            }
            else if(x.first=='o'){
                ocount=x.second;
            }
            else if(x.first=='n'){
                ncount=x.second;
            }

        }

        int ans = min(acount, min(bcount, min(lcount/2, min(ocount/2, ncount))));

        return ans;
    }
};