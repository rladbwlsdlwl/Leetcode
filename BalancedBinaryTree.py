# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def getHeight(node):
            if(node==None):
                return 0
            
            left=getHeight(node.left)
            right=getHeight(node.right)
            
            return max(left,right)+1
        
        def BalancedTree(node):
            if(node==None):
                return True
            
            if(abs(getHeight(node.left)-getHeight(node.right))<=1 and BalancedTree(node.left) and BalancedTree(node.right)):
                return True
            
            return False
                
        return BalancedTree(root)
            
            
