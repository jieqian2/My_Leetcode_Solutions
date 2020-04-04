class Solution:
    def diffWaysToCompute(self, input: str) -> List[int]:
        #分治， 递归
        ans = []       
        for i in range(0, len(input)):
            if input[i]=='*' or input[i]=='+' or input[i]=='-':
                left = self.diffWaysToCompute(input[:i])
                right = self.diffWaysToCompute(input[i+1:])
                
                for l in left:
                    for r in right:
                        if input[i]=='*':
                            ans.append(l*r)
                        if input[i]=='+':
                            ans.append(l+r)
                        if input[i]=='-':
                            ans.append(l-r)
        
        if len(ans)==0:
            ans.append(int(input))
        return ans
