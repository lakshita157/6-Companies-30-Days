class Solution {
public:
    bool check(int i, int j, int n , int m){
        return i>=0 && j>=0 && i<n && j<m;
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>>vis(n, vector<int>(m, 0));
        vector<vector<char>>ans(n, vector<char>(m, 'X'));

        queue<pair<int,int>>q;

        for(int i=0; i<n; i++){
            if(board[i][0]=='O'){
                ans[i][0] = 'O';
                q.push({i, 0});
                vis[i][0] = 1;
            }

            if(board[i][m-1]=='O'){
                ans[i][m-1]='O';
                q.push({i, m-1});
                vis[i][m-1]=1;
            }
        }

        for(int j=0; j<m; j++){
            if(board[0][j] == 'O'){
                ans[0][j] = 'O';
                q.push({0, j});
                vis[0][j] = 1;
            }
            if(board[n-1][j]=='O'){
                ans[n-1][j]='O';
                q.push({n-1, j});
                vis[n-1][j] =1;
            }
        }

        int row[4] = {1,0,0,-1};
        int col[4] ={0,1,-1,0};
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i=0; i<4; i++){
                int newr = row[i]+r;
                int newc = col[i]+c;
                if(check(newr, newc, n, m) && vis[newr][newc]==0 && board[newr][newc]=='O' ){
                    vis[newr][newc]=1;
                    ans[newr][newc] = 'O';
                    q.push({newr, newc});
                }
            }

        }

        board = ans;
    }
};