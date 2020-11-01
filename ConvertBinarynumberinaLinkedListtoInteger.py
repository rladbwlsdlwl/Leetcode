# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        
        def getValue(node):
            if(node.next): return str(node.val)+getValue(node.next)
            if(node): return str(node.val)
            
        return int("0b"+str(getValue(head)),2)
