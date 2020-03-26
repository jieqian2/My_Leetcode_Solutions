//DP,

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        if(amount==0) return 0;
        sort(coins.begin(), coins.end());
        if(n==0 || amount<coins[0]) return -1;
        
        const int MAX = 0x7fffffff;
        vector<int> dp;
        dp.resize(amount+1, MAX-1);
        dp[0]=0;
        for(int i=n-1; i>= 0; i--)
        {
            for(int j=0; j<=amount; j++)
            {
                if(j>=coins[i])
                    
                    dp[j]=min(dp[j], dp[j-coins[i]]+1);
            }
        }
        return (dp[amount]==MAX-1) ? -1:dp[amount] ;
    }
};
