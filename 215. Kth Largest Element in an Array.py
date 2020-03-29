class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        #堆顶的数是堆里最小的数
        heap = []
        for num in nums:
            heapq.heappush(heap, num)

        for small_num in range(len(nums)-k):
            heapq.heappop(heap)

        
        return heapq.heappop(heap)
