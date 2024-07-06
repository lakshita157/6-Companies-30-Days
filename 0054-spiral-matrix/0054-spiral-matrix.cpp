class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int startingrow =0, startingcol=0;
        int endingrow = n-1, endingcol = m-1;
        int total = m*n;
        int cnt =0;
        while(cnt<total){
            for(int i=startingcol; i<=endingcol && cnt<total; i++){
                ans.push_back(matrix[startingrow][i]);
                cnt++;
            }
            startingrow++;

            for(int j=startingrow; j<=endingrow && cnt<total ;j++){
                ans.push_back(matrix[j][endingcol]);
                cnt++;
            }
            endingcol--;

            for(int i=endingcol; i>=startingcol && cnt<total; i--){
                ans.push_back(matrix[endingrow][i]);
                cnt++;
            }

            endingrow--;

            for(int j=endingrow; j>=startingrow && cnt<total ; j--){
                ans.push_back(matrix[j][startingcol]);
                cnt++;
            }
            startingcol++;

        }

        return ans;
    }
};