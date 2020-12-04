# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        def inorder(root):
            if(root):
                inorder(root.left)
                self.curr.right=TreeNode(root.val)
                self.curr=self.curr.right
                inorder(root.right)
            
        head=self.curr=TreeNode(-1)
        inorder(root)
        
        return head.right
                
                

            
