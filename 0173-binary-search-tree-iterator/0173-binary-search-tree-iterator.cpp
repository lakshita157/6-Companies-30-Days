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
class BSTIterator {
public:
    int start =0;
    vector<TreeNode*>node;
    void inorder(TreeNode* root, vector<TreeNode*>&node){
        if(root==NULL) return;
        inorder(root->left, node);
        node.push_back(root);
        inorder(root->right, node);

    }
    BSTIterator(TreeNode* root) {
        inorder(root,node );
    }
    
    int next() {
        int x = node[start]->val;
        start++;
        return x;
    }
    
    bool hasNext() {
        if(start<node.size()) return true;

        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */