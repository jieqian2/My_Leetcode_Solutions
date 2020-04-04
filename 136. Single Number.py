class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        myhash = {}
        for i in range(0, len(nums)):
            if nums[i] in myhash:
                del myhash[nums[i]]
            else:
                myhash[nums[i]] = 1
        key, = myhash
        return key
        
