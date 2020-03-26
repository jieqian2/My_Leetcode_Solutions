
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m<1 || n<1 ) return 0;
        
        int dp[m+1][n+1] = {0};
        dp[0][0]=0; dp[0][1]=0;  
        dp[1][0]=0; dp[1][1]=1;
        
        for(int i=1; i<m+1; i++)
            dp[i][1]=1;
        for(int j=1; j<n+1; j++)
            dp[1][j]=1;
        
        for(int i=2; i<m+1; i++)
            for(int j=2; j<n+1; j++)
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
        
            
        
        return dp[m][n];    
    }
};
