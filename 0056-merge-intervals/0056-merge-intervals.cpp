class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // int start = intervals[0][0];
        // int end = intervals[0][1];
        vector<vector<int>>ans;
        sort(intervals.begin(), intervals.end());
        ans.push_back({intervals[0][0], intervals[0][1]});
        int n = intervals.size();
        for(int i=1; i<n; i++){
            if(ans.back()[1]>=intervals[i][0]){
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
                // end = max(end, intervals[i][1]);
            }
            else{
                ans.push_back({intervals[i][0], intervals[i][1]});
                // start = intervals[i][0];
                // end = intervals[i][1];
            }
        }
        return ans;
    }
};