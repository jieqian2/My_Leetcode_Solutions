
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        // 总得来说，方法和unique paths 类似
        int row=grid.size();
        int col=grid[0].size();
        if(row<=0 || col<=0) return 0;
        
        int dp[row][col];
        memset(dp, 0, sizeof(dp));
        
        dp[0][0]=grid[0][0];
        
        for(int i=1; i<row; i++)
            dp[i][0]=dp[i-1][0]+grid[i][0];
        for(int j=1; j<col; j++)
            dp[0][j]=dp[0][j-1]+grid[0][j];
        
        for(int i=1; i<row; i++)
            for(int j=1; j<col; j++)
            {
                dp[i][j]=min(dp[i-1][j], dp[i][j-1])+grid[i][j];
            }
        
        return dp[row-1][col-1];
    }
};
