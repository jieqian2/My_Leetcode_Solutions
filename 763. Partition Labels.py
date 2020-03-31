class Solution:
    def partitionLabels(self, S: str) -> List[int]:
        # 贪心 greedy
        #last_index存放每个字母最后出现的地方，index=字母，key等于出现的地方
        #ord() convert to ASCII
        
        last_index = [None]*26
        for i in range(0, len(S)):
            last_index[ord(S[i])-ord('a')] = i
        
        start = 0
        end = 0
        ans = []
        for i in range(0, len(S)):
            end = max(end, last_index[ord(S[i])-ord('a')])
            if i==end:
                #说明已经形成了一个partition
                ans.append(end-start+1)
                start = end+1
                
        return ans
            
        
