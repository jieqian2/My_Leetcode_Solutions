
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //偷懒方法，防止溢出；
        nums.push_back(0x7fffffff);
        
        for(int i=0; i<nums.size(); i++)
        {
            if(target==nums[i])
                return i;
            else if(target>nums[i] && target <nums[i+1])
                return (i+1);
            
            else if(target > (nums.back()-1))
                return nums.size();
        }
        return 0;
       
    }
};
