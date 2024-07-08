class Solution {
public:
    
    void dfs(vector<vector<int>>& grid, int r, int c,  vector<vector<int>>&vis, queue<pair<int, pair<int,int>>>&q){
        int n = grid.size();
        int m = grid[0].size();
        if(vis[r][c]==0){
            vis[r][c]=1;
            q.push({0,{r,c}});
            int row[] = {-1,0, 1, 0};
            int col[] = {0, 1, 0, -1};
            for(int i=0; i<4; i++){
                int nr = r+row[i];
                int nc = c+ col[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && vis[nr][nc]==0){
                    dfs(grid, nr, nc, vis, q);
                }
            }
        }
    }


    int shortestBridge(vector<vector<int>>& grid) {
        int cnt=0;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, pair<int,int>>>q;
        vector<vector<int>>vis(n, vector<int>(m, 0));
        for(int i=0; i<n; i++){
            for(int j =0; j<m; j++){
                if(grid[i][j]==1 && vis[i][j]==0 && cnt<1){
                    dfs(grid, i, j, vis, q);
                    cnt++;
                   
                }
            }
        }

        int ans = INT_MAX;
        while(!q.empty()){
            int row = q.front().second.first;
            int col = q.front().second.second;
            int dist = q.front().first;
            q.pop();
            int rn[] = {-1, 0, 1, 0};
            int cn[] = {0, -1, 0, 1};

            for(int i=0; i<4; i++){
                int nr = row+rn[i];
                int nc  = col+cn[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==0 && vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    q.push({dist+1, {nr, nc}});
                }
                else if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && vis[nr][nc]==0){
                    ans = min(ans, dist);
                }
            } 
        }

        return ans;

    }
};