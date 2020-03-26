
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        if(n<3) return 0;
        
        sort(nums.begin(), nums.end());
        int min=0x7fffffff;
        int ans=0;
        
        for(int i=0; i<n; i++)
        {
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target)
                    return target;
                else if(sum < target)
                {
                    if(target-sum < min)
                    {
                        min=target-sum;
                        ans=sum;
                    }
                    left++;
                }else //sum > target
                {
                    if(sum-target < min)
                    {
                        min=sum-target;
                        ans=sum;
                    }
                    right--;    
                }
            }
        }
        return ans;   
    }
};
