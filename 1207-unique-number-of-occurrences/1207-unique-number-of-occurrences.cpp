class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0; i<arr.size();i++){
            mp[arr[i]]++;
        }

        vector<int>v;
        for(auto x:mp){
            int a = x.second;
            v.push_back(a);
        }

        sort(v.begin(),v.end());
        for(int i=0; i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                return false;
                break;
            }
        }

        return true;

       
    }
};