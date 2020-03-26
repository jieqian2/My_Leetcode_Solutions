
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        
        map<int,int> mp;
        
        for(int i=0; i<n; i++)
        {
            if(mp.count(nums[i])==0)
                mp.emplace(nums[i],1);
            else
            {
                int temp=mp[nums[i]];
                temp++;
                mp[nums[i]] = temp;
                if(temp>n/2)
                    return nums[i];
            }
        }
        return 0;
    }
};
