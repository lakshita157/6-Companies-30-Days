/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void solve(vector<int>&v,Node* root ){
        if(root==NULL)return;

        for(auto i: root->children){
            solve(v,i);
        }

        v.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int>ans;
        solve(ans,root);
        return ans;
    }
};