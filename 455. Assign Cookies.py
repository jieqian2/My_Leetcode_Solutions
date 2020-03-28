class Solution:
    #贪心
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        index_g=0
        index_s=0
        
        while(index_g<len(g) and index_s<len(s)):
            if(g[index_g] <= s[index_s]):
                index_g +=1
                index_s +=1
            else:
                index_s +=1
        return index_g
