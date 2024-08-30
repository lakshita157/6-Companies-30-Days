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
    int height(TreeNode* root, int ans){
        if(root==NULL)return 0;
        int lft = height(root->left,ans);
        int rt = height(root->right,ans);
         ans = max(lft, rt)+1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        int lft = height(root->left,0);
        int rt = height(root->right,0);
        
        bool lf = isBalanced(root->left);
        bool r = isBalanced(root->right);

        if(abs(lft-rt)<=1 && lf && r){
            return true;
        }

        return false;
    }
};