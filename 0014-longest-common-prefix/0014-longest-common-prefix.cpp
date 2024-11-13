class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";
        sort(strs.begin(), strs.end());
        int n =strs.size()-1; 
        string fst= strs[0], lst = strs[n];
        for(int i=0; i<min(fst.length(), lst.length()); i++){
            if(fst[i]!=lst[i]){
                return ans;
            }
            ans+=fst[i];
        }

        return ans;
    }
};