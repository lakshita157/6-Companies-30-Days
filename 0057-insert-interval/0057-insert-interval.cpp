class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& n) {

        vector<vector<int>> ans;
        for(int i=0; i<v.size();i++){
            if(n[0]> v[i][1]){
                ans.push_back(v[i]);
            }
            else if(n[1]<v[i][0]){
                ans.push_back(n);
                n = v[i];
            }

            else{
                n[0] = min(n[0], v[i][0]);
                n[1] = max(n[1], v[i][1]);
            }

            
        }

        ans.push_back(n);

        return ans;
        
    }
};