
class Solution {
public:
    bool visit(TreeNode* root, int sum, int now)
    {
        if(root==0) return false;
        
        //val of now,
        now = now + root->val;
        
        //leaf node
        if(root->left==NULL && root->right==NULL)
            return (now==sum);
        else
        {
            return ((visit(root->left, sum, now)) || (visit(root->right, sum, now)));
        }
        
    }
    
    bool hasPathSum(TreeNode* root, int sum)
    {
        if(root==0) return false;
        return (visit(root, sum, 0));
    }
};
