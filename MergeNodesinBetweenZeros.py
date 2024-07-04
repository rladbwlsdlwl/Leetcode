# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        def connectToZero(node, pSum):
            if node == None:
                return None
            if node.val == 0:
                curr = ListNode(pSum)
                curr.next = connectToZero(node.next, 0)
                return curr
            else:
                return connectToZero(node.next, pSum + node.val)

        return connectToZero(head.next, 0)
