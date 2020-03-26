
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1) return 0;
        
        int profit=0;
        
        for(int i=1; i<prices.size(); i++)
            //如果之后的price[i]比prices[i-1]小的话，现在卖出是最好的
            //所以只要每次在开始的低点买入，高点卖出， 步进就可以了
            
            if(prices[i]>prices[i-1])
                profit+= prices[i]-prices[i-1];
        
        return profit;
        
    }
};
