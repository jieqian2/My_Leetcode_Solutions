class Solution:
    #判断l是不是s的子序列
    def is_sub(self, s, l):
        if(len(s)<len(l)):
            return False
        index_s=0
        index_l=0
        while(index_s < len(s) and index_l < len(l)):
            if(s[index_s] == l[index_l]):
                index_s += 1
                index_l += 1
            else:
                index_s += 1
                
        return (index_l == len(l))
        
    def findLongestWord(self, s: str, d: List[str]) -> str:
        longest_word = ""
        for i in range(0,len(d)):
            #剪枝，如果longest word的长度已经大于list[i]的长度
            #或者longest word的字母顺序比list[i]靠前，不用再比较
            
            if(len(longest_word) < len(d[i]) or (len(longest_word) == len(d[i]) and longest_word > d[i])):
                if(self.is_sub(s, d[i])):
                    longest_word = d[i]
            
        return longest_word
            
