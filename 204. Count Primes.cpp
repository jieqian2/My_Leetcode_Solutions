
class Solution {
public:
    //筛法  sieve of Eratosthenes
    //https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
    
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool> flag(n, true);
        flag[0]=flag[1]=false;
        
        for(int i=2; i<sqrt(n); i++)
            if(flag[i])
                for(int j=i*i; j<n; j=j+i)
                    flag[j]=false;
        
        int count=0;
        for(int i=0; i<n; i++)
            if(flag[i]==true)
                count++;
        
        return count;
    }
};
