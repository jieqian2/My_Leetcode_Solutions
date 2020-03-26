
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int col=obstacleGrid[0].size();
        int row=obstacleGrid.size();
        if(obstacleGrid[0][0]==1 ||obstacleGrid[row-1][col-1]==1 )
            return 0;
        //notice, the step could be big,
        //use long long instead of int.
        long long dp[row+1][col+1] = {0};  
        //notice, you can only initial the first element in this way
        //initialize dp;
        memset(dp, -1, sizeof(dp));
        
        //if there were obstacle, then the way of get here is 0;
        for(int i=0; i<row; i++)
            for(int j=0; j<col; j++)
            {
                if(obstacleGrid[i][j]==1)
                    dp[i+1][j+1]=0;
            }
        
        //if there was obstacle on first row/col, then the way to get rest of the element in the same row/col is all 0. 
        for(int i=0; i<row+1; i++)
        {
            if(dp[i][1]!=0)
                dp[i][1]=1;
            else
            {
                for(int a=i; a<row+1; a++)
                    dp[a][1]=0;
                break;
            }
                
        }
        for(int j=0; j<col+1; j++)
        {
            if(dp[1][j]!=0)
                dp[1][j]=1;
            else
            {
                for(int a=j; a<col+1; a++)
                    dp[1][a]=0;
                break;
            }
        }
        
        
        for(int i=2; i<row+1; i++)
            for(int j=2; j<col+1; j++) 
            {
                if( dp[i][j] != 0 )
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        
        return dp[row][col] ;
    }
};
