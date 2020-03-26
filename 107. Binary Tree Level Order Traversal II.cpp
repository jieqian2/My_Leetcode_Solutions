
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL) return vector<vector<int>> {0};
        
        vector<vector<int>> ans;
        
        queue<TreeNode*> que;
        que.push(root);
        
        while(!que.empty())
        {
            vector<int> tp;
            int n=que.size();
            
            for(int i=0; i<n; i++)
            {
                TreeNode* cur= que.front();
                if(cur->left!=NULL) que.push(cur->left);
                if(cur->right!=NULL) que.push(cur->right);
                tp.push_back(cur->val);
                que.pop();
            }
            ans.insert(ans.begin(), tp);
        }
        return ans;
        
        
    }
};
