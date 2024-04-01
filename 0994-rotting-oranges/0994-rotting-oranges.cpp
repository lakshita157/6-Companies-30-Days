class Solution {
public:
    bool check(int i, int j, int n, int m){
        return i>-1 && j>-1 && i<n && j<m;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        int n = grid.size();
        int m = grid[0].size();
        int goodoranges =0;
        for(int i=0; i<n; i++ ){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    goodoranges++;
                }

                else if(grid[i][j] == 2){
                    q.push({{i,j},0});
                }
            }
        }

        int row[4] = {1,-1,0,0};
        int col[4] = {0, 0, 1, -1};
        int i, j, timer =0;
        while(!q.empty()){
            i= q.front().first.first;
            j = q.front().first.second;
            timer = q.front().second;

            q.pop();

            for(int k=0; k<4; k++){
                if(check(i+row[k], j+col[k], n, m) && grid[i+row[k]][j+col[k]]==1){
                    grid[i+row[k]][j+col[k]]=0;
                    goodoranges--;
                    q.push({{i+row[k],j+col[k]},timer+1});
                }
            }
        }
        if(goodoranges!=0) return -1;
        return timer;
    }
};