class Solution:
    def reconstructQueue(self, people: List[List[int]]) -> List[List[int]]:
        #为了使插入操作不影响后续的操作，身高较高的学生应该先做插入操作，
        #否则身高较小的学生原先正确插入的第 k 个位置可能会变成第 k+1 个位置。
        #身高 h 降序、个数 k 值升序，然后将某个学生插入队列的第 k 个位置中。
         #insert(index, obj) 再对应的index 插入 object
        
        people.sort(key = lambda x:(-x[0], x[1]))
        ans = []
        for i in people:
            ans.insert(i[1], i)
        return ans
