
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        nums.sort()
        begin = 0
        for i in range(0, len(nums)):
            if(nums[i]!=begin):
                return begin
            begin +=1    
        return begin
        
