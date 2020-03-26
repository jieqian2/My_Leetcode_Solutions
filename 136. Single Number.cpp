
class Solution {
public:
    //也可以不用map；
    //用一个vector 有新的数就放进去，再走到这个数就删掉他
    //到最后 vector里只有一个元素。
    
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n<1) return 0;
        if(n==1) return nums[0];
        
        int ans;
        map<int,int> mp;
        
        for(int i=0; i<n; i++)
        {
            if(mp.count(nums[i]) == 0)
                mp.emplace(nums[i], 1);
            else
            {
                int temp =  mp[nums[i]];
                temp++;
                mp[nums[i]]=temp;
            }
        }
        for(map<int,int>::iterator it=mp.begin(); it!=mp.end(); ++it)
            if(it->second==1)
                ans=it->first;
        return ans;
    }
};
