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
    

    int solve(TreeNode* root, int sum, string st){
        if(root==NULL) return 0;
        sum = (2*sum)+root->val;
        if(!root->left && !root->right){
            return sum;
        }

        return solve(root->left, sum, st)+ solve(root->right, sum, st);
    }
    int sumRootToLeaf(TreeNode* root) {
        if(root==NULL) return 0;
        // int sum =0;
        string s;
        return solve(root, 0, s);
        // return sum;
    }
};