
class Solution {
public:
    //双指针，一个指向要改的地方，一个遍历数组
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        
        int count=0;
        
        for(int i=1; i<nums.size(); i++)
            if(nums[i]!= nums[i-1])
            {
                count++;
                nums[count]=nums[i];
                
            }
        return count+1;
    }
};
