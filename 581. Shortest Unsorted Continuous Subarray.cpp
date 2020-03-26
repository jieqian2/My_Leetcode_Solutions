
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int mini=0x7fffffff; int maxi=0x80000000;
        
        bool flag = false;
        int n= nums.size();
        for(int i=1; i< n; i++)
        {
            if(nums[i]<nums[i-1])
                flag=true;
            if(flag)
                mini=min(mini, nums[i]);
        }
        flag = false;
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i]>nums[i+1])
                flag=true;
            if(flag)
                maxi=max(maxi, nums[i]);
        }
        
        int l,r;
        for(l=0; l<n; l++)
            if(mini<nums[l]) break;
        for(r=n-1; r>=0; r--)
            if(maxi>nums[r]) break;
            
        if(l>r) return 0;
        else return r-l+1;
    }
};
  
