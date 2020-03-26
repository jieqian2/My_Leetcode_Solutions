
class Solution {
public:
    // treenode in BST is sorted from small to large
    //so if both node bigger than root, we keep search the right
    //else if both node smaller than root we search the left
    // if the root is in the middle of 2nodes,
    //then we find the LCA.
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val > root->val && q->val > root->val) 
            return lowestCommonAncestor(root->right, p, q);
        else if(p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);
        else 
            return root;
    }
};
