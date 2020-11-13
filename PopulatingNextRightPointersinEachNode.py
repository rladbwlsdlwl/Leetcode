"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution:
    def connect(self, root: 'Node') -> 'Node':
        if(not root): return root
    
        queue=[(root,1)]
        while queue:
            node,height=queue.pop(0)
            if(queue and height==queue[0][1]):
                node.next=queue[0][0]
                
            if(node.left): queue.append((node.left,height+1))
            if(node.right): queue.append((node.right,height+1))
                
        
        return root
                
            
