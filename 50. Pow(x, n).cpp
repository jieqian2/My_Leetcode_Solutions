
class Solution {
public:
    double Pow(double x, int n) {
        if( n==1 )
            return x;
        
        double tmp = Pow(x,n/2);
        
        if(n%2==0)
            return tmp*tmp;
        else
            return tmp*tmp*x;
    }
    double myPow(double x, int n) {
        if(x==1.0)
            return x;
        
        int MIN=0x80000000;
        if(n==MIN)
            return 1/(Pow(x,(-n-1))*x);
        
        if(n==0)
            return 1.0;
        else if(n>0)
            return Pow(x,n);
        else
            return 1/Pow(x,-n);
        
    }
    
};
