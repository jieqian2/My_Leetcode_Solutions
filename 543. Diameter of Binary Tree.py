
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        if not root: return 0
        self.ans = 0
        def dfs(root: TreeNode):
            if not root: return -1
            l = 1 + dfs(root.left)
            r = 1 + dfs(root.right)
            self.ans = max(self.ans, l+r)
            return max(l, r)
        
        dfs(root) 
        return self.ans
