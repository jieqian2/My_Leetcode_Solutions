
class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        if c<0:
            return False
        begin = 0
        end = int(sqrt(c))
        #double pointer
        #bgn^2 + end^2 = c, end_max = sqrt(c)
        
        while(begin<=end):
            sq_sum = begin*begin+ end*end
            if sq_sum == c:
                return True
            elif sq_sum < c:
                begin += 1
            else:
                end -= 1
        
        return False
