class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
       
           
            for(int j=0; j<queries.size();j++){
                int left = queries[j][0];
                int right = queries[j][1];
                 int x =0;
                for(int k=left; k<=right; k++){
                    x^=arr[k];
                }
               ans.push_back(x);
            }
             
        
        return ans;
    }
};