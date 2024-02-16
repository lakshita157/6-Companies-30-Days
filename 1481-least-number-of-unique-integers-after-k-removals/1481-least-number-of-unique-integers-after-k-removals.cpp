class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int cnt=0;
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }

        vector<int>v;
        for(auto x:mp){
            v.push_back(x.second);
        }
        int elementremove =0;
        sort(v.begin(),v.end());
        for(int i=0; i<v.size();i++){
            elementremove+=v[i];
            if(elementremove>k){
                return v.size()-i;
            }
        }

        return 0;
    }
};