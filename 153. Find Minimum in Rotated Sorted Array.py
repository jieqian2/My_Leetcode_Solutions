class Solution:
    def findMin(self, nums: List[int]) -> int:
        #二分查找
        # [3,4,5,1,2] 
        #m=2, h=4, l=3
        #m=3, h=3, l=3
        
        l = 0
        h = len(nums)-1
        while(l<h):
            m = int( l+(h-l)/2 )
            print(m)
            if(nums[m] <= nums[h]):
                h = m
            else:
                l = m+1

        return nums[l]
        
        
        
