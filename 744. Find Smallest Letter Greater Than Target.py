class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        #二分查找
        
        n = len(letters)
        l = 0
        h = n-1
        
        while (l <= h):
            m = int(l + (h-l)/2)
            if( letters[m] <= target ):
                l = m+1
            else:
                h = m-1
        
        if l<n:
            return letters[l]
        else:
            return letters[0]
        
