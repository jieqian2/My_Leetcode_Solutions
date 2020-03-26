
class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if len(matrix) == 0:
            return matrix
        
        row_end = len(matrix)-1
        col_end = len(matrix[0])-1
        row_bgn = 0
        col_bgn = 0
        
        ans = []
        
        while (row_bgn <= row_end) and (col_bgn <= col_end):
            for i in range(col_bgn, col_end+1):
                ans.append(matrix[row_bgn][i])
            row_bgn += 1
            
            for i in range(row_bgn, row_end+1):
                ans.append(matrix[i][col_end])
            col_end -= 1
            
            if(row_bgn<=row_end):
                for i in range(col_end, col_bgn-1, -1):
                    ans.append(matrix[row_end][i])
                row_end -= 1
            
            if(col_bgn<=col_end):
                for i in range(row_end, row_bgn-1, -1):
                    ans.append(matrix[i][col_bgn])
                col_bgn += 1
                
        return ans
                       
            
                
