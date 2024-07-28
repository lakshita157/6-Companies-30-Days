class Solution {
public:
    bool check(int i, int j, int n, int m){
        return i<n && j<m && i>=0 && j>=0;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        vector<vector<int>>ans(n, vector<int>(m,0));
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    cnt++;
                }
            }
        }

        // first row;
        for(int j=0; j<m; j++){
            if(grid[0][j]==1){
                q.push({0,j});
                ans[0][j]=1;
            }
            vis[0][j]=1;
        }

        // last row
        for(int j=0; j<m; j++){
            if(grid[n-1][j]==1){
                q.push({n-1, j});
                ans[n-1][j]=1;
            }
            vis[n-1][j]=1;
        }

        // first col
        for(int i=0; i<n;i++){
            if(grid[i][0]==1){
                q.push({i,0});
                ans[i][0]=1;
            }

            vis[i][0]=1;
        }

        // last col
        for(int i=0; i<n; i++){
            if(grid[i][m-1]==1){
                q.push({i, m-1});
                ans[i][m-1]=1;
            }
            vis[i][m-1]=1;
        }

        int row[4]= {1,0,0,-1};
        int col[4] = {0,1,-1,0};
        while(!q.empty()){
            int r=q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int nr = r+row[i];
                int nc=c+col[i];
                if(check(nr,nc,n,m) && vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    if(grid[nr][nc]==1){
                        ans[nr][nc]=1;
                        q.push({nr,nc});
                    }
                }
            }
        }

        int nc=0;
        for(int i=0; i<ans.size(); i++){
            for(int j=0; j<ans[0].size(); j++){
                if(ans[i][j]==1){
                    nc++;
                }
            }
        }

        return cnt-nc;
    }
};