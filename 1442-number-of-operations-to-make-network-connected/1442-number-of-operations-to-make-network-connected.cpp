class Solution {
public:
    void bfs(vector<vector<int>>&adj,  vector<int>&vis, int src){
        vis[src] = 1;
        queue<int> q;
        q.push(src);
        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto x: adj[node]){
                if(!vis[x]){
                    vis[x]=1;
                    q.push(x);
                }
            }
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        if (connections.size() < n - 1) return -1;

        vector<vector<int>>adj(n);
        for(const auto &x: connections){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }

        vector<int>vis(n,0);
        int cnt =0;

        for(int i=0; i<vis.size();i++){
            if(!vis[i]){
                cnt++;
                bfs(adj, vis, i);
            }
        }

        return cnt-1;
    }
};