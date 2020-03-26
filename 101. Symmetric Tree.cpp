
class Solution {
public:
    
    bool check(TreeNode* left, TreeNode* right)
    {
        //end condition
        if(left==NULL && right==NULL)
            return true;
        if(left==NULL && right!=NULL) return false;
        if(right==NULL && left!=NULL) return false;
        
        if(left->val != right->val)
            return false;
        return (check(left->left,right->right) && check(left->right, right->left));
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        
        return check(root,root);
        //attention here,can't input root->left& root->right
        //in this case, in func, actually root->left->left, it could be NULL
        //return check(root->left, root->right);
    }
};
