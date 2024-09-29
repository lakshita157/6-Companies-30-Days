class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i=0; i<matrix.size(); i++){
        //     for(int j=0; j<matrix[0].size(); j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }

        // return false;
        int n = matrix.size();
        int m = matrix[0].size();
        int s=0, e= n*m-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            int r = mid/m;
            int c = mid%m;
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }

        return false;
    }
};