55. Jump Game
/*
 Usually, solving and fully understanding a dynamic programming problem is a 4 step process:

Start with the recursive backtracking solution
Optimize by using a memoization table (top-down[2] dynamic programming)
Remove the need for recursion (bottom-up dynamic programming)
Apply final tricks to reduce the time / memory complexity

*/

//dp
//at first, every element are "unknow/3"
//from last element, check if every one could reach next "good" index,
//if could, then current index is "good/1"
//else it is "bad/0"
//until we reach the very first one.

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return false;
        if(n==1) return true;
        
        vector<int> dp;
        dp.resize(n, 3);
        
        dp[n-1]=1;
        
        for(int i=n-2; i>=0; i--)
        {
            //check if dp[i] could reach the good one after it.
            //farest_reach means the farest distance current element could go
            int farest_reach = min(nums[i], n-1-i);
            if(farest_reach == 0)
                dp[i]=0;
            for(int j=farest_reach; j>0; j--)
            {
                if(dp[i+j] == 1)
                {
                    dp[i]=1;
                    break;
                }
                dp[i]=0;
            }     
        }
        return bool(dp[0]);   
    }
};
