class Solution {
public:
    bool check(int i, int j, int n , int m){
        return i>=0 && j>=0 && i<n && j<m;
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>>diff(n, vector<int>(m,INT_MAX));
        diff[0][0]=0;
        int ans =0;
        int row[4]= {1,0,0,-1};
        int col[4] = {0,1,-1,0};

        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>q;
        
        q.push({0,0});

        while(!q.empty()){
            int r = q.top().first;
            int c = q.top().second;

            q.pop();

            for(int i=0; i<4; i++){
                int nr = r+row[i];
                int nc = c+col[i];

                if(check(nr,nc, n,m) ){
                    int ndi = max(diff[r][c], abs(heights[r][c]-heights[nr][nc]));

                    if(ndi < diff[nr][nc]){
                        diff[nr][nc]=ndi;
                        q.push({nr,nc});
                    }
                }
            }
        
        }
        return diff[n-1][m-1];

    }
};