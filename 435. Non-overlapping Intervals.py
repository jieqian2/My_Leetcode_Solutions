class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        #greed
        #先计算最多能组成的不重叠区间个数，然后用区间总个数减去不重叠区间的个数。
        #在每次选择中，区间的结尾最为重要，选择的区间结尾越小，留给后面的区间的空间越大，那么后面能够选择的区间个数也就越大。
        #按区间的结尾进行排序，每次选择结尾最小，并且和前一个区间不重叠的区间。
        
        if intervals == []:
            return 0
        
        intervals.sort(key = lambda x: x[1])
        count = 0
        early_interval = intervals[0]
        for i in range(1, len(intervals)):
            if(intervals[i][0] < early_interval[1]):
                count+=1
            else:
                early_interval = intervals[i]
        
        return count
            
