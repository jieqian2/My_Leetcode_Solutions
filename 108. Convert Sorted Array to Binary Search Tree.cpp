
class Solution {
public:
    // binary search tree
    // left<mid<right
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        
        return res(nums, 0, nums.size()-1);
    }
    
    TreeNode* res(vector<int>& nums, int le, int rt)
    {
        // end condition
        if(le>rt) return NULL;
        //这里用+le的原因是，左边le永远=0，加和不加没区别，
        //右边因为要相当于把整个数列右移所以要加上最初的左边的下标。
        int mid=le+(rt-le)/2;
        
        TreeNode* cur = new TreeNode(nums[mid]);
        cur->left = res(nums, le, mid-1);
        cur->right = res(nums, mid+1, rt);
        return cur;
    }
};
