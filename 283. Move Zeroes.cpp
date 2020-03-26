
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.empty()) return;
        
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                //把不等于0 的数依次写入nums
                nums[count]=nums[i];
                count++;
            }
        }

        //把剩下的改为0；
        for(int i=count; i<nums.size(); i++)
        {
            nums[i]=0;    
        }    
    }
