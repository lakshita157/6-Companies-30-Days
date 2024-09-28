class Solution {
public:
    void dfs(vector<vector<int>>& stones, vector<int>&vis, int src){
        vis[src]=1;
        for(int i=0; i<stones.size(); i++){
            if(!vis[i]&& (stones[i][0] == stones[src][0] || stones[i][1] == stones[src][1])){
                dfs(stones, vis, i);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<int> vis(n,0);
        int ans =0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                dfs(stones, vis, i);
                ans++;
            }
        }

        return n-ans;
    }
};