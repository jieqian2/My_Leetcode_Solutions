class Solution:
    def countPrimes(self, n: int) -> int:
        not_prime = [False]*(n+1)
        count=0
        
        for i in range(2, n):
            if(not_prime[i] == True):
                continue
            count +=1
            for j in range(i*i, (n), i):
                not_prime[j]= True
                
        return count
