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

    int solve(TreeNode* root, int &sum){
        if(root==NULL)return NULL;
        int left = solve(root->left, sum);
        int right = solve(root->right, sum);
        if(left<0 ){
            left=0;
        }
        if(right<0)right=0;

        sum= max(sum, left+right+root->val);
        return max(right, left)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL)return NULL;
        int sum = INT_MIN;
        solve(root, sum);
        

        return sum;

    }
};