
class Solution {
public:
    vector<vector<int>> ans;
    
    void backtrack(vector<int> nums, int depth, int k, int cur_num, vector<int> cur)
    {
        if(depth==k)
            ans.push_back(cur);
        for(int i=cur_num; i<nums.size(); i++)
        {
            cur.push_back(nums[i]);
            backtrack(nums, depth+1, k, i+1, cur);
            cur.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        for(int i=1; i<=n; i++)
            nums.push_back(i);
        
        vector<int> cur;
        backtrack(nums, 0, k, 0, cur);
        //nums数组中，递归深度从0到k， 从第一个元素开始选。
        return ans;
        
    }
};
