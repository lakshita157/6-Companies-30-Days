class Solution {
public:
     int check(int i, int j, int n, int m){
        return i>=0  && j>=0 && i<n && j<m; 
    } 

    void bfs(vector<vector<char>>& grid, int i, int j, vector<vector<int>>&vis){
        int n = grid.size();
        int m = grid[0].size();
        int row[4] = {0,0,1,-1};
        int col[4] = {1,-1,0,0};
        vis[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int newr = r+row[i];
                int newc = c+ col[i];
                if(check(newr, newc, n, m) && grid[newr][newc]=='1' && !vis[newr][newc]){
                    q.push({newr, newc});
                    vis[newr][newc]=1;
                }
            }
        }

    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m,0));
        
        int cnt =0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    cnt++;
                    bfs(grid, i, j, vis);
                }
            }
        }

        return cnt;

    }
};