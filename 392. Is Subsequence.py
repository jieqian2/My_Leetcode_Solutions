class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(s) == 0:
            return True
        
        index_s = 0
        index_t = 0
        
        while index_t < len(t):
            if s[index_s] == t[index_t]:
                index_s+=1
                index_t+=1
            else:
                index_t+=1
                
            if(index_s == len(s)):
                return True

        return False        
