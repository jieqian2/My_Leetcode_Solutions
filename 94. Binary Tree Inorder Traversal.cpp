
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        
        stack<TreeNode*> store;
        TreeNode* cur = root;
        
        while(cur!=NULL || !store.empty())
        {
            while(cur!=NULL)
            {
                store.push(cur);
                cur=cur->left;
            }
            
            cur=store.top();
            store.pop();
            ans.push_back(cur->val);
            cur=cur->right;
        }
        return ans;
    }
};
