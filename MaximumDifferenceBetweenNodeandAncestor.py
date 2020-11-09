# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxAncestorDiff(self, root: TreeNode) -> int:
        def findMaxMin(root,mx,mn):
            if(root==None): return mx-mn
            
            mx,mn=max(root.val,mx),min(root.val,mn) 
            left=findMaxMin(root.left,mx,mn) # max val subtree of root.left 
            right=findMaxMin(root.right,mx,mn)# max val subtree of root.right
            
            return max(left,right) 
            
        return findMaxMin(root,root.val,root.val)
        
        
        
            
        
                
                
