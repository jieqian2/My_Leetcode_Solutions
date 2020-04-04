# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def generateTrees(self, n: int) -> List[TreeNode]:
        #分治
        ans = []
        if n<1 :
            return []
        ans = self.generate_sub_tree(1, n)
        return ans
        
    def generate_sub_tree(self, start, end):
        ans = []
        if start>end:
            ans.append(None)
            return ans
        
        for i in range(start, end+1):
            left = self.generate_sub_tree(start, i-1)
            right = self.generate_sub_tree(i+1, end)
            for l in left:
                for r in right:
                    root = TreeNode(i)
                    root.left = l
                    root.right = r
                    ans.append(root)
        return ans
        
