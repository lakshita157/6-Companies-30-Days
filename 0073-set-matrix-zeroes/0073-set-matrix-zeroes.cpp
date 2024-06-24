class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix);
        int row = matrix.size();
        int col = matrix[0].size();

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j]==0){
                    int x=i;
                    int y=j;
                    for(int k=0; k<col; k++){
                        ans[x][k]=0;
                    }

                     for(int k=0; k<row; k++){
                        ans[k][y]=0;
                    }
                }
            }
        }

        

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                matrix[i][j] = ans[i][j];
            }
        }
    }
};