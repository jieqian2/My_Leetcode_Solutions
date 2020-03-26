
class Solution {
public:
    vector<vector<int>> ans;
    void recur(vector<int> nums, int idx, vector<int> cur, vector<bool> use)
    {
        if(idx>=nums.size())
        {
            ans.push_back(cur); 
            return;
        }
        
        for(int i=0; i<nums.size() ; i++)
        {
            if( use[i] || (i>0 && nums[i]==nums[i-1]) && !use[i-1]) 
                continue;
            
            {
                cur.push_back(nums[i]);
                use[i]=true;
                recur(nums, idx+1, cur, use);
                cur.pop_back();
                use[i]=false;    
            }      
        }
            
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> cur;
        vector<bool> use; //true 代表被用过了； false代表没被用过
        use.resize(nums.size(),false);
        
        sort(nums.begin(), nums.end());
        
        
        recur(nums, 0, cur, use);
        return ans;     
    }
   
};
