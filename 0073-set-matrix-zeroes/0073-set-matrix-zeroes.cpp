class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix);
        for(int i=0; i<matrix.size();i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    int x = i, y=j;
                    for(int k=0; k<matrix[0].size(); k++){
                        ans[x][k]=0;
                    }
                    for(int k = 0; k<matrix.size(); k++){
                        ans[k][y]=0;
                    }
                }
            }
        }

       
        matrix=ans;


























        // vector<vector<int>>ans(matrix);
        // int row = matrix.size();
        // int col = matrix[0].size();

        // for(int i=0; i<row; i++){
        //     for(int j=0; j<col; j++){
        //         if(matrix[i][j]==0){
        //             int x=i;
        //             int y=j;
        //             for(int k=0; k<col; k++){
        //                 ans[x][k]=0;
        //             }

        //              for(int k=0; k<row; k++){
        //                 ans[k][y]=0;
        //             }
        //         }
        //     }
        // }

        

        // for(int i=0; i<row; i++){
        //     for(int j=0; j<col; j++){
        //         matrix[i][j] = ans[i][j];
        //     }
        // }
    }
};