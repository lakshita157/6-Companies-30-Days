class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt =0;
        for(int i=0; i<words.size(); i++){
            unordered_map<char,int>mp;
            string st = words[i];
            for(int j=0; j<st.size(); j++){
                mp[st[j]]++;
            }

            if(mp.size()<=allowed.size()){
                int m =0;
                for(auto x:mp){
                    for(int k=0; k<allowed.size(); k++ ){
                        if(x.first==allowed[k]){
                            m++;
                        }
                    }
                }

                if(m==mp.size()){
                    cnt++;
                }

                
            }
        }

        return cnt;
    }
};