class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
 

        vector < pair <int,int> > adj[n+1];
        
        for (auto edge : times){
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            adj[u].push_back({v,wt});
           
        }
        vector<int>dist(n+1 , INT_MAX);
      

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
        dist[k]=0;
     
        q.push({0, k});
        while(!q.empty()){
            int node = q.top().second;
            q.pop();
            // vis[node]=1;
            for(auto x:adj[node]){
                int nei = x.first;
                int wt = x.second;
                if(dist[node]+wt<dist[nei]){
                    dist[nei]=wt+dist[node];
                    q.push({dist[nei],nei});
                }
            }
        }

        int maxi = INT_MIN;
        for(int i=1; i<=n; i++){
            if(dist[i]==INT_MAX)return -1;
            maxi = max(maxi, dist[i]);
        }

        return maxi;

        
    }
};