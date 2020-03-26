
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return vector<vector<int>> {0};
        
        vector<vector<int>> ans;
        //vector<int> t;
        //t.push_back(root->val);
        //ans.push_back(t);
        
        queue<TreeNode*> qu;
        qu.push(root);
        
        while(!qu.empty())
        {
            //queue.size() is the the size of that level
            //this step is important.
            int size=qu.size();
            vector<int> tp;
            for(int i=0; i<size; i++)
            {
                TreeNode* cur=qu.front();
                if(cur->left!=NULL) {
                    qu.push(cur->left);
                    //tp.push_back(cur->left->val);
                }
                if(cur->right!=NULL){
                    qu.push(cur->right);
                    //tp.push_back(cur->right->val);
                }
                tp.push_back(cur->val);
                qu.pop();
            }
            ans.push_back(tp);
            
        }
        
        /* level-order travel
        while( !qu.empty() )
        {
            //get the first element in queue
            TreeNode* cur=qu.front();
            vector<int> tp;
            if(cur->left!=NULL)
            {
                qu.push(cur->left);
            }
            if(cur->right!=NULL)
            {
                qu.push(cur->right);
            }
            qu.pop();
        }
        */
        return ans;
    }
};
