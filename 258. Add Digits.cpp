
class Solution {
public:
    int addDigits(int num) {
        //ab = a*10+b = a*9+a+b
        //ab%9 = (a+b)%9
        //abc=a*100+b*10+c = a*99+b*9+a+b+c
        //abc%9= (a+b+c)%9
        //38%9 = (3+8)%9
        //     = 11%9
        //     = (1+1)%9
        //     = 2
        
        //37%9+1 = 10%9+1 = 1%9+1 = 2
        
        if(num==0) 
            return 0;
        
        return ( (num-1)%9 +1 );
        
        //if num=9, num%9 return 0;
        //so we move it right side and the move back
            
    }
};
