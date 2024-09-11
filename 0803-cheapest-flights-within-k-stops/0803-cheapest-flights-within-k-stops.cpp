class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];

        for(auto it: flights){
            adj[it[0]].push_back({it[1], it[2]});
            
        }

        vector<int>dist(n, INT_MAX);

        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}}); //stop src dist

        dist[src]=0;

        while(!q.empty()){
            int stop = q.front().first;
            int node = q.front().second.first;
            int dis = q.front().second.second;

            q.pop();

            if(stop>k)continue;

            for(auto it: adj[node]){
                int adjn = it.first;
                int adjwt = it.second;

                if(adjwt+dis<dist[adjn] && stop<=k){
                    dist[adjn]=adjwt+dis;
                    q.push({stop+1,{adjn,dist[adjn] }});

                }
            }
        }

        if(dist[dst]==INT_MAX){
            return -1;
        }

        return dist[dst];
        
    }
};