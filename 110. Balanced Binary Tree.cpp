
class Solution {
public:
    //used for memorization
    map<TreeNode*,int> depth;
    
    int maxde(TreeNode* r)
    {
        if(r==NULL)
            return 0;
        
        //if r is in the map
        if(depth.find(r) != depth.end())
            return depth[r];
        
        if(maxde(r->left)<0 || maxde(r->right)<0 || abs(maxde(r->left) - maxde(r->right))>1 )
            return -1;
        
        depth.emplace(r, max(maxde(r->left), maxde(r->right))+1) ;
        return max(maxde(r->left), maxde(r->right))+1 ;
    }
    
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        
        if(maxde(root) < 0)
            return false;
        return true;
    }
};
