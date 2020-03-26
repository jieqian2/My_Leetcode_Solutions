
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            int n=q.size();
            level++;
            for(int i=0; i<n; i++)
            {
                TreeNode* cur=q.front();
                if(cur->left!=NULL) q.push(cur->left);
                if(cur->right!=NULL) q.push(cur->right);
                if(cur->left==NULL && cur->right==NULL)
                    return level;
                q.pop();
            }
        }
        return 0;
    }
};
