
class Solution {
public:
    
    bool biggerthan(int x, int y){
        long long z=x;
        return ((long long) (z*z) > y ) ;
    }
    
    int mySqrt(int y) {
        
        long lo=0, up=y;
        long ans=0;
        while(lo<=up)
        {
            int mid=(lo+up)/2;
            
            if( biggerthan(mid,y) )
            {
                up=mid-1;
            }
            else{
                // if here lo=mid; when y=1, it will loop forever;
                ans=mid;
                lo=mid+1;
            }
        }
        return ans;
    }
};
