/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(!root)return true;
        queue<TreeNode*>q;
        q.push(root);
        bool temp = false;
        while(!q.empty()){
            TreeNode* n = q.front();
            q.pop();
            if(n){
                if(temp) return false;
                q.push(n->left);
                q.push(n->right);
            }
            else{
                temp = true;
            }
        }

        return temp;
    }
};