class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // for(int i=0; i<matrix.size(); i++){
        //     for(int j=0; j<matrix[0].size(); j++){
        //         if(matrix[i][j]==target)return true;
        //     }
        // }

        // return false;

        int row = matrix.size();
        int col = matrix[0].size();

        int rowind = 0;
        int colind = col-1;
        while(rowind<row && colind >=0){
            if(matrix[rowind][colind]==target)return true;
            else if(matrix[rowind][colind]>target)colind--;
            else rowind++;
        }

        return false;
    }
};