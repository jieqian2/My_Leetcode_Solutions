class Solution:
    def dfs(self, row, col, grid, mark):
        if row<0 or col<0 or row>len(grid)-1 or col>len(grid[0])-1 or mark[row][col] or grid[row][col]==0:
            return 0
        else:
            mark[row][col]=True
            return 1+self.dfs(row+1, col, grid, mark)+self.dfs(row-1, col, grid, mark)+self.dfs(row, col+1, grid, mark)+self.dfs(row, col-1, grid, mark)
            
        return 1
        
    
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        #DFS
        #从一个节点出发，使用 DFS 对一个图进行遍历时，能够遍历到的节点都是从初始节点可达的，DFS 常用来求解这种 可达性 问题。
        #在程序实现 DFS 时需要考虑以下问题：

        #栈：用栈来保存当前节点信息，当遍历新节点返回时能够继续遍历当前节点。可以使用递归栈。
        #标记：和 BFS 一样同样需要对已经遍历过的节点进行标记。
        
        max_area = 0
        mark = [[False]* len(grid[0])  for i in range(len(grid))]
        
        for i in range(0, len(grid)):
            for j in range(0, len(grid[0])):
                max_area = max(max_area, self.dfs(i, j, grid, mark))
        
        return max_area
                
