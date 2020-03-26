
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<2) return false;
        
        unordered_set<int> hash;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(hash.count(nums[i]) !=0)
                return true;
            else
                hash.emplace(nums[i]);
        }
        return false;
        
    }
};
