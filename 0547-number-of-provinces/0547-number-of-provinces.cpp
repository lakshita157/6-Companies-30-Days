class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<bool>&visit, int node){
        
        if(visit[node]==1) return;

        visit[node] = 1;
        for(int j=0; j<isConnected[node].size();j++){
            if(isConnected[node][j]){
                dfs(isConnected,visit,j);
            }
        }

        return;

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>visit(n,0);
       int ans=0;
       
       for(int i=0; i<n; i++){
            if(!visit[i]){
                
                dfs(isConnected, visit, i);
                ans++;
            }
       } 

       return ans;
    }
};