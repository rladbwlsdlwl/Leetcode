# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTilt(self, root: TreeNode) -> int:
        ans=[] 
        def dfs(node): # postorder
            if node==None:
                return 0
            left=dfs(node.left)
            right=dfs(node.right)
            ans.append(abs(left-right)) # nonlocal
            
            return left+right+node.val
        
        p=dfs(root)
        return sum(ans)
