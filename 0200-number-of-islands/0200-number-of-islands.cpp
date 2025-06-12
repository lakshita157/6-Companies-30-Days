class Solution {
public:
    bool check(int n, int m, int i, int j){
        return i>=0 && j>=0 && i<n && j<m;
    }

    void bfs(vector<vector<char>>& grid,vector<vector<int>>&vis, int i, int j ){ 
        vis[i][j] =1;

        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({i, j});
       
        int r[4] = {1,0,0,-1};
        int c[4] = {0,1,-1,0};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;

            q.pop();

            for(int k=0; k<4; k++){
                int newr = row+r[k];
                int newc = col+c[k];

                if(check(n,m, newr, newc) && vis[newr][newc]==0 && grid[newr][newc] == '1'){
                    vis[newr][newc] =1;
                    q.push({newr, newc});
                }
            }

        }

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m= grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m,0));
        int cnt =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    bfs(grid, vis, i, j);
                    cnt++;
                }
            }
        }

        return cnt;
    }
};