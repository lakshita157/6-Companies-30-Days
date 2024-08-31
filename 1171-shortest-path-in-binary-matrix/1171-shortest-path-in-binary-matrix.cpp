class Solution {
public:
    bool check(int i, int j, int n, int m){
        return i>=0 && i<n && j>=0 && j<m;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1)return -1;

        int row[8] = {1,0,0,-1,1,-1,-1,1};
        int col[8] = {0,1,-1,0,-1,1,-1,1};

        vector<vector<int>>vis(n, vector<int>(m,0)); 
        queue<pair<int,int>>q;
        q.push({0,0});
        int ans =1;
        
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                if(r==n-1 && c==m-1){
                    return ans;
                }

                for(int i=0; i<8; i++){
                    int nr = r+row[i];
                    int nc = c+col[i];

                    if(check(nr, nc, n, m) &&  vis[nr][nc]==0 && grid[nr][nc]==0){
                        q.push({nr,nc});
                        vis[nr][nc]=1;
                    }
                }
            }
            ans++;
        }

        return -1;

    }
};