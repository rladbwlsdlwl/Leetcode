# definition for a binary tree node.
# class treenode:
#     def __init__(self, val=0, left=none, right=none):
#         self.val = val
#         self.left = left
#         self.right = right
class solution:
    def sumofleftleaves(self, root: optional[treenode]) -> int:
        # sum of left's leaf node
        if root==none:
            return 0
        
        stack=[(root,false)]
        ans=0
        while stack:
            p,check=stack.pop()
            
            if p.left==none and p.right==none and check:
                ans+=p.val
            if p.left:
                stack.append((p.left, true))
            if p.right:
                stack.append((p.right, false))
                
        return ans
