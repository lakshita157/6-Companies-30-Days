class Solution {
public:

    vector<int> bfs(int V, vector<int> adj[]){
        vector<int> indegree(V,0);

        for(int i=0; i<V; i++){
            for(int j=0; j<adj[i].size();j++){
                indegree[adj[i][j]]++;
            }
        }

        vector<int> ans;
        queue<int> q;

        for(int i=0; i<V; i++){
            if(!indegree[i]){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node = q.front();
            q.pop();

            ans.push_back(node);

            for(int i=0; i<adj[node].size();i++){
                indegree[adj[node][i]]--;
                if(indegree[adj[node][i]]==0){
                    
                    q.push(adj[node][i]);
                }
            }
        }
        if(ans.size()==V)
            return ans;

        return {};    
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];

        for(auto it:prerequisites ){
            adj[it[1]].push_back(it[0]);
        }

        return bfs(numCourses, adj);

    }
};
// 1->0
// 2->0
