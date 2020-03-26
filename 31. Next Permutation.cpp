
class Solution {
public:
    // 127431 找到倒叙上去第一个递减的数2(1347都是递增的)，
    //从后往前找到比那个数大的第一个数
    // 137421 交换刚才找到的两个数
    // 131247 把后面的部分reverse
    //if 743211 表示已经最大， reverse就可
    
    //reverse vector mathod
    //std::reverse(myvector.begin(),myvector.end()); 
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return;
        
        int firstsmall=-1;
        for(int i=n-2; i>=0; i--)
            if(nums[i]<nums[i+1])
            {
                firstsmall=i;
                break;
            }
        //cout<<firstsmall;
        if(firstsmall==-1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int first_large_than_firstsmall=-1;
        for(int i=n-1; i>=0; i--)
        {
            if(nums[i]>nums[firstsmall])
            {
                first_large_than_firstsmall=i; 
                break;
            }
               
        }
        //cout<< first_large_than_firstsmall;
        int temp=nums[firstsmall];
        nums[firstsmall]= nums[first_large_than_firstsmall];
        nums[first_large_than_firstsmall]=temp;
        
        reverse(nums.begin()+firstsmall+1, nums.end());
    }
};
