class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<long long ,long long>>adj[n];
        for(auto it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }

        vector<long long>dist(n, LLONG_MAX);
        vector<long long>ways(n,0);

        priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<pair<long long,long long>>>q;

        q.push({0,0});
        dist[0]=0;
        ways[0]=1;
        
        const long long mod = 1e9+7;
        while(!q.empty()){
            long long dis = q.top().first;
            long long node = q.top().second;
            q.pop();
            for(auto x: adj[node]){
                 long long adjn = x.first;
                 long long adjwt = x.second;

                if(dis+adjwt<dist[adjn]){
                    dist[adjn] = dis+adjwt;
                    q.push({dist[adjn], adjn});
                    ways[adjn]=ways[node];
                }
                else if(dis+adjwt == dist[adjn]){
                    ways[adjn] = (ways[adjn]+ways[node])%mod;
                }
            }
        }

        return ways[n-1]%mod;


    }
};