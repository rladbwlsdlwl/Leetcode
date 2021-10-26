# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root==None:
            return None
        
        queue=[root] # BST
        while(queue):
            p=queue.pop(0)
             
            if p.left:
                queue.append(p.left)
            if p.right:
                queue.append(p.right)
                
            p.left,p.right=p.right,p.left
            
            
        return root
