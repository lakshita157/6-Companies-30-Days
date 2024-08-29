class Solution {
public:
    void dfs(vector<vector<int>>& stones, int indx, vector<bool>&vis){
        vis[indx]=1;
        for(int i=0; i<stones.size(); i++){
            if(!vis[i] && (stones[i][0]==stones[indx][0] || stones[i][1]==stones[indx][1])){
                dfs(stones, i, vis);
            }
        }
    }

    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        // int m = stone[0].size();

        if(n<=1)return 0;
        vector<bool>vis(n, 0);
        int grp =0;
        for(int i=0; i<n; i++){
            if(vis[i]==1){
                continue;
            }
            dfs(stones, i, vis);
            grp++;
        }

        return n-grp;
    }
};