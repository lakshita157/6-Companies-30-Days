class Solution {
public:
    bool check(int i, int j, int n, int m){
        return i>=0 && j>=0 && i<n && j<m;
    }
    int maxDistance(vector<vector<int>>& grid) {
        int ze=0, on=0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==0){
                    ze++;
                }
                else{
                    on++;
                }
            }
        }

        if(ze==0 || on==0){
            return -1;
        }

        

            vector<vector<int>>vis(n, vector<int>(m, 0));
            int row[4] = {1,0,0, -1};
            int col[4] = {0, 1, -1, 0};

            queue<pair<int,int>>q;

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(grid[i][j]==1){
                        q.push({i,j});
                    }
                }
            }

            int ans =0;
            while(!q.empty()){
                int s = q.size();
                ans++;

                while(s--){
                    int u = q.front().first;
                    int v = q.front().second;

                    q.pop();
                    for(int i=0; i<4; i++){
                        int newu = u+row[i];
                        int newv = v+col[i];
                        if(check(newu, newv, n, m) && grid[newu][newv]==0){
                            grid[newu][newv]=1;
                            q.push({newu, newv});
                        }
                    }
                }
            }
        

        return ans-1;
    }
};