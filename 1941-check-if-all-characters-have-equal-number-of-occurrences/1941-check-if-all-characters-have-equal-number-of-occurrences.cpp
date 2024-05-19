class Solution {
public:
    bool areOccurrencesEqual(string s) {
      unordered_map<char, int> mp;
      for(auto x: s){
        mp[x]++;
      }  
        vector<int> v;
      for(auto x: mp){
        v.push_back(x.second);
      }
    
      for(int i=1; i<v.size();i++){
        
        if(v[i-1]!=v[i]) {
            return false;
            break;
        }

      }

      return true;
    }

};