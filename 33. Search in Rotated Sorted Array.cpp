
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        if(n==0) return -1;
        
        int left=0;
        int right=n-1;
        //寻找中间那个rotated数， 就是left
        while(left<right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[right])
                left=mid+1;
            else
                right=mid;
        }
        
        cout<<left<<endl;
        int newleft=0;
        int newright=n-1;
        
        //decide which subvector we should use binary search
        //注意这里 如果刚好输入的是排序好的数组，left=0，nums[left-1]会溢出,
        //so add one more requirement here
        ///*
        if(left==0)
        {
            if(target<nums[0] || target>nums[n-1]) return -1;
            if(target==nums[0]) return 0;
            if(target==nums[n-1]) return n-1;
        }    
        else if(nums[0]<=target && target<nums[left-1])
        {
            newleft=0; newright=left-1;
        }
        else if(nums[left]<target && target<= nums[n-1])
        {
            newleft=left; newright=n-1;
        }
        else if(nums[left]==target)
            return left;
        else if(nums[left-1]==target)
            return left-1;
        else return -1;
        //*/
        
        
        cout<<newleft<<" to "<<newright<<endl;
        
        while(newleft<=newright)
        {
            int newmid=newleft+(newright-newleft)/2;
            if(nums[newmid]==target)
                return newmid;
            else if(nums[newmid]>target)
                newright=newmid-1;
            else
                newleft=newmid+1;
        }
        
        return -1;
    }
};
