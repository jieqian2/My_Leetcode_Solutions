
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> helper;
        int n=nums.size();
        
        for(int i=0; i<n; i++)
        {
            helper.emplace(nums[i]);
        }
        
        for(int i=1; i<=n; i++)
        {
            if(helper.count(i)==0)
                ans.push_back(i);
        }
        return ans;
    }
};
