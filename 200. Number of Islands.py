class Solution:
  
    def dfs(self, row, col, grid):
        if row<0 or col<0 or row>len(grid)-1 or col>len(grid[0])-1 or grid[row][col]=="0":
            return
        
        #把连通的1都改成0，直到最后整个grid都没有0，说明已经找完了
        grid[row][col]="0"
        self.dfs((row+1), col, grid)
        self.dfs((row-1), col, grid)
        self.dfs(row, (col+1), grid)
        self.dfs(row, (col-1), grid)
           
    def numIslands(self, grid: List[List[str]]) -> int:
        #DFS
        number_of_island = 0
        
        for i in range(0, len(grid)):
            for j in range(0, len(grid[0])):
                if grid[i][j]=="1":
                    self.dfs(i, j, grid)
                    number_of_island += 1
                
        return number_of_island
                
        
