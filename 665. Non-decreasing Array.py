class Solution:
    def checkPossibility(self, nums: List[int]) -> bool:
        #在出现 nums[i] < nums[i - 1] 时，需要考虑的是应该修改数组的哪个数，使得本次修改能使 i 之前的数组成为非递减数组，
        #并且 不影响后续的操作 。优先考虑令 nums[i - 1] = nums[i]，因为如果修改 nums[i] = nums[i - 1] 的话，那么 nums[i] 这个数会变大，就有可能比 nums[i + 1] 大，从而影响了后续操作。
        #还有一个比较特别的情况就是 nums[i] < nums[i - 2]，修改 nums[i - 1] = nums[i] 不能使数组成为非递减数组，只能修改 nums[i] = nums[i - 1]。
        
        count = 0
        for i in range(1, len(nums)):
            if count == 2:
                return False
            
            if nums[i]>=nums[i-1]:
                continue
            if i-2>=0 and nums[i] < nums[i-2]:
                nums[i] = nums[i-1]
                count+=1
            else:
                nums[i-1] = nums[i]
                count+=1
            
        return count<=1
