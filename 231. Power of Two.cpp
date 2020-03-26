
class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long ans=n;
        // prevent input overflow
        
        if(ans<=0)
            return false;
        return !(ans&(ans-1));
        
    }
};
