class Solution {
public:
    bool issafe(int row, int col, vector<string>board, int n){
        int duprow =row;
        int dupcol= col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        row = duprow;
        col = dupcol;
        while(col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
        }
        row = duprow;
        col = dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    void func(int col, int n, vector<vector<string>>&ans,vector<string> &board ){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int row=0; row<n; row++){
            if(issafe(row, col, board, n)){
                board[row][col] = 'Q';
                func(col+1, n, ans, board);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string >> ans;
        vector<string> board(n, string(n, '.'));

        func(0,n,ans,board);
        return ans;

    }
};