class Solution {
public:
    bool check(vector<int>& v) {
        for (int i = 0; i < v.size() - 1; ++i) {
            if (v[i] + 1 != v[i + 1]) {
                return false;
            }
        }
        return true;
    }

    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        
        for (int i = 0; i <= n - k; ++i) {
            vector<int> v(nums.begin() + i, nums.begin() + i + k);
            
            if (check(v)) {
                int maxi=0;
                for(int i=0; i<v.size(); i++){
                    maxi = max(maxi,v[i] );
                    
                }
                ans.push_back(maxi);
            } else {
                ans.push_back(-1);
            }
        }
        
        return ans;
    }
};