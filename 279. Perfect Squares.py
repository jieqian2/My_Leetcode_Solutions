import queue
class Solution:
    def generate_square(self, n):
        # 生成小于n的平方数序列
        sq = []
        square = 1
        diff=3
        while(square <= n):
            sq.append(square)
            square += diff
            diff += 2
        return sq
            
    def numSquares(self, n: int) -> int:
        #BFS
        #可以将每个整数看成图中的一个节点，如果两个整数之差为一个平方数，那么这两个整数所在的节点就有一条边。
        #要求解最小的平方数数量，就是求解从节点 n 到节点 0 的最短路径。
        
        if n==1:
            return 1
        squared_number = self.generate_square(n)
        path = [False]*(n+1)
        
        q = queue.Queue()
        q.put(n)
        pathlength = 0
        while(q.empty() == False):
            size = q.qsize()
            pathlength += 1
            while(size>0):
                curr = q.get()
                size -= 1
                if path[curr] == True:
                    continue
                if curr == 0:
                    return pathlength-1 #n个数之间只有n-1条边
                path[curr] = True
                for num in squared_number:
                    nxt = curr-num
                    if nxt < 0:
                        break  #不用继续check了，因为num越来越大   
                    if path[nxt] == False:
                        q.put(nxt)
        return -1
    
    
