
class Solution {
public:
    //排序-》剪枝
    
    vector<vector<int>> ans;
    
    void dfs(vector<int>& nums, int target, int n, vector<int> cur ){
        if(target==0)
        {
            ans.push_back(cur);
            return;
        }
        //int n 在这里起到一个防止重复的作用， 永远从之后的元素开始寻找，就不会从0开始；
        for(int i= n; i<nums.size(); i++)
        {
            if(nums[i]>target) break;
            cur.push_back(nums[i]);
            dfs(nums, target-nums[i], i, cur);
            cur.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        if(n==0) return ans;
        sort(candidates.begin(), candidates.end()); 
        if(candidates[0]>target) return ans;
        
        vector<int> cur;  
        dfs(candidates, target, 0, cur );
        return ans;
            
    }
};
