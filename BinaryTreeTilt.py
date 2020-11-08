# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTilt(self, root: TreeNode) -> int:
        def subtreeNode(node):
            if(node==None): return 0
            return node.val+subtreeNode(node.left)+subtreeNode(node.right)
        
        if(root==None): return 0 #empty list
        
        temp=[root]
        while(len(temp)):
            p=temp.pop()
            left=subtreeNode(p.left)
            right=subtreeNode(p.right)
            p.val=left-right if(left>right) else right-left
        
            if(p.left): temp.append(p.left)
            if(p.right): temp.append(p.right)
                
        return subtreeNode(root)
