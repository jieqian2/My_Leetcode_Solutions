import queue
class Solution:
    #BFS 广度优先搜索
    '''
    每一层遍历的节点都与根节点距离相同。设 di 表示第 i 个节点与根节点的距离，推导出一个结论：对于先遍历的节点 i 与后遍历的节点 j，有 di <= dj。利用这个结论，可以求解最短路径等 最优解 问题：第一次遍历到目的节点，其所经过的路径为最短路径。应该注意的是，使用 BFS 只能求解无权图的最短路径，无权图是指从一个节点到另一个节点的代价都记为 1。

    在程序实现 BFS 时需要考虑以下问题：
    1. 队列：用来存储每一轮遍历得到的节点；
    2. 标记：对于遍历过的节点，应该将它标记，防止重复遍历。
    '''
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        N = len(grid)
        if grid[0][0]==1 or grid[N-1]==1:
            return -1
        
        x_dir = [0, 0, 1, -1, 1, 1, -1, -1]
        y_dir = [1, -1, 0, 0, 1, -1, 1, -1]
        
        q = queue.Queue()
        
        q.put([0, 0])
        path_length = 0
        
        while (q.empty() == False):
            size = q.qsize()
            path_length += 1
            while(size > 0):
                curr_position = q.get()
                size -= 1
                cur_row, cur_col = curr_position[0], curr_position[1]
                if grid[cur_row][cur_col] == 1:
                    continue
                if cur_row==N-1 and cur_col==N-1:
                    return path_length
                #mark the go-through position
                grid[cur_row][cur_col] = 1
                
                #search next position
                for u in range(0, 8):
                    new_row = cur_row + x_dir[u]
                    new_col = cur_col + y_dir[u]
                    if new_row<0 or new_row>N-1 or new_col<0 or new_col>N-1:
                        continue
                    if grid[new_row][new_col]==0:
                        q.put([new_row, new_col])
                  
        return -1
