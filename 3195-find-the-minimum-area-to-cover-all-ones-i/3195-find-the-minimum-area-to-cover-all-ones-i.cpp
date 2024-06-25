class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int minix = INT_MAX, miniy = INT_MAX;
        int maxix = INT_MIN, maxiy = INT_MIN;
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0; i<n; i++ ){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    minix = min(minix, i);
                    miniy = min(miniy, j);
                    maxix = max(maxix, i);
                    maxiy = max(maxiy, j);
                }
            }
        }

        return (maxix-minix+1)*(maxiy-miniy+1);
    }
};

