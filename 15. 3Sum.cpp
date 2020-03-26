15. 3Sum
class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans; 
        int n=nums.size();
        //notice how to sort() a vector here
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-2; i++)
        {   //双指针 
            //left=i+1 是为了不重复插入相同的结果
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                if(nums[i]+nums[left]+nums[right]==0)
                {
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[left]);
                    tmp.push_back(nums[right]);
                    ans.push_back(tmp);
                    
                    //prevent meeting the same nums
                    int leftval=nums[left];
                    while(left<n && nums[left]==leftval)
                        left++;
                    
                    int rightval=nums[right];
                    while(right>left && nums[right]==rightval)
                        right--;
                }
                else if(nums[i]+nums[left]+nums[right]<0)
                    left++;
                else
                    right--;
            }
            while(i<n-1 && nums[i]==nums[i+1] )
                i++;   
        }
        return ans;   
    }
};
