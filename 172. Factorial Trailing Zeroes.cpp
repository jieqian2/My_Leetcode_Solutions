
class Solution {
public:
    int trailingZeroes(int n) {
        //density of 5 is far less than 2,
        //so just need to find how many 5 in n!,
        //5,10,15,20,25,30....75
        //there is one 5 in 5!
        //2 in 10!
        //5+1 in 25! (5-25should have 5 5 but 25has 2 5, so +1)
        //5+2 in 50!
        
        
        int sum=0;
        
        while(n>0)
        {
            sum = sum + n/5;
            n = n/5;
        }
        return sum;
    }
};
