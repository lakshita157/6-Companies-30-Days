class Solution {
public:
bool check(int i, int j, int n, int m){
    return i>=0 && j>=0 && i<n && j<m;
}
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        // vector<vector<int>>vis(n, vector<int>(m, 0));

        queue<pair<pair<int,int>,int>>q;
        int cnt=0;
        vector<vector<int>> ans(n, vector<int>(m, INT_MAX));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0){
                    q.push({{i, j}, 0});
                    ans[i][j]=0;
                }
            }
        }

        if(q.empty()){
            return ans;
        }

        int row[4] = {1, 0, -1, 0};
        int col[4] = {0, 1, 0, -1};

        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int temp = q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                if(check(r+row[i], c+col[i], n, m) && ans[r+row[i]][c+col[i]]>temp+1){
                    q.push({{r+row[i], col[i]+c}, temp+1});
                    ans[r+row[i]][c+col[i]]=temp+1;
                }
            }
        }

        return ans;


    }
};