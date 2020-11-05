# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def balanceBST(self, root: TreeNode) -> TreeNode:
        def inorder(root,arr):
            if(root):
                inorder(root.left,arr)
                arr.append(root.val)
                inorder(root.right,arr)
    
        def makeTree(arr):
            if(len(arr)):
                mid=(len(arr)-1)//2 #approach index
                root=TreeNode(arr[mid])
                root.left=makeTree(arr[:mid])
                root.right=makeTree(arr[mid+1:])
            else:
                return None
            return root
                
                
        arr=[]
        inorder(root,arr) #insert into sorted arr
        return makeTree(arr)
    
    
    
    
        
