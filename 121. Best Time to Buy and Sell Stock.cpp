
class Solution {
public:
    //暴力算法 brute force
    int maxProfit(vector<int>& prices) {
        int maxdiff=0;
        int curdiff=0;
        
        for(int j=1; j<prices.size(); j++)
            for(int i=0; i<j; i++ )
            {
                curdiff=prices[j]-prices[i];
                maxdiff=max(curdiff, maxdiff);
            }
        
        return maxdiff;
    }
};
