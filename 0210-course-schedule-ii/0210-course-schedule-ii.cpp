class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& a) {
        vector<int>adj[n];

        for(auto it:a){
            adj[it[1]].push_back(it[0]);
        }

        vector<int>inorder(n);
        for(int i=0; i<n; i++){
            for(auto it: adj[i]){
                inorder[it]++;
            }
        }

        queue<int>q;

        for(int i=0; i<n; i++){
            if(inorder[i]==0)q.push(i);
        }

        vector<int> topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();

            topo.push_back(node);
            for(auto x: adj[node]){
                inorder[x]--;
                if(inorder[x]==0){
                    q.push(x);
                }
            }
        }

        if(topo.size()==n)return topo;
        return {};
    }
};