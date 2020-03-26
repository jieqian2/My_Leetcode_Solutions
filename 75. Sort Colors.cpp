
class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.empty()) return;
        int n=nums.size();
        
        // 读到0，把它移到最前面； 读到2，把它移到最后面
        //总共只有三个数，这样1就自动在最中间了
        
        int start=0;
        int end= n-1;
        int index=0;
        
        while(start<end && index<=end)
        {
            if(nums[index]==0)
            {
                nums[index]=nums[start];
                nums[start]=0;
                start++;
                index++;
            }else if(nums[index]==2)
            {
                nums[index]=nums[end];
                nums[end]=2;
                end--;
            }else
                index++;
        }
    }
};
