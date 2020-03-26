
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL || (root->left==NULL && root->right==NULL))
            return root;
        
        TreeNode* left=invertTree(root->left);
        TreeNode* right=invertTree(root->right);
        
        root->left=right;
        root->right=left;
        
        return root;
    }
};
