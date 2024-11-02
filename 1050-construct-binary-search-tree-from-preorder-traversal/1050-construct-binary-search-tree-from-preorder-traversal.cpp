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
   
    TreeNode* bstFromPreorder(vector<int>& p) {
        if(p.size()==NULL)return NULL;
        vector<int> lft, rgt;
        for(int i=0; i<p.size(); i++){
            if(p[i]<p[0]){
                lft.push_back(p[i]);
            }

            if(p[i]>p[0]){
                rgt.push_back(p[i]);
            }
        }

        TreeNode* root = new TreeNode(p[0]);

        root->left =  bstFromPreorder(lft);
        root->right =  bstFromPreorder(rgt);
        return root;

    }
};

// pre=> nlr