
class Solution:
    def is_palindrome(self, s, i, j) -> bool:
        while(i<=j):
            if(s[i]==s[j]):
                i+=1
                j-=1
            else:
                return False
        return True  
    
    def validPalindrome(self, s: str) -> bool:
        #double pointers
        bgn = 0
        end = len(s)-1
        
        while(bgn<=end):
            if(s[bgn]==s[end]):
                bgn+=1
                end-=1 
            else:
                return (self.is_palindrome(s, bgn, end-1) or self.is_palindrome(s, bgn+1, end))
        return True     
