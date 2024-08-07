# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def bstToGst(self, root: TreeNode) -> TreeNode:
        lastSum = 0
        def dfs(root):
            if root is None:
                return 

            root.right = dfs(root.right)
            root.val += self.lastSum
            self.lastSum = root.val
            root.left = dfs(root.left)

            return root
            
        self.lastSum = 0
        return dfs(root)

