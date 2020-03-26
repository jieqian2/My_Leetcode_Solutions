
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
    vector<string> ans;
    void backtrack(TreeNode* root, string cur){
        cur = cur + to_string(root->val);
        cur = cur+"->";
        if(root->left==NULL && root->right==NULL) 
        {
            cur.pop_back();
            cur.pop_back();
            ans.push_back(cur);
            return;
        }
        
        
        if(root->right != NULL)
        {
            backtrack(root->right, cur);
            
        }
        if(root->left != NULL)
        {
            backtrack(root->left, cur);     
        }
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL) return ans;
        
        string cur;
        backtrack(root, cur);
        
        return ans;
        
    }
};
