class Solution:
    def frequencySort(self, s: str) -> str:
        #a = "q"
        #a = a*3
        #print(a)          qqq
        #print(type(a))    'str'
        
    
        count = collections.Counter(s).most_common()
        ans = ""
        for char, time in count:
            ans += char*time
        return ans
