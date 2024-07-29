class Solution {
public:
    bool check(vector<vector<int>>& graph, int src, vector<int>&col ){
        col[src]=0;
        queue<int>q;
        q.push(src);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(int i=0; i<graph[node].size(); i++){
                if(col[graph[node][i]]==-1){
                    col[graph[node][i]]= !col[node];
                    q.push(graph[node][i]);
                }
                else if(col[graph[node][i]]==col[node]){
                    return false;
                }
            }
        }

        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();
       vector<int>col(n,-1);

       for(int i=0; i<n; i++){
        if(col[i]==-1 && check(graph,i,col)==false){
            return false;
        }
       }

        return true;
    }
};