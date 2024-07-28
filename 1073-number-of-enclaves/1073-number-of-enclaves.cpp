class Solution {
public:
    bool check(int i, int j, int n, int m) {
        return i < n && j < m && i >= 0 && j >= 0;
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        int cnt = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    cnt++;
                }
            }
        }

        // Enqueue all border cells that are land
        for(int j = 0; j < m; j++) {
            if(grid[0][j] == 1) {
                q.push({0, j});
                vis[0][j] = 1;
            }
            if(grid[n-1][j] == 1) {
                q.push({n-1, j});
                vis[n-1][j] = 1;
            }
        }
        for(int i = 0; i < n; i++) {
            if(grid[i][0] == 1) {
                q.push({i, 0});
                vis[i][0] = 1;
            }
            if(grid[i][m-1] == 1) {
                q.push({i, m-1});
                vis[i][m-1] = 1;
            }
        }

        // Directions for moving in 4 possible directions
        int row[4] = {1, 0, 0, -1};
        int col[4] = {0, 1, -1, 0};

        while(!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++) {
                int nr = r + row[i];
                int nc = c + col[i];
                if(check(nr, nc, n, m) && vis[nr][nc] == 0 && grid[nr][nc] == 1) {
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }

        // Count number of enclaves
        int nc = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1 && vis[i][j] == 0) {
                    nc++;
                }
            }
        }

        return nc;
    }
};
