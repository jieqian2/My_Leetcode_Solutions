class Solution:
    def dfs(self, curr, M, mark):
        if mark[curr]==True:
            return
        mark[curr] = True
        #find all friends
        for i in range(len(M)):
            if M[curr][i]==1 and mark[i]==False:
                self.dfs(i, M, mark)
            
        
    def findCircleNum(self, M: List[List[int]]) -> int:
        #DFS
        #一共有N个朋友，通过一个朋友去寻找下一个连接的朋友，找到头了就返回，circle++
        #然后找下一个先前没连接过的朋友
        
        N = len(M)
        mark = [False]*N 
        count = 0
        
        for i in range(N):
            if mark[i]==False:
                self.dfs(i, M, mark)
                count +=1
                
        return count
            
