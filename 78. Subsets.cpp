
class Solution {
public:
    vector<vector<int>> ans;
    int n;
    void backtrack(vector<int> nums, int index, vector<int> cur){
        if(index==n)    
        {
            ans.push_back(cur);
            return;
        }
        backtrack(nums, index+1, cur);
        cur.push_back(nums[index]);
        backtrack(nums, index+1, cur);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.empty()) return ans;
        n=nums.size();
        vector<int> cur;
        
        backtrack(nums, 0, cur);
        return ans;   
    }
};
