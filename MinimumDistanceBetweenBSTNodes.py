# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        order = []
        def dfs(node):
            if node:
                dfs(node.left)
                order.append(node.val)
                dfs(node.right)


        dfs(root)

        diff = 999999
        for i in range(len(order)-1):
            diff = min(diff, order[i+1]-order[i])

        return diff
