
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def pathSum(self, root: TreeNode, sum: int) -> int:
        if not root: 
            return 0
        
        def dfs(root: TreeNode, sum: int) -> int:
            if not root: 
                return 0
            
            count = 0
            if root.val == sum : 
                count +=1
            
            count += dfs(root.right, sum-root.val)
            count += dfs(root.left, sum-root.val)
            return count
        
        return dfs(root, sum)+ self.pathSum(root.left, sum)+ self.pathSum(root.right, sum)
    
