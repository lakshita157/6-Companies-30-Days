class Solution {
public:
    bool check(int i, int j, int n, int m){
        return i>=0 && j>=0 && i<n && j<m;
    }
    void solve(vector<vector<char>>& b) {
        int n = b.size();
        int m = b[0].size();
        vector<vector<char>>ans(n, vector<char>(m,'X'));
        vector<vector<bool>>visit(n, vector<bool>(m,0));
        queue<pair<int,int>>q;
        int row[4] = {-1, 0, 0, 1};
        int col[4] = {0, -1, 1, 0};

        // first row
        for(int i=0; i<m; i++){
            if(b[0][i]=='O'){
                q.push({0,i});
                ans[0][i]= 'O';
            }

            visit[0][i] = 1;
        }

        // last row
        for(int i=0; i<m; i++){
            if(b[n-1][i]=='O'){
                q.push({n-1, i});
                ans[n-1][i] = 'O';
                
            }
            visit[n-1][i] = 1;
        }
        
        // first col
        
        for(int i=1; i<n-1; i++){
            if(b[i][0]=='O'){
                q.push({i,0});
                ans[i][0]='O';
                
            }
            visit[i][0] = 1;
        }
        
        // last col
        for(int i=1; i<n-1; i++){
            if(b[i][m-1]=='O'){
                q.push({i,m-1});
                ans[i][m-1]='O';
               
            }
             visit[i][m-1] = 1;
        }

        while(!q.empty()){
            int u = q.front().first;
            int v = q.front().second;
            q.pop();
            for(int k=0; k<4; k++){
                if(check(u + row[k], v + col[k], n, m)  && visit[u + row[k]][v + col[k]]==0){
                    visit[u + row[k]][v + col[k]] = 1;
                    if(b[u + row[k]][v + col[k]] == 'O' ){
                        ans[u + row[k]][v + col[k]] = 'O';
                        q.push({u + row[k], v + col[k] });
                        
                    }
                }
            }
        }
        b = ans;
    }
};