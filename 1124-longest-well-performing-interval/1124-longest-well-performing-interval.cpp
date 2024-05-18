class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int tiring =0, ans =0;
        unordered_map<int,int>mp;
        for(int i=0; i<hours.size();i++){
            if(hours[i]>8) tiring++;
            else tiring--;
            if(tiring>0) ans = i+1;
            else{
                if(mp.find(tiring)==mp.end()){
                    mp[tiring] = i;
                    // cout<<tiring<<" "<<mp[tiring]<<endl;
                }
                if(mp.find(tiring-1)!=mp.end()){
                    ans = max(ans, i-mp[tiring-1] );
                    // cout<<tiring-1<<" "<<mp[tiring-1]<<" "<<ans<<endl;
                }
            }
        }

        return ans;
    }
};