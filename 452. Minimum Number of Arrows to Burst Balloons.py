class Solution:
#先确定一个overlap的区间，然后不断更新
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        if(points == []):
            return 0
        points.sort(key = lambda x:(x[0],x[1]))
    
        count = 1 #at least need one time
        overlap = points[0]
        
        for i in range(1, len(points)):
            if(points[i][0] <= overlap[1]  and overlap[1] <= points[i][1]) :
                overlap[0] = max(overlap[0], points[i][0])
                overlap[1] = min(overlap[1], points[i][1])
                #print("if",overlap)
            elif(overlap[0] <=  points[i][0] and points[i][1] <= overlap[1]):
                overlap = points[i]
            else:
                count += 1
                overlap = points[i]
                #print(overlap)
           # print(count)
        return count
        
