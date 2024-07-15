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

    void solve(TreeNode* &root, int target){
        if(root == NULL ){
            return;
        }

        if(root->left && root->left->val == target && root->left->left == NULL && root->left->right == NULL){
            root->left = NULL;
        }

        if(root->right && root->right->val == target && root->right->left == NULL && root->right->right == NULL){
            root->right = NULL;
        }

        solve(root->left, target);
        solve(root->right, target);

        if(root->val == target && root->left == NULL && root->right == NULL){
            root = NULL;
        }

    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        solve(root, target);
        return root;
    }
};