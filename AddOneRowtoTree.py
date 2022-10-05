# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:
        def dfs(root, height, isLeft):
            if height==depth:
                if isLeft:
                    return TreeNode(val, root, None)
                else:
                    return TreeNode(val, None, root)
            if root:
                root.left=dfs(root.left, height+1, True)
                root.right=dfs(root.right, height+1, False)
        
            return root
        
        return dfs(root, 1, True)
